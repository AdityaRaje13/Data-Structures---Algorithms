#include<bits/stdc++.h>
using namespace std;

    /* Multiple : 
    
         A    B
          \  /
            C
        
    */

class A{

    public :

    void funA(){
        cout<<"I am function A "<<endl;
    }
};

class B {

    public :

    void funB(){
        cout<<"I am function B "<<endl;
    }
};

class C : public A, public B{

    public :

    void funC(){
        cout<<"I am function C "<<endl;
    }
};



int main(){

    C obj;

    obj.funA();
    obj.funB();
    obj.funC();

    return 0;
}