#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

void display(Node* head){
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void append(int value, Node*& head){
    Node* nLast = new Node(value);
    Node* temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = nLast;
}

int main(){
    Node* head = new Node(0);
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);
    Node* n4 = new Node(40);

    head->next = n1;
    head->next->next = n2;
    head->next->next->next = n3;
    head->next->next->next->next = n4;
    append(50, head);

    display(head);
}