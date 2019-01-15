#include<bits/stdc++.h>
using namespace std;

int a[2000];

int initA(int m) {
	int i = 0;
	while(m>0) {
		a[i++] = m%10;
		m /= 10;
	}
	return (i-1);
}

void fact(int n) {	
	int len = initA(n);
	
	while(--n) {
		int carry = 0;
		for(int k=0; k<=len; k++) {
			int x = a[k]*n + carry;
			
			a[k] = x%10;
			carry = x/10;
		}
		
		while(carry > 0) {
			a[++len] = carry%10;
			carry /= 10;
		}
	}
	
	for(int k=len; k>=0; k--) {
		cout<<a[k];
	}
	cout<<endl;
}

int main() {
	int a, b;
	cin>>a>>b;
	
	fact(a>b?b:a);

	return 0;
}
