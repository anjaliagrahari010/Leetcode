class MyLinkedList {
public:
    class Node {
    public:
        int val;
        Node* next;
        Node(int val) {
            this->val=val;
            next = NULL;
        }
    };
    Node* head;
    int size;
    MyLinkedList() {
        head = NULL;
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index > size-1)
            return -1;
        Node* temp = head;
        while (index--) {
            temp = temp->next;
        }
        return temp->val;
    }

    void addAtHead(int val) {
        Node* new_node = new Node(val);
        new_node->next=head;
        head = new_node;
        size++;
    }

    void addAtTail(int val) {
        Node* new_node = new Node(val);
        if (head == NULL) {
            head = new_node;
            size++;
            return;
        }
        Node* temp = head;
        while (temp->next!=NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
        size++;
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > size)
            return;
        if (index == 0) {
            addAtHead(val);
            return;
        }

        if (index == size) {
            addAtTail(val);
            return;
        }
        Node* prev = head;
        for (int i = 0; i < index - 1; i++) {
            prev = prev->next;
        }
        Node* new_node = new Node(val);
        new_node->next = prev->next;
        prev->next = new_node;
        size++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index > size-1)
            return;
        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            size--;
            return;
        }
        Node* temp = head;
        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }
        Node* temp1 = temp->next;
        temp->next = temp1->next;
        delete (temp1);
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */