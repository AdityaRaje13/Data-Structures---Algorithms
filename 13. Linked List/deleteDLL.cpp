#include<iostream>
using namespace std;

class Node{

public:

    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void InsertAtStart(Node* &head, int data){

    Node* newNode = new Node(data);

    newNode->next = head;
    head->prev = newNode;

    head = newNode;
}

void display(Node* &head){

    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void DeleteAt(Node* &head, int pose){

    if(pose == 1){

        Node* temp = head;
        head = temp->next;

        head->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
    else{


    }
}

int main(){

    Node* n1 = new Node(10);
    Node* head = n1; 

    InsertAtStart(head, 15);
    InsertAtStart(head, 20);
    InsertAtStart(head, 25);
    InsertAtStart(head, 30);

    DeleteAt(head, 1);

    display(head);
}