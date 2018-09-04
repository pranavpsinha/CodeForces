#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	string str;
	cin>>str;
	
	int *a = new int[26]();
	for(char c : str) {
		int as = (int) c;
		
		as -= as<97 ? 65 : 97;
		a[as]++;
	}
	
	int count = 0;
	for(int i=0; i<26; i++) {
		count += a[i]>0 ? 1 : 0;
	}
	
	count==26 ? cout<<"YES" : cout<<"NO";
	cout<<endl;

	return 0;
}
