#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int count = 1;
	string prev;
	
	for(int i=0; i<n; i++) {
		string str;
		cin>>str;
		
		if(i==0) {
			prev = str;
		
		} else {
			int p = (int) prev[0] - 48;
			int a = (int) str[0] - 48;
		
			if(p != a) count++;
			
			prev = str;
		}
	}
	
	cout<<count<<endl;

	return 0;
}
