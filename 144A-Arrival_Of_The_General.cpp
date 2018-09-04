#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int a[n];
	
	int min = INT_MAX;
	int max = -1;
	int minIndex = 0;
	int maxIndex = 0;
	
	for(int i=0; i<n; i++) {
		cin>>a[i];
		
		if(a[i] > max) {
			max = a[i];
			maxIndex = i;
		}
		if(a[i] <= min) {
			min = a[i];
			minIndex = i;
		}
	}
	
	int ans = (maxIndex + n - minIndex);
	
	if(maxIndex > minIndex) {
		ans--;
	}
	
	cout<<ans-1<<endl;

	return 0;
}
