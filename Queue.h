//
// Created by Marc Charbonneau on 6/8/17.
//

#ifndef QUEUETEMPLATEEXCEPTION_QUEUE_H
#define QUEUETEMPLATEEXCEPTION_QUEUE_H

#include <algorithm>
#include "Container.h"

template <typename T>
class Queue:Container {

public:
  // ctor
  Queue(int size=50):Container(size) {
    _queue = new T [_size];
  }

  //Copy ctor
  Queue(const Queue& src):Container(src._size,src._head_pos,src._tail_pos){
    _queue = new T[src._size];
    for (int i=0;i<_tail_pos;++i){
      _queue[i] = src._queue[i];
    }
  }

  // Copy assignment
  Queue& operator=(const Queue &src) {
    Queue temp_q(src);
    swap(*this, temp_q);
    return *this;
  }

  friend void swap(Queue& lhs, Queue& rhs){
    using std::swap;
    swap(lhs._queue, rhs._queue);
    swap(lhs._head_pos, rhs._head_pos);
    swap(lhs._tail_pos, rhs._tail_pos);
    swap(lhs._size, rhs._size);
  }

  ~Queue(){
    delete[] _queue;
  };

  bool IsEmpty() const override {
    return (_head_pos == _tail_pos);
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
    if(!IsEmpty()){
      return _queue[_head_pos++];

    }
    else{
    throw ExceptQueueEmpty();
    }
  }

  T& Get(int idx){
    return _queue[idx];
  }

protected:
  T* Resize(T* q){
    _size = _size*2;
    T* temp_queue = new T[_size];
    int idx=0;
    for (int i=_head_pos;i<_tail_pos;++i){
      temp_queue[idx] = q[_head_pos+i];
      idx++;
    }
    _tail_pos = _tail_pos - _head_pos;
    _head_pos = 0;
    delete[] q;
    q = temp_queue;
    return q;
  }

private:
  T* _queue;
};

#endif //QUEUETEMPLATEEXCEPTION_QUEUE_H
