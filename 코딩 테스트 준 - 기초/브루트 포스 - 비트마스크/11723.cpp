#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
    
	vector<int>S(21);
	int M, n;
	string inp;
	cin >> M;
	for(int i = 0; i< M; i++){
		cin >> inp;
		if(inp == "add"){
			cin >> n;
			S[n] = 1;
		} 
		else if(inp == "check"){
			cin >> n;
			cout << S[n] << '\n';
		}
		else if(inp=="remove"){
			cin >> n;
			S[n] = 0;	
		} 
		else if(inp=="toggle"){
			cin >> n;
			S[n] = 1-S[n];
		}
		else if(inp=="all"){
			for(int i = 1; i<21; i++){
				S[i]=1;
			}
		}else if(inp=="empty"){
			for(int i = 1; i<21; i++){
				S[i]=0;
			}
		}
	}
}