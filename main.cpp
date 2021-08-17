#include <iostream>
#include "LinkedList.h"

int main() {
  // std::cout << "linkedList1!\n";
  LinkedList linkedList;
  // linkedList.Preppend(10);
 // linkedList.Preppend(45);
 // linkedList.Preppend(35);
  //linkedList.Preppend(12);
  //linkedList.Preppend(25);
 // linkedList.Display();
 // LinkedList linkedList2;
 // linkedList2.Append(10);
  //linkedList2.Append(45);
 // linkedList2.Append(35);
 // linkedList2.Append(12);
  linkedList.Append(25);
  linkedList.Insert(0, 7);
  linkedList.Delete(0);
  linkedList.Delete(1);
  std::cout << "linkedList!\n";
  linkedList.Display();
}