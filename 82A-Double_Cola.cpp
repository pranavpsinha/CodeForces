#include<bits/stdc++.h>
using namespace std;

string ans[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

int main() {
	int n;
	cin>>n;
	
	int i = 1;
	while (i * 5 < n) {
        n -= i * 5;
        i *= 2;
    }

    cout<<ans[(n - 1) / i]<<endl;

	return 0;
}
