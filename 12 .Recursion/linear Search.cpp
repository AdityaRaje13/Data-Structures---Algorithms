#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[], int n, int k){

    if(n == 0){
        return false;
    }

    if(arr[0] == k){
        return true;
    }
    else{
        bool remaining = isPresent(arr+1, n-1, k);
        return remaining;
    }
}


int main(){
    
    int arr[5] = {1, 2, 3, 4, 5};
    int key;

    cout<<"Enter Key to search : ";
    cin>>key;

    bool res = isPresent(arr, 5, key);

    if(res){
        cout<<key<<" is present in the array."<<endl;
    }
    else{
        cout<<key<<" is not present in the array."<<endl;
    }
    
    return 0;
}