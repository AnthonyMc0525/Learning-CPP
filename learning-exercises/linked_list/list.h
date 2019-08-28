#ifndef LIKEDLIST_H
#define LIKEDLIST_H

#include <iostream>

using namespace std;

class LinkedList
{
  private:
    struct Node { 
      int data; 
      Node *next; 
    }; 
    Node *head, *tail;
  
  public:
    LinkedList()
    {
      head = NULL;
      tail = NULL;
    }
    void addNode(int n);
    void display();

};



#endif
