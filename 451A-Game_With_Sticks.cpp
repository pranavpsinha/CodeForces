#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin>>n>>m;
	
	int total = n*m;
	
	bool flag = true;
	
	while(total > 0) {
		total -= (m+n-1);
		n--;
		m--;
		flag = !flag;
	}
	
	flag ? cout<<"Malvika" : cout<<"Akshat";
	cout<<endl;

	return 0;
}
