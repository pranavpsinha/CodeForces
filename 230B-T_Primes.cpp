#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
	for(int i=2; i*i<=n; i++) {
		if(n%i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	cin>>n;
	
	for(int i=0; i<n; i++) {
		long long t;
		cin>>t;
		
		if(t == 4) {
			cout<<"YES";
		} else if(t%2 == 0) {
			cout<<"NO";
		} else if(t <= 3) {
			cout<<"NO";
		} else {
			long long root = sqrt(t);
			
			if(root*root == t) {
				isPrime(root) ? cout<<"YES" : cout<<"NO";
			} else {
				cout<<"NO";
			}
		}
		cout<<endl;
	}

	return 0;
}
