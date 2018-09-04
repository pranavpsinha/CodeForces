#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int *l = new int[100]();
	
	int p;
	cin>>p;
	
	for(int i=0; i<p; i++) {
		int temp;
		cin>>temp;
		
		l[temp-1]++;
	}
	
	int q;
	cin>>q;
	
	for(int i=0; i<q; i++) {
		int temp;
		cin>>temp;
		
		l[temp-1]++;
	}
	
	bool flag = true;
	for(int i=0; i<n; i++) {
		if(l[i] == 0) {
			flag = false;
			break;
		}
	}
	
	flag ? cout<<"I become the guy." : cout<<"Oh, my keyboard!";
	cout<<endl;

	return 0;
}
