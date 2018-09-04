#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	string str;
	cin>>str;
	
	int a = 0;
	int d = 0;
	
	for(char c : str) {
		int k = (int) c - 65;
		k == 0 ? a++ : d++;
	}
	
	a>d ? cout<<"Anton" : (a==d ? cout<<"Friendship" : cout<<"Danik");
	cout<<endl;

	return 0;
}
