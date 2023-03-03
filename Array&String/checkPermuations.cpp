#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkPermutation(string s1, string s2){
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());
	
	for(int i=0; i<s1.length(); i++){
		if(s1[i] == s2[i]) continue;
		else return false;
	}
	return true;
}

int main(int argc, char** argv) {
	string s1, s2;
	cin>>s1>>s2;
	if(checkPermutation(s1,s2)) cout<<"yes";
	else cout<<"no";
	
	return 0;
}
