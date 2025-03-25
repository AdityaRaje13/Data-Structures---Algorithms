#include<bits/stdc++.h>
using namespace std;

class Stack{

public:
    int size;
    int *arr;
    int top;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size-top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;  
        }
        else{
            return false;
        }
    }

    void display(){

        if(top == -1) return;

        for(int i = top; i >= 0; i--){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){

    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);

    s.pop();

    int a = s.peek();
    cout<<"Top element : "<<a<<endl;

    bool b = s.isEmpty();
    if(b){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is Not empty"<<endl;
    }

    s.display();

    return 0;
}