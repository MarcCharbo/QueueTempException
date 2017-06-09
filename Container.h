//
// Created by Marc Charbonneau on 6/8/17.
//

#ifndef QUEUETEMPLATEEXCEPTION_CONTAINER_H
#define QUEUETEMPLATEEXCEPTION_CONTAINER_H


class Container {
public:

  Container(int size=50);
  virtual ~Container(){};
  virtual bool IsEmpty() const =0;
  virtual int Size() const =0;

protected:
  int _size;
  int _head_pos;
  int _tail_pos;
  int Capacity();
private:

};


#endif //QUEUETEMPLATEEXCEPTION_CONTAINER_H
