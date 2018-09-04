#include<bits/stdc++.h>
using namespace std;

int main() {
	int n = 4;
	int a[n];
	int d[100001];
	int num;
	
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	cin>>num;
	
	int tot = num;
	
	for(int i=0; i<num; i++) {
		d[i] = i+1;
	}
	
	int j = 0;
	int k = 0;
	while(n--) {
		for(int i=0; i<num; i++) {
			if(d[i]%a[j] == 0) {
				continue;
			}
			
			d[k++] = d[i];
		}
		
		++j;
		num = k;
		k = 0;
		
		if(num == 0) {
			break;
		}
	}
	
	cout<<(tot - num)<<endl;

	return 0;
}
