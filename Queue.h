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
  Queue(const Queue& src):Container(src._size,src._start_pos,src._end_pos){
    _queue = new T[src._size];
    for (int i=0;i<_end_pos;++i){
      _queue[i] = src._queue[i];
    }
  }

  // Copy assignment
  Queue<T>& operator=(const Queue<T> &src) {
    Queue temp_q(src);
    swap(*this, temp_q);
    return *this;
  }

  template <class T2>
  Queue<T>& operator=(const Queue<T2>& src) {
    auto temp_size = src.GetSize();
    Queue temp_q(temp_size);
    temp_q._start_pos = src.GetStartIdx();
    temp_q._end_pos = src.GetEndIdx();
    for (int i=0;i<_end_pos;++i){
      _queue[i] = static_cast<T>(src.GetIdx(i));
    }
    return *this;

  }


  friend void swap(Queue& lhs, Queue& rhs){
    using std::swap;
    swap(lhs._queue, rhs._queue);
    swap(lhs._start_pos, rhs._start_pos);
    swap(lhs._end_pos, rhs._end_pos);
    swap(lhs._size, rhs._size);
  }

  ~Queue(){
    delete[] _queue;
  };

  bool IsEmpty() const override {
    return (_start_pos == _end_pos);
  }

  int GetSize() const override {
    return this->_size;
  }

  int GetEndIdx() const override{
    return _end_pos;
  }

  int GetStartIdx() const override{
    return _start_pos;
  }

  void Push(const T& x){
    if(Capacity()==0) {
      _queue = Resize(_queue);
    }
      _queue[_end_pos++] = x;
  }

  T& Pop(){
    if(!IsEmpty()){
      return _queue[_start_pos++];

    }
    else{
    throw ExceptQueueEmpty();
    }
  }

  T& GetIdx(int idx) const{
    return _queue[idx];
  }


protected:
  T* Resize(T* q){
    _size = _size*2;
    T* temp_queue = new T[_size];
    int idx=0;
    for (int i=_start_pos;i<_end_pos;++i){
      temp_queue[idx] = q[_start_pos+i];
      idx++;
    }
    _end_pos = _end_pos - _start_pos;
    _start_pos = 0;
    delete[] q;
    q = temp_queue;
    return q;
  }

private:
  T* _queue;
};

#endif //QUEUETEMPLATEEXCEPTION_QUEUE_H
