#include<bits/stdc++.h>
using namespace std;

void reverse(string& str, int s, int e){

    if(s > e){
        return;
    }

    swap(str[s], str[e]);
    s++;
    e--;

    reverse(str, s, e);
}

int main(){
    
    string name = "ADITYA";

    int s = 0;
    int e = name.size()-1;

    reverse(name, s, e);

    cout<<"Reversed string is : "<<name;

    return 0;
}