#include<bits/stdc++.h>
using namespace std;

class Man{

    public :

    int age;
    int id;
    int income;

    //creating constructor
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
    
    return 0;
}