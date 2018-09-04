#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin>>str;
	
	string uc = "";
	string lc = "";
	
	int cu = 0;
	int cl = 0;
	
	for(char c : str) {
		int ascii = (int)c;
		if(ascii < 97) {
			cu++;
			
			uc += c;
			lc += (char)(ascii - 65 + 97);
			
		} else {
			cl++;
			
			uc += (char)(ascii - 97 + 65);
			lc += c;
		}
	}
	
	cl>=cu ? cout<<lc : cout<<uc;
	cout<<endl;

	return 0;
}
