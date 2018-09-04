#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, h;
	cin>>n>>h;
	
	int ans = 0;
	for(int i=0; i<n; i++) {
		int temp;
		cin>>temp;
		
		ans += temp%h==0 ? temp/h : 1+temp/h;
	}

	cout<<ans<<endl;

	return 0;
}
