#include <iostream>
#include <pthread.h>
#include "mutex.h"

PThreads::Mutex::Mutex()
{
    pthread_mutex_init( &this->_mutex, NULL );
}

PThreads::Mutex::~Mutex()
{
    pthread_mutex_destroy( &this->_mutex );
}

void PThreads::Mutex::lock()
{
    if( pthread_mutex_lock( &this->_mutex ) )
    {
        std::cout << "Failed to lock mutex!" << std::endl;
        pthread_exit( NULL );
    }
}

void PThreads::Mutex::unlock()
{
    if( pthread_mutex_unlock( &this->_mutex ) )
    {
        std::cout << "Failed to unlock mutex!" << std::endl;
        pthread_exit( NULL );
    }
}
