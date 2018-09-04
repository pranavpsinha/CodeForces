#include<bits/stdc++.h>
using namespace std;

int main() {
	string g, h, p;
	cin>>g>>h>>p;
	
	int gLen = g.length();
	int hLen = h.length();
	int pLen = p.length();
	
	int *gha = new int[26]();
	int *pa = new int[26]();
	
	if(pLen != (gLen+hLen)) {
		cout<<"NO";
	} else {
		for(char c : g) {
			int a = (int)c - 65;
			gha[a]++;
		}
		for(char c : h) {
			int a = (int)c - 65;
			gha[a]++;
		}
		for(char c : p) {
			int a = (int)c - 65;
			pa[a]++;
		}
		
		bool flag = true;
		for(int i=0; i<26; i++) {
			if(gha[i] == pa[i]) continue;
			
			flag = false;
			break;
		}
		
		flag ? cout<<"YES" : cout<<"NO";
	}
	cout<<endl;

	return 0;
}
