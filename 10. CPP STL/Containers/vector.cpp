#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v;

    //INsert element 
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

     for(int i : v){
        cout<< i <<" ";
    }
    cout<<endl;

    //capacity
    cout<<"Capacity of Vector : "<< v.capacity()<<endl;

    //Vector Size
    cout<<"Size of Vector : "<< v.size()<<endl;

    //Vector index element
    cout<<"element at 2nd index : "<< v.at(0)<<endl;

    //Vector empty or not
    cout<<"Vector is empty or not: "<< v.empty()<<endl;

    //Vector 1st element
    cout<<"First element of Vector : "<< v.front()<<endl;

    //Vector last element
    cout<<"Last element of Vector : "<< v.back()<<endl;

    //Remove element
    v.pop_back();
    cout<<"Last element of Vector : "<< v.back()<<endl;

    v.clear();
    cout<<"after clearing the vector"<<endl;
    cout<<"Size of Vector : "<< v.size()<<endl;//size become 0
    cout<<"Capacity of Vector : "<< v.capacity()<<endl;//Capacity is not become 0

    return 0;
}