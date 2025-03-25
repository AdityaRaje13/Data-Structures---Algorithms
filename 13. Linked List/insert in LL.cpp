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

    void insertStart(Node* &head, int data){

        //new node
        Node* temp = new Node(data);

        temp->next = head;
        head = temp;
    }

    void printLL(Node* &head){

        Node* temp = head;

        while(temp != NULL){

            cout<< temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};




int main(){

    Node* n1 = new Node(10);

    // cout<<n1->data<<endl;
    // cout<<n1->next<<endl;


    Node* head = n1;
    n1->insertStart(head, 12);
    n1->insertStart(head, 15);

    n1->printLL(head);

}