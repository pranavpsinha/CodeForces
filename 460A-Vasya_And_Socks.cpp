#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin>>n>>m;
	
	int *a = new int[2*n]();
	int j=0;
	
	queue<int> q;
	
	int i = 0;
	for(; i<n; i++) {
		a[j] = (i+1);
		if((i+1)%m==0){
			q.push(i);
		}
		j++;
	}
	
	while(!q.empty()) {
		int e = q.front();
		q.pop();
		a[j] = (e+1);
		if((i+1)%m==0) {
			q.push(i);
		}
		i++;
		j++;
	}
	
	cout<<j<<endl;

	return 0;
}
