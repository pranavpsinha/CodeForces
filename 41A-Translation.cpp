#include<bits/stdc++.h>
using namespace std;

int main() {
	string a, b;
	cin>>a>>b;
	
	int len = a.length();
	bool flag = true;
	
	for(int i=0; i<len; i++) {
		if(a[i] != b[len-1-i]) {
			flag = false;
			break;
		}
	}
	
	flag ? cout<<"YES" : cout<<"NO";
	cout<<endl;

	return 0;
}
