#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	getline(cin, str);
	
	int *c = new int[26]();
	for(char ch : str) {
		int a = (int) ch - 97;
		if (a>=0 && a<=25) c[a]++;
	}
	
	int count = 0;
	for(int i=0; i<26; i++) {
		if(c[i] > 0) count++;
	}
	
	cout<<count<<endl;

	return 0;
}
