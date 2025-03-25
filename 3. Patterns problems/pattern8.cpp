#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,i,j,val;
    cout<<"Enter the number of rows/columns : ";
    cin>>n;

    for(i = 1; i <= n; i++){

        val = i;
        for(j = 1; j <= i; j++){
            cout<<val<<" ";
            val--;
        }
        cout<<endl;
        
    }
}