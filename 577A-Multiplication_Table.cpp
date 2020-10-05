#include<bits/stdc++.h>
using namespace std;

bool isPrime(int a) {
	if(a == 1) return true;
	if(a == 2) return true;
	if(a == 3) return true;
	
	for(int i=2; i*i<=a; i++) {
		if(a%i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n, x;
	cin>>n>>x;
	
	int c = 0;
	for(int i=2; i<=n; i++) {
		if(x%i == 0 && x/i <=n) c++;
	}
	if(x <= n) c++;
	cout<<c<<endl;

	return 0;
}
