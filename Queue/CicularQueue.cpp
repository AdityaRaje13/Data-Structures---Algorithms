#include<bits/stdc++.h>
using namespace std;

class CircularQueue{

    int front;
    int rear;
    int size;
    int *arr;

    public :

    CircularQueue(int size){
        this->size = size;
        front = rear = -1;
        arr = new int[size];
    }

    void enqueue(int num){

        //Queue is full
        if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))){
            cout<<"Queue is full"<<endl;
            return;
        }

        // First element
        else if(front == -1){
            front = rear = 0;
        }

        //Circular
        else if(front != 0 && rear == size-1){
            rear = 0;
        }

        //Normal flow
        else{
            rear++;
        }

        arr[rear] = num;
        cout<<"Number inserted successfully"<<endl;
    }


    void dequeue(){

        //Queue is empty
        if(front == -1){
            cout<<"Queue is empty"<<endl;
            return;
        }

        int ans = arr[front];
        arr[front] = -1;

        // Single element
        if(front == rear){
            front = rear = -1;
        }

        //Circular 
        else if(front == size-1){
            front = 0;
        }

        //Normal flow
        else{
            front++;
        }

        cout<<ans<<" deleted successfully"<<endl;
    }
};


int main(){

    CircularQueue c1(3);

    c1.enqueue(10);
    c1.enqueue(20);
    c1.enqueue(30);
    c1.enqueue(40); // Queue full msg

    c1.dequeue();
    c1.dequeue();
    c1.dequeue();
    c1.dequeue(); // Queue empty msg

    return 0;
}