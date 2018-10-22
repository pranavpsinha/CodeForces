#include<bits/stdc++.h>
using namespace std;

int main() {
	char c;
	cin>>c;
	
	int inc = (c=='R')?-1:+1;
	
	string al = "qwertyuiop[]asdfghjkl;'zxcvbnm,./";
	
	string str;
	cin>>str;
	
	for(char o : str) {
		for(int i=0; i<34; i++) {
			if((int)o == (int)al[i]) {
				cout<<al[i+inc];
			}
		}
	}
	cout<<endl;

	return 0;
}
