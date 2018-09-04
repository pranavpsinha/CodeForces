#include<bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin>>n;
	
	long long odds = n/2;
	
	unsigned long long sa = n%2 == 0 ? (n/2)*(n+1) : ((n+1)/2)*n;
	unsigned long long so = odds*odds;
	
	so += n%2 == 0 ? 0 : n;
	
	long long ans = (sa - so*2);
	
	cout<<ans<<endl;

	return 0;
}
