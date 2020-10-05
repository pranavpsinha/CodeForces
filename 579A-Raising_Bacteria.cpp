#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int b = 0;
	while(n>0) {
		b += n&1==1 ? 1 : 0;
		n>>=1;
	}
	cout<<b<<endl;

	return 0;
}
