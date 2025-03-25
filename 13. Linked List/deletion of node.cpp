#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data){

        this->data = data;
        this->next= NULL;
    }

    ~Node(){

        if(this->next != NULL){

            delete next;
            next = NULL;
        }
    }

    void insertAtStart(int data, Node* &head){

        Node* newNode = new Node(data);

        newNode->next = head;
        head = newNode;  
    }

    void insertAtEnd(int data, Node* &tail){

        Node* newNode = new Node(data);

        tail->next = newNode;
        tail = newNode;
    }

    void insertAtPosition(int pose, int data, Node* &head, Node* &tail){

        int cnt = 1;
        Node* temp = head;

        while(cnt < pose){

            temp = temp->next;
            cnt++;
        }

        //Start position
        if(pose == 1){

            insertAtStart(data, head);
            return;
        }

        //End position
        if(temp->next == NULL){

            insertAtEnd(data, tail);
            return;
        }

        //insert at position
        Node* newNode = new Node(data);
        newNode->next = temp->next;
        temp->next = newNode; 

    }

    void deletion(int pose, Node* &head){

        if(pose == 1){

            Node* temp = head;
            head = temp->next;

            temp->next = NULL;
            delete temp;
        }
        else{

            Node* curr = head;
            Node* prev = NULL;

            int cnt = 1;
            while(cnt < pose){

                prev = curr;
                curr = curr->next;
                cnt++;
            }

            prev->next = curr->next;

            curr->next = NULL;

            delete curr;
        }
    }

    void reverse(Node* head){

        Node* prev = NULL;
        Node* curr = head;
        Node* forward = NULL;

        while(curr != NULL){

            forward = curr->next;

            curr->next = prev;

            prev = curr;

            curr = forward;
        }

        display(prev);
    }


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

    Node* head = n1;

    Node* tail = n1;

    n1->insertAtStart(12, head);

    n1->insertAtStart(15, head);

    n1->insertAtStart(18, head);

    n1->insertAtEnd(8, tail);

    n1->insertAtPosition(3, 33, head, tail);

    n1->deletion(3, head);

    n1->display(head);

    cout<<endl;
    cout<<endl;

    cout<<"Reversed Linked list"<<endl;

    n1->reverse(head);

    cout<<endl;
    cout<<endl;

    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;


}