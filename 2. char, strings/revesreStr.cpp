#include<bits/stdc++.h>
using namespace std;

int getLength(char str[]){

    int count = 0;

    for(int i = 0; str[i] != '\0'; i++){
        count++;
    }

    return count;
}

void reverse(char str[], int n){

    int s = 0;
    int e = n-1;

    while(s < e){

        swap(str[s++], str[e--]);
    }
}

int main(){

    char name[20];
    
    cout<<"Enter the string : ";
    cin>>name;

    int n = getLength(name);

    reverse(name, n);

    cout<<"After Reverse : ";
    cout<<name;

    return 0;
}
