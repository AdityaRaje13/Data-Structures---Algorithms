#include <bits/stdc++.h>
using namespace std;

int power()
{
    int ans = 1;
    int x, y;
    cout << "Enter the x ans y : ";
    cin >> x >> y;

    for (int i = 1; i <= y; i++)
    {
        ans = ans * x;
    }

    return ans;
}

int main()
{
    int answer = power();
    cout << "Answer is : "<< answer;
    cout<<endl;

    while (1)
    {
        int next;
        cout<<"Enter 1 to continue or 0 to exit "<<endl;
        cin>>next;

        if (next == 1)
        {
            int answer = power();
            cout << "Answer is : "<< answer;
            cout<<endl;
        }
        else if(next == 0){
            break;
        }
        else{
            break;
        }
    }

    return 0;
}