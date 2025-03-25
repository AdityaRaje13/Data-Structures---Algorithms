#include<bits/stdc++.h>
using namespace std;

class Node{

public:
    int data;
    Node* next;

    Node(int data){

        this->data = data;
        this->next = NULL;
    }
};


void insertAtHead(Node* &head, int data){

    Node* newNode = new Node(data);

    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node* &tail, int data){

    Node* newNode = new Node(data);

    tail->next = newNode;
    tail = newNode;
}

void display(Node* &head){

    Node* temp = head;

    while(temp != NULL){

        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main(){

    Node* n1 = new Node(10);

    // cout<<n1->data<<endl;
    // cout<<n1->next<<endl;

    Node* head = n1;
    Node* tail = n1;


    insertAtHead(head, 12);
    insertAtEnd(tail, 14);
    display(head);

}