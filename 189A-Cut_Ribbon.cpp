#include<bits/stdc++.h>
using namespace std;

int getmax(int a, int b) {
	return a>b ? a : b;
}

int nz(int n) {
	return n>0 ? 1 : 0;
}

int main() {
	int n;
	cin>>n;
	
	int a, b, c;
	cin>>a>>b>>c;
	
	int max = -1;
	for(int i=0; i*a<=n; i++) {
		for(int j=0; j*b+i*a<=n; j++) {
			int ia = i*a;
			int jb = j*b;
			int k  = (n - ia - jb)/c;
			int kc = k*c;
			
			//cout<<ia<<"+"<<jb<<"+"<<kc<<" <> "<<n<<endl;
			
			if(ia+jb+kc == n) {
				//cout<<"t"<<endl;
				max = getmax(i+j+k, max);
			}
		}
	}
	cout<<max<<endl;

	return 0;
}
