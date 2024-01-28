#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int t;
    int n;
    vector<int> arr(11);
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;

    for(int i = 4; i<=11; i++){
        arr[i] = arr[i-1]+arr[i-2]+arr[i-3];
    }

    cin >> t;
    for(int i = 0; i<t; i++){
        cin >> n;
        cout << arr[n] << '\n';
    }

}