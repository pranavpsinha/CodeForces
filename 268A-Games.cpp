#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int *l = new int[100]();
	int *r = new int[100]();
	
	for(int i=0; i<n; i++) {
		int a, b;
		cin>>a>>b;
		
		l[a-1]++;
		r[b-1]++;
	}
	
	int sum = 0;
	for(int i=0; i<100; i++) {
		sum += (l[i]*r[i]);
	}
	
	cout<<sum<<endl;

	return 0;
}
