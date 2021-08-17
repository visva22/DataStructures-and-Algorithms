#include <iostream>
#include "LinkedList.h"

int main() {
  std::cout << "Hello World!\n";
  LinkedList linkedList;
  linkedList.Preppend(10);
  linkedList.Preppend(45);
  linkedList.Preppend(35);
  linkedList.Preppend(12);
  linkedList.Preppend(25);
  linkedList.Display();
}