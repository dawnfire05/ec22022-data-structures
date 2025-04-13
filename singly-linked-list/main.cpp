#include <iostream>
#include <string>
#include "singly-linked-list.h"

using namespace std;

int main()
{
    SLinkedList sll = SLinkedList();
    string name = "이신혁";
    Node node = Node(name);
    sll.addFront(node);
}