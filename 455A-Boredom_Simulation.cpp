#include<bits/stdc++.h>
using namespace std;

int m = -1;
int x = 0;
	
int f(int in, int a[], int n) {
	x += a[in];
	
	if(n==0 || n==1) {
		m = x>m ? x : m;
		return a[in];
	}
	
	int j = 0;
	int b[n];
	bool v[100000];
	for(int i=0; i<n; i++) {
		if(i == in) continue;
		if(a[i] == a[in]-1) continue;
		if(a[i] == a[in]+1) continue;
			
		b[j++] = a[i];
		v[a[i]-1] = false;
	}
	--j;
	
	for(int i=0; i<=j; i++) {
		if(v[b[i]-1]) continue;
		v[b[i]-1] = true;
		int z = f(i, b, j+1);
		
		x -= z;
	}
	return a[in];
}

int getMax(int a, int b) {
	return a>b ? a : b;
}
	
int main() {
	int n;
	cin>>n;
	
	int a[n];
	bool v[100000];
	for(int i=0; i<n; i++) {
		cin>>a[i];
		v[a[i]-1] = false;
	}
	
	if(n==2) {
		int x = a[0];
		int y = a[1];
		
		bool isNear = x==(y+1) || x==(y-1);
		
		if(isNear) {
			cout<<getMax(x,y);
		} else {
			cout<<x+y;
		}
		cout<<endl;
		
	} else {
		for(int i=0; i<n; i++) {
			if(v[a[i]-1]) continue;
			v[a[i]-1] = true;
			x = 0;
			f(i, a, n);	
		}
		
		cout<<m<<endl;	
	}

	return 0;
}
