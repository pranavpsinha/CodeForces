#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	if(b==0) return a;
	
	gcd(b, a%b);
}

int main() {
	int a, b, n;
	cin>>a>>b>>n;
	
	// true -> simon
	bool flag = true;
	while(n>0) {
		n -= flag ? gcd(a, n) : gcd(b, n);
		flag = !flag;
	}
	flag ? cout<<"1" : cout<<"0";
	cout<<endl;

	return 0;
}
