#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,i,j;
    int count = 1;
    cout<<"Enter the number of rows/columns : ";
    cin>>n;

    for(i = 1; i <= n; i++){

        for(j = 1; j <= n; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}