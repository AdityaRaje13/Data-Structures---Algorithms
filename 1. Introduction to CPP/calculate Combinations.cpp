#include <bits/stdc++.h>
using namespace std;

int factorial(int num){
    int ans = 1;

    for(int i = 1; i <= num; i++){
        ans = ans * i;
    }

    return ans;
}

int calCombinations(int n, int r, int n_r){

   return ( n/(r*n_r) );
}

int main()
{
    int n, r;
    cout<<"Enter the value of n :";
    cin>>n;
    cout<<"Enter the value of r :";
    cin>>r;

    int nFact = factorial(n);
    int rFact = factorial(r);
    int n_rfact = factorial(n -r);

    int answer = calCombinations(nFact, rFact, n_rfact);

    cout<<"Total combinations made are : "<<answer<<endl;

    return 0;
}