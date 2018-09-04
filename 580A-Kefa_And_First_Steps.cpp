#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int diff[n];
	int j=0;
	
	int prev = -1;
	int in = 0;
	for(int i=0; i<n; i++) {
		int temp;
		cin>>temp;
		
		if(i!=0) {
			if(temp < prev) {
				diff[j++] = (i-in);
				in = i;
				
			} else if(i == n-1) {
				diff[j++] = (i-in+1);
				in = i;
			}
		}
		prev = temp;
	}
	
	sort(diff, diff+j);
	
	cout<<(j == 0 ? n : diff[j-1])<<endl;

	return 0;
}
