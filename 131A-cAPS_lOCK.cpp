#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin>>str;
	
	regex allCaps("[A-Z]*");
	
	string out = "";
	
	if(regex_match(str, allCaps)) {
		for(char c : str) {
			char ch = (char) ((int)c - 65 + 97);
			out += ch;
		}
		
	} else {
		bool accident = regex_match(str.substr(1,str.length()), allCaps);
		
		for(int i=0; i<str.length(); i++) {
			if(accident) {
				if(i==0) {
					int firstChar = (int)str[0];
		
					if(firstChar >= 97) {
						char ch = (char) (firstChar - 97 + 65);
						out += ch;
					} else {
						out += (char) firstChar;
					}
				} else {
					char ch;
					if((int)str[i] < 97) {
						ch = (char) ((int)str[i] - 65 + 97);
					} else {
						ch = str[i];
					}
					out += ch;	
				}
				
			} else {
				out += str[i];
			}
		}
	}
	
	cout<<out<<endl;
	
	return 0;
}
