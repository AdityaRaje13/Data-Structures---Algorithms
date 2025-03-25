#include<bits/stdc++.h>
using namespace std;

class Man{

    public :

    int age;
    int id;
    int income;

    Man(int age, int id, int income){

        this -> age = age;
        this -> id = id;
        this -> income = income;
    }
};

int main(){

    //Constuctor is called as soon as the object is created

    Man Adiraj(21, 111, 150000);

    cout<<"Age : "<<Adiraj.age<<endl;

    cout<<"Id : "<<Adiraj.id<<endl;

    cout<<"Income : "<<Adiraj.income<<endl;
    

    //Copy contructor is created automatically
    Man Sai(Adiraj); //Here we copy all values in Sai

    cout<<"Sai"<<endl;

    cout<<"Age : "<<Sai.age<<endl;

    cout<<"Id : "<<Sai.id<<endl;

    cout<<"Income : "<<Sai.income<<endl;
    
    return 0;
}