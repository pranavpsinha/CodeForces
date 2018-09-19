#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long a) {
	if(a == 1) return true;
	if(a == 2) return true;
	if(a == 3) return true;
	
	for(long long i=2; i*i<=a; i++) {
		if(a%i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	long long n;
	cin>>n;
	
	long long x[n];
	long long max = -1;
	for(int i=0; i<n; i++) {
		cin>>x[i];
		max = max>x[i] ? max : x[i];
	}
	
	long long primes[max];
	long long pi = 1;
	
	primes[0] = 2;
	for(long long u=3; u<=max; u+=2) {
		if(isPrime(u)) primes[pi++] = u;
	}
	
	for(int xi=0; xi<n; xi++) {
		bool f = true;
		long long e = x[xi];
		int d = 0;
		
		cout<<"e = "<<e<<endl;
		
		if(isPrime(e)) {
			cout<<"NO";
			
		} else {
			for(long long i=0; i<pi; i++) {
				long long pr = primes[i];
				
				cout<<"pr = "<<pr<<endl;
				
				if(pr >= e) {
					break;
					
				} else {
					if(e%pr == 0) {
						d++;
						long long dbl = 2*pr;
						
						if(d>1 || (e%dbl == 0 && e > dbl)) {
							f = false;
							break;	
						}
					}	
				}
			}
			f = (d == 0 ? false : f);
			f ? cout<<"YES" : cout<<"NO";
		}
		cout<<endl;
	}

	return 0;
}

/*for(long long a=0; a<=max; a++) {
		if(isPrime(a)) {
			r[a] = 0;
			
		} else {
			int tp = 0;
			long long inc = 1;
			
			for(long long i=2; i<a; ) {
				if(tp > 1) break;
				if(a%i == 0) {
					tp++;
					if(i>3 && isPrime(i)) {
						if(isPrime(a/i)) {
							break;
						}
						inc = i;
						i++;
					} else {
						i += inc;
					}
					
				} else {
					i+=inc;
				}				
			}
			r[a] = tp == 1 ? 1 : 0;
		}
		//cout<<r[a]<<" ";
	}
	//cout<<endl;
	
	for(int i=0; i<n; i++) {
		r[x[i]] == 0 ? cout<<"NO" : cout<<"YES";
		cout<<endl; 
	}*/
