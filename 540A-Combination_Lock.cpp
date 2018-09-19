#include<bits/stdc++.h>
using namespace std;

#define mod(a) (a>0?a:-a)
#define getmin(a,b) (a>b?b:a)

int main() {
	int n;
	cin>>n;
	
	string o;
	string s;
	cin>>o>>s;
	
	int len = o.size();
	
	int t = 0;
	for(int i=0; i<len; i++) {
		int a = (int)o[i] - 48;
		int b = (int)s[i] - 48;
		
		int l = mod((a-b));
		
		t += getmin(l, (10-l));
	}
	cout<<t<<endl;

	return 0;
}
