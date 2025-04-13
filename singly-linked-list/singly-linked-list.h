#include <iostream>
#include <string>

using namespace std;

class Node {
private:
    string data;
    Node* next;
public:
    Node(string&);
};

class SLinkedList{
private:
    Node* head;
public:
    SLinkedList();
    Node addFront(Node&);
    Node delFront();
    Node addMiddle(Node&, int);
    Node delMiddle(int);
    void printList();
};