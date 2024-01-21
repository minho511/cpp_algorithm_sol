#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int a;
	vector<int>prime_inv(1000001);

	for(int i = 3; i*i <1000000; i+=2){
		if(!prime_inv[i]){
			for(int j = i*i; j<1000000; j+=i){
				prime_inv[j] = 1;
			}
		}
	}
	
	while(1){
		cin >> n;
		if(!n) break;
		
		a = 0;
		for(int j = 3; j<=n/2; j+=2){
			if(!prime_inv[j]){
				if(!prime_inv[n-j]){
					a = j;
					break;
				}
			}
		}
		if(a==0) cout << "Goldbach's conjecture is wrong." << '\n';
		else cout << n << " = " << a << " + " << n-a << '\n';
		
	}
}