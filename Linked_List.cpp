#include <bits/stdc++.h>
using namespace std;

class Node {
    
    public:
    int data;
    Node* next;
    
    // constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int d) {
    
    // New node
    Node* temp = new Node(d); 
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d) {
    
    // New node
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d) {
    
    // Inserting at First position
    if(position == 1) {
        insertAtHead(head, d);
        return;
    }
    
    Node* temp = head;
    int count = 1;
    
    while(count < position - 1 ) {
        temp = temp -> next;
        count++;
    }
    
    //  Insert at Last Position
    if( temp -> next == NULL ) {
        insertAtTail(tail, d);
        return;
    }
    
    // Create a Node for d
    Node* nodeToInsert  = new Node(d);
    nodeToInsert -> next = temp -> next;  
    temp -> next = nodeToInsert;
}


void print(Node* &head) {
    Node* temp = head;
    
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main() {
    
    //Created a new node
    Node* node1  = new Node(10);
    
    Node* head = node1;
    Node* tail = node1;
    print(head);
    
    //Insert at head position
//    insertAtHead(head, 12);
//    print(head);
    
    // Insert at tail postition
    insertAtTail(tail, 12);
    print(head);
    
    insertAtTail(tail, 15);
    print(head);
    
    //Insert at position
    insertAtPosition(tail, head, 1, 22);
    print(head);
    
}