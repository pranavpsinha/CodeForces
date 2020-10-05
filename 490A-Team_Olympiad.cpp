#include<bits/stdc++.h>
using namespace std;

#define getmin(a,b) (a>b?b:a)

int main() {
	int n;
	cin>>n;
	
	int a = 0, b = 0, c = 0;
	int on[n], tw[n], th[n];
	int w = 0, x = 0, y = 0;
	for(int i=0; i<n; i++) {
		int t;
		cin>>t;
		
		if(t==1) on[w++] = (i+1);
		if(t==2) tw[x++] = (i+1);
		if(t==3) th[y++] = (i+1);
		
		t == 1 ? a++ : (t == 2 ? b++ : c++);
	}
	int min = (getmin(a,getmin(b,c)));
	
	cout<<min<<endl;
	
	int j=0;
	while(min--) {
		cout<<on[j]<<" "<<tw[j]<<" "<<th[j]<<endl;
		j++;
	}

	return 0;
}
