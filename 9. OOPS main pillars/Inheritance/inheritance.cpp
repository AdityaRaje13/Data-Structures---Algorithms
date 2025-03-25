#include<bits/stdc++.h>
using namespace std;

class Human{  //Parent class

    public: 

    int age = 40;
    int weight = 85;
    int height = 177;

    void movement(){
        cout<<"The human is able to do movements"<<endl;
    }
};


class Male : public Human{ //Child class inherited from Human class

    public: 

    string name = "Aditya";
    float marks = 99.15;

    void run(){
        cout<<"Aditya is running "<<endl;
    }

};



int main(){

    Male Adi;

    cout<<"Age : "<<Adi.age<<endl;
    cout<<"weight : "<<Adi.weight<<endl;
    cout<<"height : "<<Adi.height<<endl;
    cout<<"Name : "<<Adi.name<<endl;
    cout<<"marks : "<<Adi.marks<<endl;

    Adi.movement();

    Adi.run();
}