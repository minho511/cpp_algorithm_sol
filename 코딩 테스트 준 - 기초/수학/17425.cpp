#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    int N;
    vector<long>arr(1000001);
    arr[1]++;
    for(int i = 2; i<=1000000; i++){
        for(int j = i; j <= 1000000; j += i){
            arr[j] = i + arr[j];
        }
        arr[i] =  arr[i]+ arr[i-1] + 1;
    }
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> N;
        cout << arr[N] << '\n';
    }

}