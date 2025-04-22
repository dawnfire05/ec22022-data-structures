// doubly-linked-list.h
#ifndef __DOUBLY_LINKED_LIST__
#define __DOUBLY_LINKED_LIST__

#include <string>

using namespace std;
typedef string Elem;

class Node
{
public:
  Node();
  ~Node();
private:
  Elem elem;
  Node* prev;
  Node* next;
friend class DoublyLinkedList;
};

class DoublyLinkedList
{
public:
  DoublyLinkedList();
  ~DoublyLinkedList();
  void addFront(string s);
  void addMiddle(Node* n, string s);
  void addLast(string s);
  void delFront();
  void delMiddle(Node* n);
  void delLast();
  Node* getFront();
  Node* getLast();
  void getList();
    
private:
  Node* header;
  Node* trailer;
};

#endif
#define __DOUBLY_LINKED_LIST__

#include <string>

using namespace std;
typedef string Elem;

class Node
{
public:
  Node();
  ~Node();
private:
  Elem elem;
  Node* prev;
  Node* next;
friend class DoublyLinkedList;
};

class DoublyLinkedList
{
public:
  DoublyLinkedList();
  ~DoublyLinkedList();
  void addFront(string s);
  void addMiddle(Node* n, string s);
  void addLast(string s);
  void delFront();
  void delMiddle(Node* n);
  void delLast();
  Node* getFront();
  Node* getLast();
  void getList();
    
private:
  Node* header;
  Node* trailer;
};

#endif
#ifndef __DOUBLY_LINKED_LIST__
#define __DOUBLY_LINKED_LIST__

#include <string>

using namespace std;
typedef string Elem;

class Node
{
public:
  Node();
  ~Node();
private:
  Elem elem;
  Node* prev;
  Node* next;
friend class DoublyLinkedList;
};

class DoublyLinkedList
{
public:
  DoublyLinkedList();
  ~DoublyLinkedList();
  void addFront(string s);
  void addMiddle(Node* n, string s);
  void addLast(string s);
  void delFront();
  void delMiddle(Node* n);
  void delLast();
  Node* getFront();
  Node* getLast();
  void getList();
    
private:
  Node* header;
  Node* trailer;
};

#endif
