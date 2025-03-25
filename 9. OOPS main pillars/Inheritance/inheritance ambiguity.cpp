#include<bits/stdc++.h>
using namespace std;

class A{

    public :

    void sameFun(){
        cout<<"I am function of A "<<endl;
    }
};

class B {

    public :

    void sameFun(){
        cout<<"I am function of B "<<endl;
    }
};

class C : public A, public B{

};



int main(){

    C obj;

    obj.A::sameFun();  //In this way resolve the ambiguity
    obj.B::sameFun();

    return 0;
}