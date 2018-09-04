#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, m, a, b;
	cin>>n>>m>>a>>b;
	
	int t = 0;
	int nom = n/m;
	
	if(m*a < b) {
		t = n*a;
		n = -1;
	} else {
		t = (b*nom);
		n -= (m*nom);	
	}
	
	if(n != -1) {
		if(n == n + nom*m) {
			if(n*a < b) {
				t += n*a;
			} else {
				t = b;
			}
		} else {
			int l = b*n;
			int r = a*m*n;
			
			if(l<r) {
				if(n*a < n*b) {
					t += n*a;
				} else {
					t += (n/m)*b==0 ? b : (n/m)*b;
				}
			} else {
				t += n*a;
			}
		}	
	}
	
	cout<<t<<endl;

	return 0;
}
