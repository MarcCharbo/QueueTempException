//
// Created by Marc Charbonneau on 6/8/17.
//

#include "Container.h"


Container::Container(int size, int head, int tail) :_size(size),_head_pos
   (head),_tail_pos(tail)
{}

int Container::Capacity() {
  return ((_size)-_tail_pos);
}
