#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int> v){

    int max = -1;

    for(int i = 0; i < v.size(); i++){

        if(v[i] > max){

            max = v[i];
        }
    }

    return max;
}

int main(){

    int arr[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
    
    vector<int> total;

    for(int i = 0; i < 3; i++){

        int sum = 0;

        for(int j = 0; j < 4; j++){

            sum = sum + arr[i][j];
          
        }

        total.push_back(sum);
    }
    
    for(int i = 0; i < total.size(); i++){

        cout<<"Sum of the row no : "<<i<<" is = "<<total[i]<<endl;
    }

    cout<<"Largest Row sum is : "<<findMax(total);
    
    return 0;
}