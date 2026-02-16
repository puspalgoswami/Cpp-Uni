#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {    
        data = val;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;
    Node* tail;
    int length;

public:
    LinkedList(int value) {
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
        length = 1;
    }

    ~LinkedList() {
        Node* temp = head;
        while (head != nullptr) {
            head = head->next;
            delete temp;
            temp = head;
        }
    }

    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }

    void append(int value) {
        Node* newNode = new Node(value);

        if (length == 0) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }

        length++;
    }

    void prepend(int value) {
        Node* newNode = new Node(value);

        if (length == 0) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }

        length++;
    }

    void deleteLast() {
        if (length == 0) return;

        Node* temp = head;

        if (length == 1) {
            head = nullptr;
            tail = nullptr;
        } else {
            Node* pre = head;
            while (temp->next != nullptr) {
                pre = temp;
                temp = temp->next;
            }

            tail = pre;
            tail->next = nullptr;
        }

        delete temp;
        length--;
    }

    void deleteFirst() {
         if (length == 0) return;

        Node* temp = head;

        if (length == 1) {
            head = nullptr;
            tail = nullptr;
        } else {
            head = head->next;
        }
        delete temp;
        length--;
    }

    Node* get(int index) {
        if (index < 0 || index >= length) return nullptr;
        Node* temp = head;
        for (int i = 0; i<index; i++) {
            temp = temp->next;
        }
        return temp;
    }

    bool set(int index, int value){
        Node* temp = get(index);
        if (temp != nullptr) {
            temp->data = value;
        }
    }
};

int main() {

    LinkedList* myLinkedList = new LinkedList(1);

    myLinkedList->append(2);
    myLinkedList->append(3);
    myLinkedList->prepend(0);

    myLinkedList->set(1, 5);

    myLinkedList->printList();

    return 0;
}