#include<bits/stdc++.h>
using namespace std;

class Student{

    private : 

    int rollNo = 10;
    string name = "Aditya";
    float marks = 99.15;
    int id;

    public :

    int getRoll(){
        return rollNo;
    }

    string getName(){
        return name;
    }

    void setId(int i){
        id = i;
    }

    int getId(){
        return id;
    }

};

int main(){

    //We cant access the private members of class directly
    //Hence we use the getter & setter

    Student Adi;

    cout<<"Roll NO of Adi is : "<<Adi.getRoll()<<endl;

    cout<<"Full Name of Adi is : "<<Adi.getName()<<endl;

    Adi.setId(111);

    cout<<"ID NO of Adi is : "<<Adi.getId()<<endl;
    
    return 0;
}