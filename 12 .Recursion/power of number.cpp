#include<bits/stdc++.h>
using namespace std;

int power(int n){

    //base case
    if(n == 0){
        return 1;
    }

    //small solution
    int res = power(n-1);

    //big problem
    int ans = 2 * res;

    return ans;
}

int main(){
    

    int n;
    cin>>n;

    cout<<"2 to the power "<<n<<" is : "<<power(n);

    return 0;
}