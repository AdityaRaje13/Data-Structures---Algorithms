#include<bits/stdc++.h>
using namespace std;

int main(){

    //creation of stack
    stack<int> s;

    //inserting elements
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);

    //Top elements
    cout<<"Top element : "<<s.top()<<endl;

    //empty or not
    if(s.empty()){
        cout<<"The stack is empty"<<endl;
    }
    else{
        cout<<"The stack is not empty"<<endl;
    }

    //Size
    cout<<"Size of the stack : "<<s.size()<<endl;

    return 0;
}