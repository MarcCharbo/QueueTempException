#include <iostream>
#include "Queue.h"
#include "ExceptQueueEmpty.h"
int main() {

  try {
    // Creates queue<int>
    Queue<int> queue1(2);

    // Pushes 2 vals
    queue1.Push(1);
    queue1.Push(2);

    // Creates queue2 by calling copy ctor
    Queue<int> queue2(queue1);

    // Pops 1,2 from queue1
    std::cout<<queue1.Pop() << std::endl;
    std::cout<<queue1.Pop() << std::endl;
    std::cout << std::endl;

    // Pushes which 2 sizes (one at 3 and 5)
    queue1.Push(3);
    queue1.Push(4);
    queue1.Push(5);

    // Creates queue3 by calling assignment operator
    Queue<int> queue3 = queue1;

    // Pops 3 from queue3
    std::cout<<queue3.Pop() << std::endl;

    std::cout << std::endl;

    // Creates a queue<double>
    Queue<double > queue4 (3);

    // Pushes 3 doubles
    queue4.Push(3.3);
    queue4.Push(6.6);
    queue4.Push(9.9);

    std::cout << std::endl;

    // cout queue4 3.3,6.6,9.9
    for (int i=queue4.GetStartIdx();i<queue4.GetEndIdx();++i){
      std::cout<< queue4.GetIdx(i) << std::endl;
    }

    // calls assignment operator that takes diff queue
    queue4 = queue1;

    // push 9.9 at end of queue4
    queue4.Push(9.9);

    std::cout << std::endl;

    // cout queue1 should be 3,4,5
    for (int i=queue1.GetStartIdx();i<queue1.GetEndIdx();++i){
      std::cout<< queue1.GetIdx(i) << std::endl;
    }

    std::cout << std::endl;

    // cout queue2 should be 1,2
    for (int i=queue2.GetStartIdx();i<queue2.GetEndIdx();++i){
      std::cout<< queue2.GetIdx(i) << std::endl;
    }

    std::cout << std::endl;

    // cout queue3 should be 4,5
    for (int i=queue3.GetStartIdx();i<queue3.GetEndIdx();++i){
      std::cout<< queue3.GetIdx(i) << std::endl;
    }

    std::cout << std::endl;

    // cout queue1 should be 3,4,5, 9.9 (so type hasnt changed
    for (int i=queue4.GetStartIdx();i<queue4.GetEndIdx();++i){
      std::cout<< queue4.GetIdx(i) << std::endl;
    }
  }

  catch (ExceptQueueEmpty& e){
    std::cout << e.what() << std::endl;
  }

  catch (ExceptHandler& e){
    std::cout << e.what() << std::endl;
  }

  return 0;
}