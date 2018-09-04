#include<bits/stdc++.h>
using namespace std;

bool isBeautiful(int n) {
	bool flag = true;
	
	int nums[10] = {0,0,0,0,0,0,0,0,0,0};
	
	while(n>0) {
		nums[n%10]++;
		n/=10;
	}
	
	for(int i=0; i<10; i++) {
		if(nums[i] > 1) {
			flag = false;
			break;
		}
	}
	return flag;
}

int main() {
	int year;
	cin>>year;
	
	while(true) {
		year++;
		bool b = isBeautiful(year);
		if(b) break;
	}
	cout<<year<<endl;

	return 0;
}
