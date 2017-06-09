//
// Created by Marc Charbonneau on 6/8/17.
//

#include "Container.h"


Container::Container(int size) :_size(size),_head_pos(0),_tail_pos(0)
{}

int Container::Capacity() {
  return ((_size)-_tail_pos);
}
