#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int a;
	int min = 99999;
	int max = -1;
	
	int count = 0;
	
	for(int i=0; i<n; i++) {
		cin>>a;
		if(i>0) {
			if(a>max) {
				count++;
				max = a;
			} else if(a<min) {
				count++;
				min = a;
			}	
		} else {
			min = max = a;
		}
	}
	
	cout<<count<<endl;

	return 0;
}
