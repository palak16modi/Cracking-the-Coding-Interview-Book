#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isUnique(string s){
	sort(s.begin(), s.end());
	
	for(int i=0; i<s.length()-1; i++){
		if(s[i] != s[i+1]) continue;
		else return false;
	}
	return true;
	
}

int main(int argc, char** argv) {
	string s;
	cin>>s;
	if(isUnique(s)) cout<<"unique";
	else cout<<"not unique";
	
	return 0;
}
