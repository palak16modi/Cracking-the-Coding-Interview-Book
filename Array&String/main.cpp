#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string URLify(string s){
	int n=s.length();
	int j = n-1;
	int i = n-1;
	
	while(s[i] == ' '){
		i--;
	}
	
	while(i>=0){
		if(s[i]!=' '){
			s[j] = s[i];
			j--;
			i--;
		}
		else{
			s[j]='0';
			j--;
			s[j]='2';
			j--;
			s[j]='%';
			j--;
		}
	}
	
	return s;
}

int main(int argc, char** argv) {
	string s;
	cin>>s;
	cout<<URLify(s);
	return 0;
}
