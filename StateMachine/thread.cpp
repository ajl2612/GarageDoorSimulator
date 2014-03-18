#include "thread.h"

void PThreads::Thread::start()
{
    // Start up the thread.
    pthread_create( &this->_handle, NULL, Thread::_run, (void*)this );
}

void PThreads::Thread::join()
{
    // Join on this thread.
    pthread_join( this->_handle, NULL );
}

pthread_t PThreads::Thread::getHandle()
{
    return _handle;
}

void* PThreads::Thread::_run(void * args)
{
    // We always pass in an instance of something that is a subclass of the
    // thread class.
    Thread* that = (Thread*) args;
    
    // Run the thread.
    that->run();
    
    // Bail out.
    pthread_exit(NULL);
}