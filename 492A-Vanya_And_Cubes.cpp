#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int next = 1;
	int i = 2;
	int h = 0;
	
	while(next<=n) {
		n -= next;
		next = i%2 == 0 ? (i/2)*(i+1) : i*((i+1)/2);
		i++;
		h++;
	}
	cout<<h<<endl;

	return 0;
}
