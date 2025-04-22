#include <iostream>
#include <string>

using namespace std;

class Node {
private:
    string data;
    Node* next;

    friend class SLinkedList;
public:
    Node(string&);
};

class SLinkedList{
private:
    Node* head;
public:
    SLinkedList();
    Node addFront(string& e);
    Node delFront();
    Node addMiddle(Node&, int);
    Node delMiddle(int);
    void printList();
};
