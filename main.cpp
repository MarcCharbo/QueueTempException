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
    //std::cout<<queue1.Pop() << std::endl;
    queue1.Push(3);
    queue1.Push(4);
    queue1.Push(5);
    Queue<int> queue3 = queue1;
    std::cout<<queue1.Pop() << std::endl;

    std::cout << std::endl;

    Queue<double > queue4 (3);
    queue4.Push(3.3);
    queue4.Push(6.6);
    queue4.Push(9.9);

    std::cout << std::endl;

    for (int i=queue4.GetStartIdx();i<queue4.GetEndIdx();++i){
      std::cout<< queue4.GetIdx(i) << std::endl;
    }

    queue4 = queue1;
    queue4.Push(9.9);

    std::cout << std::endl;

    for (int i=queue4.GetStartIdx();i<queue4.GetEndIdx();++i){
      std::cout<< queue4.GetIdx(i) << std::endl;
    }

    std::cout << std::endl;

    for (int i=queue1.GetStartIdx();i<queue1.GetEndIdx();++i){
      std::cout<< queue1.GetIdx(i) << std::endl;
    }

    std::cout << std::endl;

    for (int i=queue2.GetStartIdx();i<queue2.GetEndIdx();++i){
      std::cout<< queue2.GetIdx(i) << std::endl;
    }

    std::cout << std::endl;

    for (int i=queue3.GetStartIdx();i<queue3.GetEndIdx();++i){
      std::cout<< queue3.GetIdx(i) << std::endl;
    }

    std::cout << std::endl;

    for (int i=queue4.GetStartIdx();i<queue4.GetEndIdx();++i){
      std::cout<< queue4.GetIdx(i) << std::endl;
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