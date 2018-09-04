#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin>>str;
	
	regex pattern(".*[HQ9]+.*");
	
	(regex_match(str, pattern)) ? cout<<"YES" : cout<<"NO";
	cout<<endl;

	return 0;
}
