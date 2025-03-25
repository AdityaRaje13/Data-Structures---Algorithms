#include<bits/stdc++.h>
using namespace std;

int main(){

    char name[20];
    int count = 0;

    cout<<"Enter Your name : ";
    cin>>name;
    
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }

    cout<<"characters in your name are : "<<count<<endl;

    return 0;
}
