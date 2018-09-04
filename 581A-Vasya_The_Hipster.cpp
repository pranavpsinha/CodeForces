#include<bits/stdc++.h>
using namespace std;

#define getmin(a,b) (a>b?b:a);

int main() {
	int a, b;
	cin>>a>>b;
	
	int min = getmin(a,b);
	cout<<min<<" ";
	
	a -= min;
	b -= min;
	
	cout<<(a/2 + b/2)<<endl;	

	return 0;
}
