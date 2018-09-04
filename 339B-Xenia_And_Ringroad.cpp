#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin>>n>>m;
	
	int p = 1;
	long long t = 0;
	for(int i=0; i<m; i++) {
		int temp;
		cin>>temp;
		
		int diff = temp-p;
		
		t += (diff >= 0 ? diff : (n+diff));
		p = temp;
	}
	cout<<t<<endl;

	return 0;
}
