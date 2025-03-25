#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node * next;

    Node(int data){

        this->data = data;
        this->next = NULL;
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

    void inserAtEnd(int data, Node* &tail){

        Node* newNode = new Node(data);

        tail->next = newNode;
        tail = newNode;
    }


    void insertAtPosition(Node* &head, Node* &tail, int idx, int data){

        Node* temp = head;
        int cnt = 1;

        while(cnt < idx){

            temp = temp->next;
            cnt++;
        }

        //Handle start case
        if(idx == 0){

            insertAtStart(data, head);
            return;
        }

         //Handle end case
        if(temp->next == NULL){

            inserAtEnd(data, tail);
            return;
        }

        //Handle middle case
        Node* newNode = new Node(data);

        newNode->next = temp->next;
        temp->next = newNode;


    }

    void deletion(int pose, Node* &head){

        if(pose == 1){

            Node* temp = head;
            head = head->next;

            //Releasing memory
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

    Node* head = n1;

    Node* tail = n1;

    n1->insertAtStart(12, head);

    n1->insertAtStart(15, head);

    n1->insertAtStart(18, head);

    n1->insertAtStart(20, head);

    n1->inserAtEnd(25, tail);

    n1->insertAtPosition(head, tail, 4, 22);

    cout<<"list before"<<endl;
    n1->display(head);
    cout<<endl;

    n1->deletion(1, head);

    cout<<"list after"<<endl;
    n1->display(head);

    cout<<endl;
    cout<<"Head"<<head->data<<endl;

    cout<<"Tail"<<tail->data<<endl;
}