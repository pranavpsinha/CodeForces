#include<bits/stdc++.h>
using namespace std;

int max(int a, int b) {
	return a>b ? a : b;
}

int main() {
	int a, b, c;
	cin>>a>>b>>c;
	
	int allp = a+b+c;
	int allm = a*b*c;
	
	int pos1 = (a+b)*c;
	int pos2 = a*(b+c);
	
	int sop1 = (a*b)+c;
	int sop2 = a+(b*c);
	
	cout<<max(allp, max(allm,max(pos1,max(pos2,max(sop1,sop2)))))<<endl;

	return 0;
}
