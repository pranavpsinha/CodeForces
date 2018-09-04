#include<bits/stdc++.h>
using namespace std;

string trim(string in) {
	string out = "";
	bool flag = true;
	
	int len = in.length();
	for(int i=0; i<len; i++) {
		if((int)in[i] == 32) continue;
		
		out = in.substr(i, len);
		break;
	}
	
	int outLen = out.length();
	len = outLen;
	
	flag = true;
	for(int i=len-1; i>=0; i--) {
		if(flag && (int)in[i] == 32) {
			outLen--;
			continue;
		}
		flag = false;
		break;
	}
	
	return out.substr(0, outLen);
}

int main() {
	string str;
	cin>>str;
	
	regex pattern("WUB");
	
	str = regex_replace(str, pattern, " ");
	
	cout<<str<<endl;

	return 0;
}
