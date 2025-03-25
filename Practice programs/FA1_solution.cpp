#include<bits/stdc++.h>
using namespace std;

void getMin_push(vector<int> stack, int minArr_push[], int n, int mini){

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

void getMax_push(vector<int> stack, int maxArr_push[], int n, int maxi){

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

int getMin_pop(vector<int> stack, int n){

    int temp = stack[0];

    for(int i = 0; i < n; i++){

        if(stack[i] < temp){
            temp = stack[i];
        }    
    }

    return temp;
}


int getMax_pop(vector<int> stack, int n){

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

    int n;
    int temp;
    vector<int> userInput;

    cout<<"Enter Size of the stack to push : ";
    cin>>n;

    for(int i = 0; i < n; i++){
        cout<<"Enter number "<<i+1<<" : ";
        cin>>temp;
        userInput.push_back(temp);
    }

    int mini = INT_MAX;
    int maxi = INT_MIN;

    int minArr_push[n];
    int maxArr_push[n];

    int minArr_pop[n];
    int maxArr_pop[n];

    vector<int> stack;

    cout<<"Push Into the Stack : "<<endl;
    cout<<endl;

    for(int i = 0; i < userInput.size(); i++){
        
        stack.push_back(userInput[i]);

        getMin_push(stack, minArr_push, i+1, mini);
        getMax_push(stack, maxArr_push, i+1, maxi);
    }

    // cout<<"Your stack is : "<<endl;
    // cout<<endl;

    // for(int i = 0; i < stack.size(); i++){
        
    //     cout<<stack[i]<<" ";
    // }

    cout<<"Minimum Element after Each push : "<<endl;
    display(minArr_push, n);

    cout<<endl;

    cout<<"Maximum Element after Each push : "<<endl;
    display(maxArr_push, n);

    cout<<endl;
    cout<<"---------------------------------------------------------"<<endl;
    cout<<endl;

    cout<<"Pop From the Stack : "<<endl;
    cout<<endl;

    int pop_idx = n;
    int idx = 0;

    for(int i = 0; i < n; i++){

        int x = getMin_pop(stack, pop_idx);
        minArr_pop[idx] = x;

        int y = getMax_pop(stack, pop_idx);
        maxArr_pop[idx]= y;

        idx++;
        pop_idx--;
    }

    cout<<"Minimum Element after Each Pop: "<<endl;
    display(minArr_pop, n);

    cout<<endl;

    cout<<"Maximum Element after Each Pop : "<<endl;
    display(maxArr_pop, n);

    return 0;
}