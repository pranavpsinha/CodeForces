#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int sum1 = 0;
	for(int i=0; i<n; i++) {
		int t;
		cin>>t;
		
		sum1 += t;
	}
	
	n--;
	int sum2 = 0;
	for(int i=0; i<n; i++) {
		int t;
		cin>>t;
		
		sum2 += t;
	}
	
	cout<<(sum1 - sum2)<<endl;
	
	n--;
	sum1 = 0;
	for(int i=0; i<n; i++) {
		int t;
		cin>>t;
		
		sum1 += t;
	}
	
	cout<<(sum2 - sum1)<<endl;

	return 0;
}
