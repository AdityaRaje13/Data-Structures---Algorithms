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

    void insertAtStart(int d, Node* &head){

        Node* newNode = new Node(d);

        newNode->next = head;
        head = newNode;
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

    n1->insertAtStart(12, head);

    n1->insertAtStart(15, head);

    n1->insertAtStart(18, head);

    n1->displayNode(head);
    
}