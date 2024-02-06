#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class LinkedList {
public:
    Node* head;
    LinkedList() {
        head = NULL;
    }
    void insertNode(int);
    void printList();
};

void LinkedList::insertNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
    }
    else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void LinkedList::printList() {
    Node* temp = head;
    if (head == NULL) {
        cout << "List empty" << endl;
        return;
    }
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    LinkedList list;
    list.insertNode(1);
    list.insertNode(2);
    list.insertNode(3);
    list.insertNode(4);
    cout << "Elements of the list are: ";
    list.printList();
    return 0;
}