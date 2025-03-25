#include<bits/stdc++.h>
using namespace std;

class Queue{

    public :

    int qfront; 
    int qrear;
    int *arr;
    int size;

    Queue(int size){
        this->size = size;
        qfront = 0;
        qrear = 0;
        arr = new int[size];
    }

    void enqueue(int num){
        if(qrear == size){
            cout<<"Queue is full"<<endl;
        }
        else{
            arr[qrear] = num;
            qrear++;
        }
    }

    int dequeue(){
        if(qfront == qrear){
            cout << "Queue is empty" <<endl;
            qfront = 0;
            qrear = 0;
            return 0;
        }
        else{
            int ans = arr[qfront]; 
            arr[qfront] = -1;
            qfront++;
            return ans;
        }
    }

    void isEmpty(){
        if(qrear == qfront){
            cout<<"Queue is empty"<<endl;
        }
        else{
            cout<<"Queue is Not empty"<<endl;
        }
    }


    int front(){

        if(qfront ==qrear){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else{
            int ans = arr[qfront];
            
            return ans;
        }
    }


    int rear(){
        if(qfront ==qrear){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else{
            int ans = arr[qrear-1];
            return ans;
        }
    }
};

int main(){

    Queue q1(5);

    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);

    int a1 = q1.dequeue();
    // int a2 = q1.dequeue();
    // int a3 = q1.dequeue();
    // int a4 = q1.dequeue();
    // int a5 = q1.dequeue();

    // cout<< a1 <<" "<< a2 <<" "<< a3 <<" "<< a4 <<" "<< a5 <<endl;

    q1.isEmpty();

    int ans1 = q1.front();
    cout<<"Front element : "<<ans1<<endl;

    int ans2 = q1.rear();
    cout<<"Back element : "<<ans2<<endl;

    return 0;
}
