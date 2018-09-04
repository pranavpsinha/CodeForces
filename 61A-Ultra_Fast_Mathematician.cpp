#include<bits/stdc++.h>
using namespace std;

int main() {
	string a;
	string b;
	cin>>a>>b;
	
	int len = a.length();
	
	string out = "";
	
	for(int i=0; i<len; i++) {
		int aa = (int)a[i];
		int ab = (int)b[i];
		
		out += aa==ab ? "0" : "1";
	}
	
	cout<<out<<endl;

	return 0;
}
