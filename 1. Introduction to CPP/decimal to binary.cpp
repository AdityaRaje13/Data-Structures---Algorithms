#include<bits/stdc++.h>
using namespace std;

int main() {

    int n,bit;
    cin>>n;

    int ans = 0, i = 0;
    while(n != 0){

        bit = (n & 1);

        ans = ( bit * pow(10, i) ) + ans; 

        n = n >> 1;
        i++;
    }

    cout<< "Binary form is "<<ans<<endl;

    return 0;
}