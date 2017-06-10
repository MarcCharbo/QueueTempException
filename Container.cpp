//
// Created by Marc Charbonneau on 6/8/17.
//

#include "Container.h"

Container::Container(int size, int head, int tail) :_size(size),_start_pos
   (head),_end_pos(tail)
{}

int Container::Capacity() {
  return ((_size)-_end_pos);
}

bool Container::IsEmpty() const {
  return (_start_pos == _end_pos);
}

int Container::GetStartIdx() const {
  return _start_pos;
}

int Container::GetSize() const {
  return this->_size;
}

int Container::GetEndIdx() const {
  return _end_pos;
}
