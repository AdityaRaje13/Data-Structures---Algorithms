#include<bits/stdc++.h>
using namespace std;

void getMin_push(int stack[], int minArr_push[], int n, int mini){

    int idx = 0;

    for(int i = idx; i < n; i++){

        if(stack[i] < mini){
            mini = stack[i];
            minArr_push[idx] = mini;
            idx++;
        }
        else{
            minArr_push[idx] = mini;
            idx++;
        }
    }
}

void getMax_push(int stack[], int maxArr_push[], int n, int maxi){

    int idx = 0;

    for(int i = idx; i < n; i++){

        if(stack[i] > maxi){
            maxi = stack[i];
            maxArr_push[idx] = maxi;
            idx++;
        }
        else{
            maxArr_push[idx] = maxi;
            idx++;
        }
    }

}

int getMin_pop(int stack[], int n){

    int temp = stack[0];

    for(int i = 0; i < n; i++){

        if(stack[i] < temp){
            temp = stack[i];
        }    
    }

    return temp;
}


int getMax_pop(int stack[], int n){

    int temp = stack[0];

    for(int i = 0; i < n; i++){

        if(stack[i] > temp){
            temp = stack[i];
        }    
    }

    return temp;
}


void display(int array[], int n){
    for(int i = 0; i < n; i++){
        cout<<array[i]<<" ";
    }
}

int main () {

    int arr[5] = {10, 5, 20, 3, 15};
    int mini = INT_MAX;
    int maxi = INT_MIN;

    int minArr_push[5];
    int maxArr_push[5];

    int minArr_pop[5];
    int maxArr_pop[5];

    int stack[5];

    cout<<"Push Into the Stack : "<<endl;
    cout<<endl;

    for(int i = 0; i < 5; i++){
        
        stack[i] = arr[i];

        getMin_push(stack, minArr_push, i+1, mini);
        getMax_push(stack, maxArr_push, i+1, maxi);
    }

    cout<<"Minimum Element after Each push : "<<endl;
    display(minArr_push, 5);

    cout<<endl;

    cout<<"Maximum Element after Each push : "<<endl;
    display(maxArr_push, 5);

    cout<<endl;
    cout<<"---------------------------------------------------------"<<endl;
    cout<<endl;

    cout<<"Pop From the Stack : "<<endl;
    cout<<endl;

    int pop_idx = 5;
    int idx = 0;

    for(int i = 0; i < 5; i++){

        int x = getMin_pop(stack, pop_idx);
        minArr_pop[idx] = x;

        int y = getMax_pop(stack, pop_idx);
        maxArr_pop[idx]= y;

        idx++;
        pop_idx--;
    }

    cout<<"Minimum Element after Each Pop: "<<endl;
    display(minArr_pop, 5);

    cout<<endl;

    cout<<"Maximum Element after Each Pop : "<<endl;
    display(maxArr_pop, 5);

    return 0;
}