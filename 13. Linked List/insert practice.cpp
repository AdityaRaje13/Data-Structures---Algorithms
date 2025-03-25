#include<iostream>
using namespace std;

class Node{

    public:

    int data;
    Node* next;

    Node(int data){

        this->data = data;
        this->next = NULL;
    }

    //Insert from start
    /*
    void insertAtStart(int data, Node* &head){

        Node* newNode = new Node(data);

        newNode->next = head;
        head = newNode;
    }
    */

   //Insert from end

    void insertAtEnd(int data, Node* &tail){

        Node* newNode = new Node(data);

        tail->next = newNode;
        tail = newNode;
    }

    //Printing / Traversing the list

    void display(Node* &head){

        Node* temp = head;

        while(temp != NULL){

            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }

};


int main(){

    Node* n1 = new Node(10);

    // cout<<n1->data<<endl;
    // cout<<n1->next<<endl;

    Node* head = n1; //String n1 address in head

    Node* tail = n1;

    // n1->insertAtStart(12, head);

    // n1->insertAtStart(15, head);


    n1->insertAtEnd(12, tail);

    n1->insertAtEnd(15, tail);

    n1->display(head);

}