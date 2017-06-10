#include <iostream>
#include "Queue.h"
#include "ExceptQueueEmpty.h"
int main() {

  try {
    Queue<int> queue1(2);
    //std::cout<<queue1.IsEmpty() << std::endl;
    queue1.Push(1);
    queue1.Push(2);
    Queue<int> queue2(queue1);
    std::cout<<queue1.Pop() << std::endl;
    std::cout<<queue1.Pop() << std::endl;
    std::cout<<queue1.Pop() << std::endl;
    queue1.Push(3);
    queue1.Push(4);
    queue1.Push(5);
    Queue<int> queue3 = queue1;
    std::cout<<queue1.Pop() << std::endl;

    for (int i=0;i<queue1.Size();++i){
      std::cout<<queue1.Get(i) << std::endl;
    }

    std::cout << std::endl;

    for (int i=0;i<queue2.Size();++i){
      std::cout<<queue2.Get(i) << std::endl;
    }

    std::cout << std::endl;

    for (int i=0;i<queue1.Size();++i){
      std::cout<<queue1.Get(i) << std::endl;
    }
  }

  catch (ExceptQueueEmpty& e){
    std::cout << e.what() << std::endl;
  }

  catch (std::exception& e){
    std::cout << "Unhandled Exception" << std::endl;
  }



  return 0;
}