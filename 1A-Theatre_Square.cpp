#include<bits/stdc++.h>
using namespace std;

int main() {
	long long n, m, a;
	
	cin>>n>>m>>a;
	
	long long l = (n%a == 0 ? n/a : (n/a + 1));
	long long b = (m%a == 0 ? m/a : (m/a + 1));
	
	cout<<l*b;
	
	return 0;
}
