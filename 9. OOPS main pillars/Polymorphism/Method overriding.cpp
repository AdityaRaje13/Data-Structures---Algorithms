#include<bits/stdc++.h>
using namespace std;

class Man{

    public :

    void speak(){

        cout<<"Man is speaking"<<endl;
    }
};

class Dog : public Man{

    public :

    void speak(){

        cout<<"Dog is Barking"<<endl;
    }
};


int main(){
    
    Dog sheru;

    sheru.speak();
    
    return 0;
}