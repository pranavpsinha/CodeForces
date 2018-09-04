#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int o = 0;
	int e = 0;
	
	int lo = -1;
	int le = -1;
	
	int a[n];
	for(int i=0; i<n; i++) {
		cin>>a[i];
		
		bool ie = a[i] % 2 == 0;
		
		ie ? e++ : o++;
		ie ? le = i+1 : lo = i+1;
	}
	
	o>e ? cout<<le : cout<<lo;
	cout<<endl;

	return 0;
}
