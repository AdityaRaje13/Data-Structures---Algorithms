#include<iostream>
using namespace std;

int calSetbits(int x){

    int count = 0;

    while(x != 0){
        int bit = (x & 1);
        if(bit == 1){
            count++;
        }

        x = x >> 1;
    }

    return count;
}

int main(){

    int n;

    cout<<"Enter n : ";
    cin>> n ;

    cout<< "Number of set bits in "<<n<<" are "<<calSetbits(n);
    return 0;
}