#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,i,j;
    cout<<"Enter the number of rows/columns : ";
    cin>>n;

    for(i = 1; i <= n; i++){
        
        for(j = n; j >= 1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}