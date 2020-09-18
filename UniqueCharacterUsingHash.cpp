#include<unordered_map>
#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;

void removeD(char input[]) {
	int n = strlen(input);
	unordered_map<char, bool> um;
	for(int i=0;i<n;i++) {
		if(um.count(input[i]) > 0) {
			continue;
		}
		um[input[i]] = true;
		cout<<input[i];
	}
}

int main() {
	char input[10000];
	cin.getline(input, 1000);
	removeD(input);
	return 0;
}
