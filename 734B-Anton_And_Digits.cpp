#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, d;
	cin>>a>>b>>c>>d;
	
	int s = 0;
	
	while(a&&c&&d) {
		s += 256;
		a--, c--, d--;
	}
	
	while(a&&b) {
		s += 32;
		a--, b--;
	}
	
	cout<<s<<endl;

	return 0;
}
