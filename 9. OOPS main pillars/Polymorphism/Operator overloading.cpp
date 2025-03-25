#include<bits/stdc++.h>
using namespace std;

class Operation{

    public :

    //We can use operators for our custom use
    //In the following way we can create their functions

    void operator+ (Operation &o) {

        cout<<"This is Plus operator used for custom use"<<endl;
    }

    void operator() () {

        cout<<"This is () operator used for custom use"<<endl;
    }

    void operator< (int m) {

        cout<<"This is < operator used for custom use : "<<m<<endl;
    }
};

int main(){
    
    Operation o1, o2;

    o1 + o2;

    o1();

    o2<(5);
    
    return 0;
}