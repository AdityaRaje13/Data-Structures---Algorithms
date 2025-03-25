#include<bits/stdc++.h>
using namespace std;

//Creating the class named as Hero
class Hero{

    public: /* Access modifier */

    /* Properties */

    int health = 100;
    char name[20] = "Kirmada";
    int power = 1000;

    /* Functions */

    //Function with no parameters
    void run(){
        cout<<"Kirmada is running"<<endl;
    }

    //Function with no parameters
    void fight(int h){
        cout<<"Kirmada is fighting with health : "<<h/2<<endl;
    }

    //Function with Return value
    int powerConsumption(int p){

        p = p - 500;

        return p;
    }


};

int main(){

    //Creating object of class Hero

    Hero Aditya; //Object name is Aditya

    cout<<"Health of Aditya : "<<Aditya.health<<endl;

    cout<<"Character name of Aditya : "<<Aditya.name<<endl;

    cout<<"Power of Aditya : "<<Aditya.power<<endl;

    Aditya.run();

    Aditya.fight(Aditya.health);

    int newPower = Aditya.powerConsumption(Aditya.power);

    cout<<"Kirmada is Fighting for 2 hrs. His new Power is : "<<newPower<<endl;

    return 0;
}