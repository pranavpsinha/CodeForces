#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int p = 0;
	int c = 0;
	for(int i=0; i<n; i++) {
		int t;
		cin>>t;
		
		p += t;
		if(p<0) {
			c++;
			p = 0;
		}
	}
	cout<<c<<endl;

	return 0;
}
