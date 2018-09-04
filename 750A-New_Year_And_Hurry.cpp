#include<bits/stdc++.h>
using namespace std;

int main() {
	int q, t;
	cin>>q>>t;
	
	int n = 240;
	n -= t;
	
	int c = 0;
	int j = 1;
	
	for(int i=1; i<=q; i++) {
		if(n>=5*j) {
			n -= 5*j++;
			c++;
		} else {
			break;
		}
	}
	cout<<c<<endl;

	return 0;
}
