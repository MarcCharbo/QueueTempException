//
// Created by Marc Charbonneau on 6/8/17.
//

#ifndef QUEUETEMPLATEEXCEPTION_CONTAINER_H
#define QUEUETEMPLATEEXCEPTION_CONTAINER_H

#include "ExceptQueueEmpty.h"

class Container {
public:
  Container(int size=50, int head=0, int tail=0);
  virtual ~Container(){};
  int GetEndIdx() const;
  int GetStartIdx() const;
  int GetSize() const;
  bool IsEmpty() const;

protected:
  int _size;
  int _start_pos;
  int _end_pos;
  int Capacity();


private:

};


#endif //QUEUETEMPLATEEXCEPTION_CONTAINER_H
