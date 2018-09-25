#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int mod(int a) {
	return a>0?a:-a;
}

int main() {
	int n;
	cin>>n;
	
	string s;
	cin>>s;
	
	int a[n];
	
	a[0] = (int) s[0] - 48;
	
	int prev = a[0];
	int in = 1;
	int z = 0;
	int o = 0;
	
	for(int i=1; i<n; i++) {
		int t = (int) s[i] - 48;
		
		t==0 ? z++ : o++;
		
		if(prev == t) {
			a[in] = t;
			in += 1;
		} else {
			in -= 1;
		}
	}
	
	if(z==n || o==n) {
		cout<<n;
	} else if(in == 0) {
		cout<<"0";		
	} else {
		cout<<mod(in);				
	}
	cout<<endl;

	return 0;
}

/*
		regex patternA(".*01.*");
		regex patternB(".*10.*");
		
		while(regex_search(str, patternA) || regex_search(str, patternB)) {
			regex pattern1("10");
			regex pattern2("01");
			
			str = regex_replace(str, pattern1, "");
			if(str.size() == 0) break;
			str = regex_replace(str, pattern2, "");
			if(str.size() == 0) break;
		}		
		cout<<str.size();
*/
