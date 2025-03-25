#include<bits/stdc++.h>
using namespace std;

int main(){

    deque<int> d1;

    d1.push_front(10);
    d1.push_front(20);
    d1.push_front(30);
    d1.push_front(40);

    d1.push_back(80);
    d1.push_back(70);
    d1.push_back(60);
    d1.push_back(50);

    cout<<"size : "<<d1.size()<<endl;

    cout<<"Front element : "<<d1.front()<<endl;

    while(d1.size() != 0){
        cout<<d1.front()<<" ";
        d1.pop_front();
    }

    return 0;
}