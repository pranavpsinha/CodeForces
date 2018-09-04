#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	if(n>0) {
		cout<<n;
	} else {
		int x = (n/100)*10 + (n%10);
		int y = n/10;
		
		x>y ? cout<<x : cout<<y;
	}
	cout<<endl;

	return 0;
}
