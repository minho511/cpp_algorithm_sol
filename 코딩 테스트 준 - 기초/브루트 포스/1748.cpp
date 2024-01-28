#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    int result = 0;

    cin >> n;
    t = (int)log10(n);
    cout << t << endl;
    for(int i = 0; i<=t; i++){
        result += (i)*(pow(10, i-1))*9;
    }
    result += (n-pow(10, t)+1)*(t+1);
    cout << result<<'\n';
}