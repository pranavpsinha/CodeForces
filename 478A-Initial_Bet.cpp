#include<bits/stdc++.h>
using namespace std;

int main() {
	int s = 0;
	int t = 0;
	
	for(int i=0; i<5; i++) {
		cin>>s;
		t += s;
	}
	
	int ans = ((t%5==0)?(t/5):-1);
	ans = t==0 ? -1 : ans;
	
	cout<<ans<<endl;

	return 0;
}
