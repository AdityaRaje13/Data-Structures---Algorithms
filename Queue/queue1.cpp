#include<bits/stdc++.h>
using namespace std;

int main(){

    queue<int> q1;

    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);
    q1.push(60);

    cout<<"Size of the queue : " << q1.size() << endl;

    cout<< "Front element : "<< q1.front()<<endl;

    cout<< "Back element : "<< q1.back()<< endl;

    cout<< " Queue is Empty : " << q1.empty()<<endl;

    while(q1.size() != 0){
        cout << q1.front() << " ";
        q1.pop();
    }
    cout<<endl;

    

    return 0;
}