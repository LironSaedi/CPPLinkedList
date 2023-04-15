// CPPLinkedLists.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LinkedList.h"
#include "Node.h"


int main()
{
    std::cout << "Hello World!\n";
    int value = 3;
  
    Node<int> node = Node<int>(value, nullptr);
    
    LinkedList<int> linkedlist = LinkedList<int>();
    
    linkedlist.AddFirst(2);
    linkedlist.AddFirst(3);
    linkedlist.AddFirst(4);
    linkedlist.AddFirst(5);
    ;
    //node.
    //Node::
}