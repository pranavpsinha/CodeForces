#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
	bool flag = true;
	for(int i=2; i*i<=n; i++) {
		if(n%i == 0) {
			flag = false;
			break;
		}
	}
	return flag;
}

int main() {
	int n;
	cin>>n;
	
	int x = 4;
	
	while(true) {
		if(isPrime(n-x)) {
			x += 2;
			continue;
		}
		break;
	}
	
	cout<<x<<" "<<(n-x)<<endl;
	
	return 0;
}
