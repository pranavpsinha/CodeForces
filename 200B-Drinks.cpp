#include<bits/stdc++.h>
using namespace std;

int main() {
	double n;
	cin>>n;
	
	double sum = 0;
	for(int i=0; i<n; i++) {
		double temp;
		cin>>temp;
		
		sum += (temp/100);
	}
	
	cout<<fixed<<setprecision(12);
	cout<<(sum/n)*100<<endl;

	return 0;
}
