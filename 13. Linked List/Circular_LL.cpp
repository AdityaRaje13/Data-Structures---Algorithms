#include<bits/stdc++.h>
using namespace std;

class Node{

    public:

    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    ~Node(){

        if(this->next != NULL){
            delete next;
            next = NULL;
        }
    }
};

void insertNode(Node* &tail, int e, int d){

    //For empty list
    if(tail == NULL){

        Node* newNode = new Node(d);

        tail = newNode;
        newNode->next = newNode;
    }
    //If Node is not empty
    else{

        Node* curr = tail;

        while(curr->data != e){
            curr = curr->next;
        }

        Node* newNode = new Node(d);

        newNode->next = curr->next;
        curr->next = newNode;
    }
}

void display(Node* tail){

    Node* temp = tail;

    if(tail == NULL){
        cout<<"List is empty"<<endl;
    }

    else{

        do{

        cout<<tail->data<<" ";
        tail = tail->next;

        } while(tail != temp);
    }
}

void deleteNode(Node* &tail, int e){

    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }

    else{

        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != e){

            curr = curr->next;
            prev = prev->next;
        }

        prev->next = curr->next;

        //For deleting if only one element in list
        if(curr == prev){
            tail = NULL;
        }

        //For deleting tail
        else if(tail->data == e){
            tail = prev;
        }

        curr->next = NULL;

        delete curr;
    }
}


int main(){

    Node* tail = NULL;

    insertNode(tail, 5, 3);

    insertNode(tail, 3, 5);

    insertNode(tail, 5, 7);

    insertNode(tail, 7, 9);

    insertNode(tail, 5, 11); //Insert at any position

    display(tail);

    cout<<endl;

    deleteNode(tail, 11);

    deleteNode(tail, 3);

    display(tail);

    cout<<endl;

    cout<<tail->data;
}