#include<bits/stdc++.h>
using namespace std;

double max(double a, double b) {
	return a>b ? a : b;
}

int main() {
	int n, l;
	cin>>n>>l;
	
	cout<<fixed<<setprecision(10);
		
	double a[n];
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	sort(a, a+n);
	
	if(n==1) {
		cout<<max(a[0]-0, l-a[0])<<endl;
		
	} else if(n==2) {
		cout<<max(a[0]-0, max((a[1]-a[0])/2, l-a[1]));
		
	} else {
		double md = a[0];
		
		for(int i=1; i<n-1; i++) {
			double d = max((a[i]-a[i-1])/2, (a[i+1]-a[i])/2);
			//cout<<"d = "<<d;
			md = max(d, md);
			//cout<<", md = "<<md<<endl;
		}
		
		if(l-a[n-1] < md) {
			cout<<md;
			
		} else {
			cout<<(l-a[n-1]);
		}
		
		cout<<endl;
	}

	return 0;
}
