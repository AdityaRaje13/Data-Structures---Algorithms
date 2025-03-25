#include <bits/stdc++.h>
using namespace std;

int countDigit(int n){

    int count = 0;
    while(n != 0){
        int digit = n%10;
        if(digit >= 0){
            count++;
        }
        n/=10;
    }
    return count;
}

bool checkArmstrong(int num){
    int m = num;
    int sum = 0;

    while(m != 0){
        int digit = m%10;
        sum = sum + pow(digit, countDigit(num));
        m/=10;
    }

    if(num == sum){
        return true;
    }
    else{
        return false;
    }

}

int main () {

    int n;
    cin>>n;

    bool isArm = checkArmstrong(n);

    if(isArm){
        cout<<"The number is armstrong";
    }
    else{
        cout<<"The number is not armstrong";
    }
    return 0;
}