#include<bits/stdc++.h>
using namespace std;

int main(){

 /*
   // if-else condition : 

    int a;
    cout<<"enter the value of a : ";
    cin>>a;

    if(a>0){
        cout<<"A is positive";
    }
    else{

        if(a<0){
            cout<<"a is negative";
        }
        else{
            cout<<"a is zero";
        }
    }


   // If-else ladder : 

    int age;
    cout<<"Enter the age : ";
    cin>>age;

    if(age > 0 && age <= 18){
        cout<<"The person is child";
    }
    else if(age > 18 && age <= 60){
        cout<<"The person is adult";
    }
    else if(age > 60){
        cout<<"The person is old";
    }



    // While loop

    int n;
    int i = 1;
    cout<<"Enter the value of n : ";
    cin>>n;

    while(i <= n){
        cout<< i <<" ";
        i++;
    }


    int n;
    int sum = 0;
    int i = 1;
    cout<<"Enter the value of n : ";
    cin>>n;

    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    
    cout<<"The total sum is : "<<sum<<endl;


    int n;
    int fac = 1;
    int i = 1;
    cout<<"Enter the value of n : ";
    cin>>n;

    while (i <= n)
    {
        fac = fac * i;
        i++;
    }
    
    cout<<"The factorial is : "<<fac<<endl;


    //for loop : 

    int n;
    int i;
    int sumEven = 0;
    cout<<"Enter the value of n : ";
    cin>>n;

    for(i = 0; i <= n; i= i+2){
        sumEven = sumEven + i;
    }

    cout<<"sum of all even number from 1 to "<<n<<" is : "<<sumEven<<endl;
 */

    int n,i ;
    cin>>n;

    if(n == 1){
        cout<<"The number is nor composite not prime";
    }

    for(i = 2; i < n; i++){

        if(n%i == 0){
            break;
        }     
    }

    if (n == i)
    {
        cout<<"The number is prime";
    }
    else{
        cout<<"The number is not prime";
    }

    return 0;
}