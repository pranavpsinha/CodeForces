#include<bits/stdc++.h>
using namespace std;

// o - 79
// x - 88

int main() {
	int n;
	cin>>n;
	
	string ans = "";
	
	regex vacancy(".*OO.*");
	regex occupied("OO");
	
	bool replaced = false;
	
	for(int i=0; i<n; i++) {
		string temp;
		cin>>temp;
		
		if(!replaced) {
			if(regex_match(temp, vacancy)) {
				replaced = true;
				temp = regex_replace(temp, occupied, "++", regex_constants::format_first_only);
			}
		}
		
		ans += temp;
		ans += '\n';
	}
	
	if(replaced) {
		cout<<"YES"<<endl<<ans;
		
	} else {
		cout<<"NO";
	}

	return 0;
}
