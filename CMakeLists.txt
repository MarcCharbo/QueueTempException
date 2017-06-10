cmake_minimum_required(VERSION 3.7)
project(QueueTemplateException)
set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp ExceptHandler.h Queue.h Container.cpp Container.h ExceptQueueEmpty.h)
add_executable(QueueTemplateException ${SOURCE_FILES})