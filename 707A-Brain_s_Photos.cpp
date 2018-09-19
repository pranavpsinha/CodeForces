#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin>>n>>m;
	
	int t = n*m;
	bool bnw = true;
	for(int i=0; i<t; i++) {
		char c;
		cin>>c;
		
		if(c == 'C' || c == 'M' || c == 'Y') {
			bnw = false;
			break;
		}
	}
	bnw ? cout<<"#Black&White" : cout<<"#Color";
	cout<<endl;

	return 0;
}
