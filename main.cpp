#include <iostream>
#include "Queue.h"
int main() {

  Queue<int> queue1(2);
  //std::cout<<queue1.IsEmpty() << std::endl;
  queue1.Push(1);
  queue1.Push(2);
  queue1.Push(3);
  queue1.Push(4);
  for (int i=0;i<queue1.Size();++i){
    std::cout<<queue1.Get(i) << std::endl;
  }

  return 0;
}