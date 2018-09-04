#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin>>a>>b;
	
	int total = a;
	int ub = 0;
	
	while(a>0) {
		total += (a/b);
		ub += (a%b);
		a /= b;
		
		if(a == 0 && ub>=b) {
			a = ub;
			ub = 0;
		}
	}
	
	cout<<total<<endl;

	return 0;
}
