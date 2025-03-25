#include<bits/stdc++.h>
using namespace std;

int main () {

    int nums[10] = {1,1,0,1,0,1,1,0,0,0};
    
    int i = 0;
    int j = 9;

    while(i <= j){

        while(nums[i] == 0){
            i++;
        }
        while(nums[j] == 1){
            j--;
        }
        if(nums[i]==1 && nums[j]==0 && i<j){
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }

    cout<<"the sorted aray is : ";
    for(int i = 0; i < 10; i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}