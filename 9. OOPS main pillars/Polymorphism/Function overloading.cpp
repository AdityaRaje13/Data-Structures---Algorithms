#include<bits/stdc++.h>
using namespace std;

class Car{ 

    public :

    /*  example 1 : Wrong answer

    void speed(){
        cout<<"The speed of the car is 100 km/hr"<<endl;
    }

    void speed(){
        cout<<"The speed of the car is 200 km/hr"<<endl;
    }
    */

   /*  example 2 : Wrong answer

    int speed(){
        cout<<"The speed of the car is 100 km/hr"<<endl;
    }

    void speed(){
        cout<<"The speed of the car is 200 km/hr"<<endl;
    }
    */  
 
    //This Show the error because Function name is same

    //To over Come this we Function overloading

    //We just the input parameters

    //correct way by passing different arguments

    void speed(){
        cout<<"The speed of the car is 100 km/hr"<<endl;
    }

    void speed(int n){
        cout<<"The speed of the car is : "<<n<<endl;
    }

    void speed(char c){
        cout<<"The speed of the car is : "<<c<<endl;
    }

    void speed(int a, int b){
        cout<<"The speed of the car is : "<<a<<endl;
    }


    //In this we can run functions with same name which called as function overloading

};

int main(){
    
    Car c1;

    c1.speed();

    c1.speed(200);
    
    return 0;
}