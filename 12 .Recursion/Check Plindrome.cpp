#include<bits/stdc++.h>
using namespace std;

bool check(string str, int s, int e){

	if(s > e){
		return true;
	}
	
	if(str[s] != str[e]){
		return false;
	}
	else{
		bool temp = check(str, s+1, e-1);
        return temp;
	}
	
}

int main()
{
    string s = "acbca";
	int i = 0;
	int j = s.size()-1;

	bool res = check(s, i, j);
	
	if(res){
		cout<<"It is Palindrome";
	}
	else{
		cout<<"It is not Palindrome";
	}
}