#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

int main() {
    int n;
    cin >> n;
    
    if (n == 0) {
        cout << "List is empty" << endl;
        return 0;
    }
  
    int val;
    cin >> val;
    Node* head = new Node(val);
    Node* tail = head;
    
    for (int i = 1; i < n; i++) {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    Node* temp = head;
    head = head->next;
    delete temp;
    if (head == nullptr) {
        cout << "List is empty" << endl;
    } else {
        Node* curr = head;
        while (curr != nullptr) {
            cout << curr->data << " ";
            curr = curr->next;
        }
    }
    
    return 0;
}