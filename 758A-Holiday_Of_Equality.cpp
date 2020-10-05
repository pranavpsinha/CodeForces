#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int max = -1;
	int a[n];
	for(int i=0; i<n; i++) {
		cin>>a[i];
		max = max>a[i] ? max : a[i];
	}
	
	int s = 0;
	for(int i=0; i<n; i++) {
		s += (max - a[i]);
	}
	cout<<s<<endl;

	return 0;
}
