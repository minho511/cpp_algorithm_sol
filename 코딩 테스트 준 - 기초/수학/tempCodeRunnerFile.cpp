#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);

    long m, n;
    cin >> m >> n;

    bool* PrimeArray = new bool[n+1]; 
    for(int i = 0; i<n+1; i++)
        PrimeArray[i] = true;
    PrimeArray[1] = false;
    for(int i = 2; i*i < n+1; i++){
        if(PrimeArray[i]){
            if (i>=m) cout << i << '\n';
            for(int j = i * i; j < n+1; j+=i){
                PrimeArray[j] = false;
            }
        }
    }
    for(int i = m; i<n+1; i++){
        if(PrimeArray[i])
            cout << i << '\n';
    }
    return 0;
}