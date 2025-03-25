#include<bits/stdc++.h>
using namespace std;

int main () {

    vector<int> maxAns;
    vector<int> minAns;
    stack<int> s;

    int arr[5] = {10, 5, 20, 3, 15};
    int mini = INT_MAX;
    int maxi = INT_MIN;

    for(int i = 0; i < 5; i++){

        s.push(arr[i]);

        int curr = arr[i];

        if(curr < mini){
            mini = curr;
        }
        minAns.push_back(mini);

        if(curr > maxi){
            maxi = curr;
        }
        maxAns.push_back(maxi);
    
    }

    for(int i = 0; i < minAns.size(); i++){

        cout<<minAns[i]<<" ";
    }

    cout<<endl;

    for(int i = 0; i < maxAns.size(); i++){

        cout<<maxAns[i]<<" ";
    }

    return 0;
}