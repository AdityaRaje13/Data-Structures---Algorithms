#include <bits/stdc++.h>
using namespace std;

bool isEven(int x){

    if(x % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int n;
    cin>>n;

    bool res = isEven(n);

    if(res){
        cout<<"The number is Even";
    }
    else{
        cout<<"The number is Odd";
    }

    return 0;
}