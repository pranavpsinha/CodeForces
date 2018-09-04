#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin>>n>>k;
	
	int e = 0;
	for(int i=0; i<n; i++) {
		int t;
		cin>>t;
		
		e += (t+k)>5 ? 0 : 1;
	}
	cout<<(e/3)<<endl;

	return 0;
}
