#include<iostream>
using namespace std;

class Node{

    public :
    int data;
    Node* prev = NULL;
    Node* next = NULL;

    Node(int data){

        this->data = data;
    }
};

void insertAtStart(Node* &head, int d){

    Node* newNode = new Node(d);

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertAtEnd(Node* &tail, int d){

    Node* newNode = new Node(d);

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insertAtPosition(Node* &head, Node* &tail, int pose, int d){

    //insert at start
    if(pose == 1){

        insertAtStart(head, d);
        return;
    }

    int cnt = 1;
    Node* temp = head;

    while(cnt < pose-1){

        temp = temp->next;
        cnt++;
    }

    //Insert at end
    if(temp->next == NULL){

        insertAtEnd(tail, d);
        return;
    }

    //insert at position
    Node* newNode = new Node(d);
    
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;

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

    // cout<<n1->prev<<endl;
    // cout<<n1->data<<endl;
    // cout<<n1->next<<endl;

    Node* head = n1;

    Node* tail = n1;

    insertAtStart(head, 12);
    insertAtStart(head, 14);
    insertAtStart(head, 16);

    insertAtEnd(tail, 8);
    insertAtEnd(tail, 6);
    insertAtEnd(tail, 4);

    insertAtPosition(head, tail, 1, 33);
    insertAtPosition(head, tail, 9, 22);

    display(head);

    cout<<endl;

    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
}