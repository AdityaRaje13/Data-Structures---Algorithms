#include<bits/stdc++.h>
using namespace std;

int main(){

    deque<int> d;


    //insertion from back and front
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_front(1);

    for(int i : d){
        cout<< i <<" ";
    }
    cout<<endl;

    //Deque Size
    cout<<"Size of Deque : "<< d.size()<<endl;

    //Deque index element
    cout<<"element at 2nd index : "<< d.at(2)<<endl;

    //Deque empty or not
    cout<<"Deque is empty or not: "<< d.empty()<<endl;

    //Deque 1st element
    cout<<"First element of Deque : "<< d.front()<<endl;

    //Deque last element
    cout<<"Last element of Deque : "<< d.back()<<endl;


    return 0;
}