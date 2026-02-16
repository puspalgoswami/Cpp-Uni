class Node {
    public:
        int value;
        Node* next;

        Node(int value) {
            this->value = value;
            this->next = nullptr;
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

        void append(int value) {}
        void prepend(int value) {}
        bool insert(int index, int value) {}
};

int main(){
    LinkedList* myLinkedList = new LinkedList(4);
}