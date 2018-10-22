#include<bits/stdc++.h>
using namespace std;

int getmin(int a, int b) {
	return a>b?b:a;
}

int main() {
	int a[3];
	int sum = 0;
	for(int i=0; i<3; i++) cin>>a[i], sum+=a[i];
	
	sort(a, a+3);
	
	cout<<getmin(sum, 2*(sum-a[2]))<<endl;

	return 0;
}
