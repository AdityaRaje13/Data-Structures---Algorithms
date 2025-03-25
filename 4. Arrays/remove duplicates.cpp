#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[10] = {0,0,0,1,1,2,2,2,2,3};

    int temp = arr[0];

    ans.push_back(temp);

    for(int i = 1; i < 10; i++){

        if(arr[i] == temp){
            continue;
        }
        else{
            temp = arr[i];
            ans.push_back(temp);
        }
    }

    cout<<"Size of answer : "<<ans.size()<<endl;

    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}