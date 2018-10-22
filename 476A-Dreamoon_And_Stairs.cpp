#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin>>n>>m;
	
	int min = 982451653;
	
	for(int a=0; a<=n; a++) {
		for(int b=0; b<=n/2; b++) {
			if(2*b + a == n) {
				int s = b+a;
				if(s%m == 0) {
					min = min>s?s:min;	
				}
			}
		}
	}
	
	cout<<((min==982451653)?-1:min)<<endl;

	return 0;
}
