//
// Created by Marc Charbonneau on 6/8/17.
//

#ifndef QUEUETEMPLATEEXCEPTION_QUEUE_H
#define QUEUETEMPLATEEXCEPTION_QUEUE_H

//#include <memory>
//#include <utility>
#include <algorithm>
#include "Container.h"

template <typename T>
class Queue:Container {

public:
  Queue(int size=50):Container(size) {
    _queue = new T [_size];
  }
  ~Queue(){};
  bool IsEmpty() const override {
    return _tail_pos == 0;
  }
  int Size() const override {
    return this->_size;
  }

  void Push(const T& x){
    if(Capacity()==0) {
      _queue = Resize(_queue);
    }

      _queue[_tail_pos++] = x;
  }

  T& Pop(){
    if(IsEmpty()){
      return _queue[0];
    }
    else{

    }
  }

  T& Get(int idx){
    return _queue[idx];
  }

protected:
  T* Resize(T* q){
    _size = _size*2;
    T* temp_queue = new T[_size];
    std::copy(q, q+_size, temp_queue);
    delete[] q;
    q = temp_queue;
    return q;
  }

private:
  T* _queue;
};


#endif //QUEUETEMPLATEEXCEPTION_QUEUE_H
