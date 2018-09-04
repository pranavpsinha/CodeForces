#include<bits/stdc++.h>
using namespace std;

int main() {
	long long n, k;
	cin>>n>>k;
	
	long long numOdds = n%2==0 ? n/2 : 1 + n/2;
	
	if(k<=numOdds) {
		cout<<(2*k - 1);
		
	} else {
		k -= numOdds;
		cout<<2*k;
	}
	cout<<endl;

	return 0;
}
