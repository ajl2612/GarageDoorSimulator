#ifndef MUTEX_H
#define MUTEX_H

#include <pthread.h>

namespace PThreads
{
    /**
     * Wrapper class for a pthread_mutex.
     * Wrapper class around a pthread mutex. Creates the mutex and provides
     * helper methods for working with it in an object oriented manner.
     */
    class Mutex
    {
    public:
        /**
         * Default Constructor.
         * Initializes the internal pthread mutex.
         */
        Mutex();
        
        /**
         * Default Destructor.
         * Destroys the internal pthread mutex.
         */
        virtual ~Mutex();
        
        /**
         * Lock the mutex.
         * Locks the mutex to prevent more than a single thread from accessing
         * some critical section. Make sure to call unlock!
         */
        virtual void lock();
        
        /**
         * Unlock the mutex.
         * Unlocks the mutex so that other threads can access the critical
         * section that the lock method and this method protect.
         */
        virtual void unlock();
        
    private:
        pthread_mutex_t _mutex;
    };
}

#endif