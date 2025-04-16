#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

int main() {
    Node* a = new Node(1);
    a->next = new Node(3);
    a->next->next = new Node(5);

    Node* b = new Node(2);
    b->next = new Node(4);
    b->next->next = new Node(6);

    Node dummy(0), *tail = &dummy;
    while (a && b) {
        if (a->data < b->data) {
            tail->next = a;
            a = a->next;
        } else {
            tail->next = b;
            b = b->next;
        }
        tail = tail->next;
    }
    tail->next = (a ? a : b);

    Node* merged = dummy.next;
    while (merged) {
        cout << merged->data << " ";
        merged = merged->next;
    }
    return 0;
}
