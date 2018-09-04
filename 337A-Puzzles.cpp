#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin>>n>>m;
	
	int a[m];
	for(int i=0; i<m; i++) {
		cin>>a[i];
	}
	sort(a, a+m);
	
	int in = m-n+1;
	int diff[in];
	int j=0;
	for(int i=0; i<in; i++) {
		diff[j++] = a[i+n-1] - a[i];
	}
	sort(diff,diff+j);
	
	cout<<diff[0]<<endl;

	return 0;
}
