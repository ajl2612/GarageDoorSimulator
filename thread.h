#ifndef THREAD_H
#define THREAD_H

#include <string>
#include <pthread.h>
#include "mutex.h"

/**
 * pthread wrapper classes.
 * Provides a set of wrapper classes around various pthread constructs.
 * These allow proper object oriented programming when working with pthreads.
 */
namespace PThreads
{
    /**
     * Abstract thread class.
     * Wrapper around a pthread_t primitive which hides away the gory details of
     * creating a thread. Subclasses need to override the run method.
     * The thread will not begin execution until the start method is called.
     */
    class Thread
    {
    public:
        /**
         * Begin thread execution.
         * Create the pthread primitive and make it begin execution.
         */
        virtual void start();
        
        /**
         * Calling thread will block until this thread exits.
         * When called from a particular thread, this method will force the
         * calling thread to block until the thread that this object
         * encapsulates completes its execution and calls pthread_exit.
         */
        virtual void join();
        
        /**
         * Retrieve the thread's pthread handle.
         */
        pthread_t getHandle();
    
    protected:
        /**
         * Run the thread.
         * Pure virtual method which is where the thread's work should
         * be performed.
         * @warning Must be implemented in a subclass!
         */
        virtual void run() = 0;
        
        /**
         * A Mutex for the thread instance.
         * This mutex is provided for protecting critical sections within the
         * thread itself from being modified by other threads..
         */
        PThreads::Mutex _mutex;
        
    private:
        static void* _run( void* );
        pthread_t _handle;
    };
}

#endif
