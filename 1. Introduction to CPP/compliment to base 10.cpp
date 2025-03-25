#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    bool ans= false;
    cin >> n;

    for(int i = 0; i < 31; i++){
        int res = pow(2, i);
        if(n == res){
            ans = true;
            break;
        }
    }

    if(ans){
        cout<<n<<" is the compliment to the base 10";
    }
    else{
        cout<<n<<" is not compliment to the base 10";
    }

    return 0;
}