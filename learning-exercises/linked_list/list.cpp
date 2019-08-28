#include <iostream>
#include <cstdlib>

#include "list.h"

using namespace std;


void LinkedList::addNode(int n)
{
  Node *tmp = new Node;
  tmp->data = n;
  tmp->next = NULL;

  if(head == NULL)
  {
    head = tmp;
    tail = tmp;
  }
  else
  {
    tail->next = tmp;
    tail = tail->next;
  }
}

void LinkedList::display()
{
  Node* ptr;
  ptr = head;

  while(ptr != NULL)
  {
    cout << ptr->data << endl;
    ptr = ptr->next;
  }
}
