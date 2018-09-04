#include<bits/stdc++.h>
using namespace std;

bool isLucky(int num) {
	return (num%4 == 0 || 
				num%7 == 0 || 
				num%47 == 0 || 
				num%74 == 0 || 
				num%447 == 0 || 
				num%474 == 0 || 
				num%747 == 0 || 
				num%774 == 0
			);
}

int main() {
	int num;
	cin>>num;
	
	string str = to_string(num);
	
	regex pattern("[47]*");
	
	if(regex_match(str, pattern)) {
		cout<<"YES";
		
	} else {
		bool divByLucky = isLucky(num);
		
		if(divByLucky) {
			cout<<"YES";
		} else {
			cout<<"NO";
		}
	}
	cout<<endl;

	return 0;
}
