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

    void insertAtEnd(int d, Node* &tail){

        Node* newNode = new Node(d);

        tail->next = newNode;
        tail = newNode;
    }

    void displayNode(Node* &head){

        Node* temp = head;

        while(temp != NULL){

            cout<< temp->data<<" ";

            temp = temp->next;
        }
    }
};

int main(){

    Node* n1 = new Node(10);

    // cout<<n1->data<<endl;
    // cout<<n1->address<<endl;

    Node* head = n1;
    Node* tail = n1;

    n1->insertAtEnd(12, tail);

    n1->insertAtEnd(15, tail);

    n1->insertAtEnd(18, tail);

    n1->displayNode(head);
    
}