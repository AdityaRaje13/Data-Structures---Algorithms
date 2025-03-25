#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,i,j;
    char ch = 97;
    cout<<"Enter the number of rows/columns : ";
    cin>>n;

    for(i = 1; i <= n; i++){

        for(j = 1; j <= i; j++){
            cout<< ch << " ";
            ch = ch +1;
        }
        cout<<endl;
        ch = 97;
    }

}