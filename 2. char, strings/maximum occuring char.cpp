#include<bits/stdc++.h>
using namespace std;

int main(){

    string chars = "aaabbcdddd";
    string ans = "";
    int i = 0;

    while(i <= chars.length()-1){

        int count = 1;
        char ch = chars[i];
        
        for(int j = i+1; chars[j] != '\0'; j++){

            if(chars[i] == chars[j]){
                count++;
            }
            else{
                break;
            }
        }

        cout<<"count of "<<ch<<" = "<<count<<endl;

        if(count == 1){
            ans.push_back(ch);
        }
        else{
            ans.push_back(ch);
            char n = '0' + count;
            ans.push_back(n);
        }

        i = i+count;
    }

    cout<<chars<<endl;
    cout<<ans;    
    return 0;
}
