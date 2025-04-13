#include <iostream>
#include <string>
#include "singly-linked-list.h"

using namespace std;

Node::Node(string& data): data(data){}

SLinkedList::SLinkedList(): head(NULL){}
Node SLinkedList::addFront(Node& node)
{
    node-> next = head;
    head = &node;
    return *head;
}
Node SLinkedList::delFront(){}
Node SLinkedList::addMiddle(Node& node, int index){}
Node SLinkedList::delMiddle(int n){}
void SLinkedList::printList(){}