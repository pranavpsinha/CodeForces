#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	n = n>0 ? n : -n;
	
	int ans = n%5==0 ? n/5 : n/5+1;
	
	cout<<ans<<endl;

	return 0;
}
