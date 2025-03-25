#include<bits/stdc++.h>
using namespace std;

bool isKeyFound(int arr[3][4], int row, int col, int k){
 
     for(int i = 0; i < row; i++){
         
        for(int j = 0; j < col; j++){

            if(arr[i][j] == k){
                return 1;
            }            
        }
    }

    return 0;
}

int main(){

    int arr[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

    int key = 2;

    if(isKeyFound(arr, 3, 4, key)){
        cout<<"Key is Present ";
    }
    else{
        cout<<"Key is not Present ";
    }

    return 0;
}