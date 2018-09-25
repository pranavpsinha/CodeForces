#include<bits/stdc++.h>
using namespace std;

/**
* exploit this fact that
* sum of exterior angles for any polygon is always 360
*/

int main() {
	int n;
	cin>>n;
	
	for(int i=0; i<n; i++) {
		int a;
		cin>>a;
		
		bool ext360 = 360%(180-a)==0;
		
		ext360 ? cout<<"YES" : cout<<"NO";
		cout<<endl;
	}

	return 0;
}
