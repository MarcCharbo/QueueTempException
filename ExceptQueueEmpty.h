//
// Created by Marc Charbonneau on 6/9/17.
//

#ifndef QUEUETEMPLATEEXCEPTION_QUEUEEMPTY_H
#define QUEUETEMPLATEEXCEPTION_QUEUEEMPTY_H

#include "ExceptHandler.h"
class ExceptQueueEmpty:ExceptHandler {
public:
  ExceptQueueEmpty()= default;
  ~ExceptQueueEmpty()= default;
  virtual const char * what () const throw () {
    return "Queue is Full Exception";
  }

private:
};


#endif //QUEUETEMPLATEEXCEPTION_QUEUEEMPTY_H
