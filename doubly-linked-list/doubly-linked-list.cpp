// doubly-linked-list.cpp
#include "doubly-linked-list.h"
#include <string>
#include <iostream>

using namespace std;
typedef string Elem;

DoublyLinkedList::DoublyLinkedList()
{
  header = new Node;
  trailer = new Node;
  header->next = trailer; trailer->prev = header;
}
DoublyLinkedList::~DoublyLinkedList()
{
  while(header->next!=trailer){delMiddle(header->next);}
  delete header;
  delete trailer;
}
void DoublyLinkedList::addFront(string s)
{
  Node* n = new Node;n->elem = s;
  Node* q = header -> next;
  header->next = n; n->prev = header;
  n->next = q; q->prev = n;
}
void DoublyLinkedList::addMiddle(Node* n, string s)
{
  Node* newNode = new Node;newNode->elem = s;
  Node* nextNode = n->next;
  n->next = newNode;
  newNode->prev = n;
  nextNode->prev = newNode;
  newNode->next = nextNode;
}
void DoublyLinkedList::addLast(string s)
{
  Node* newNode = new Node;newNode->elem = s;
  Node* q = trailer->prev;
  q->next = newNode; newNode->prev = q;
  trailer->prev = newNode; newNode -> next = trailer;
}
void DoublyLinkedList::delFront()
{
  Node* q = header->next;
  Node* p = q->next;
  header->next = p; p->prev = header;  
  delete q;
}
void DoublyLinkedList::delMiddle(Node* n)
{
  Node* b = n->prev;
  Node* a = n->next;
  b->next = a;
  a->prev = b;
  delete n;
}
void DoublyLinkedList::delLast()
{
  Node* l = trailer->prev;
  Node* q = l->prev;
  q->next = trailer;trailer->prev = q;
  delete l;
}
Node* DoublyLinkedList::getFront()
{
  return header->next;
}
Node* DoublyLinkedList::getLast()
{
  return trailer->prev;
}
void DoublyLinkedList::getList()
{
  Node* n = header->next;
  while(n!=trailer){
    cout << n->elem << " ";
    n = n->next;
  }
}
