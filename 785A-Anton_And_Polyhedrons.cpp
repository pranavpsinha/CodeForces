#include<bits/stdc++.h>
using namespace std;

map<char, int> db = {
	{'t', 4},
	{'T', 4},
	{'c', 6},
	{'C', 6},
	{'o', 8},
	{'O', 8},
	{'d', 12},
	{'D', 12},
	{'i', 20},
	{'I', 20}
};

int main() {
	int n;
	cin>>n;
	
	int score = 0;
	
	for(int i=0; i<n; i++) {
		string str;
		cin>>str;
		
		score += db[str[0]];	
	}
	
	cout<<score<<endl;

	return 0;
}
