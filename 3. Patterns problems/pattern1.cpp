#include<bits/stdc++.h>
using namespace std;

int main(){

    int row,i,j;
    cout<<"Enter the number of rows/columns : ";
    cin>>row;

    for(i= 1; i <= row; i++){

        for(j = 1; j <= row; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}