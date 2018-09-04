#include<bits/stdc++.h>
using namespace std;

int main() {
	int s, n;
	cin>>s>>n;
	
	int d[n];
	int h[n];	
	
	for(int i=0; i<n; i++) {
		cin>>d[i]>>h[i];
	}
	
	for(int i=0; i<n; i++) {
		for(int j=i+1; j<n; j++) {
			if(d[i] > d[j]) {
				int temp = d[j];
				d[j] = d[i];
				d[i] = temp;
				
				temp = h[j];
				h[j] = h[i];
				h[i] = temp;
			}
		}
	}
	
	bool flag = true;
	for(int i=0; i<n; i++) {
		if(s > d[i]) {
			s += h[i];
			
		} else {
			flag = false;
			break;
		}
	}
	
	flag ? cout<<"YES" : cout<<"NO";
	cout<<endl;

	return 0;
}
