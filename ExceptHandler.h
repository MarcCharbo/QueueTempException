//
// Created by Marc Charbonneau on 6/8/17.
//

#ifndef QUEUETEMPLATEEXCEPTION_EXCEPTHANDLER_H
#define QUEUETEMPLATEEXCEPTION_EXCEPTHANDLER_H

#include <iostream>
#include <exception>

class ExceptHandler: public std::exception {
public:
  ExceptHandler()= default;
  virtual ~ExceptHandler(){}
  virtual const char * what () const throw () {
      return "Generic Exception";
    }

private:
};


#endif //QUEUETEMPLATEEXCEPTION_EXCEPTHANDLER_H
