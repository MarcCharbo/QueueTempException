cmake_minimum_required(VERSION 3.7)
project(QueueTemplateException)
set(CMAKE_CXX_STANDARD 14)
#find_package(GTEST REQUIRED)

set(SOURCE_FILES main.cpp ExceptHandler.cpp ExceptHandler.h Queue.cpp Queue.h Container.cpp Container.h ExceptQueueEmpty.cpp ExceptQueueEmpty.h)

#include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
add_executable(QueueTemplateException ${SOURCE_FILES})
#target_link_libraries(QueueTemplateException ${GTEST_LIBRARIES}
#${GTEST_MAIN_LIBRARIES})
#target_link_libraries(QueueTemplateException SFECS)