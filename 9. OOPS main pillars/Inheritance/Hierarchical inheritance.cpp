#include<bits/stdc++.h>
using namespace std;

    /* Hierarchical : 
    
        A
       / \
      B    C
    
    */

class A{

    public :

    void funA(){
        cout<<"I am function A "<<endl;
    }
};

class B : public A{

    public :

    void funB(){
        cout<<"I am function B "<<endl;
    }
};

class C : public A{

    public :

    void funC(){
        cout<<"I am function C "<<endl;
    }
};



int main(){

    B obj1;

    obj1.funA();
    obj1.funB();
    
    C obj2;

    obj2.funA();
    obj2.funC();

    return 0;
}