#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	if(b == 0)  return a;
	
	gcd(b, a%b);
}

int main() {
	int a, b;
	cin>>a>>b;
	
	int x = a/10;
	
	if(x == 0 && (a == b || gcd(a,b) == 1)) {
		if(a == b) {
			cout<<"1";
			
		} else if(a == 1) {
			cout<<b;
			
		} else {
			cout<<"5";
		}
		
	} else {
		while(true) {
			if(10*x == 0) {
				if(b%a == 0) {
					cout<<b/a;
					break;
				} else {
					x++;
				}
					
			} if((10*x)%a == 0) {
				cout<<((10*x)/a);
				break;
				
			} else if((10*x + b)%a == 0) {
				cout<<((10*x + b)/a);
				break;
				
			} else {
				x++;
			}
		}	
	}
	cout<<endl;	

	return 0;
}
