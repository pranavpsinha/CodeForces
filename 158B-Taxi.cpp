#include<bits/stdc++.h>
using namespace std;

int min(int a, int b) {
	return a>b ? b : a;
}

int main() {
	int n;
	cin>>n;
	
	int temp;
	
	int ones = 0;
	int twos = 0;
	int threes = 0;
	int fours = 0;
	
	for(int i=0; i<n; i++) {
		cin>>temp;
		
		temp == 1 ? ones++ : (temp == 2 ? twos++ : temp == 3 ? threes++ : fours++);
	}
	
	int count = 0;
	
	count += fours;
	
	int minThreeToOne = min(threes, ones);
	
	count += minThreeToOne;
	threes -= minThreeToOne;
	ones -= minThreeToOne;
	
	if(threes>0) {
		count += threes;
	}
	
	int doubleTwos = twos/2;
	
	count += doubleTwos;
	
	twos -= (2*doubleTwos);
	
	int fourOnes = ones/4;
	
	count += fourOnes;
	
	ones -= (4*fourOnes);
	
	int onesAndTwos = (ones + 2*twos);
	
	count += (onesAndTwos%4 == 0 ? onesAndTwos/4 : 1 + onesAndTwos/4);
	
	cout<<count<<endl;
	
	return 0;
}
