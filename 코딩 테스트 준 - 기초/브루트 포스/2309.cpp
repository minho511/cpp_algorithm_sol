#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    int n;
    int sum;
    for(int i = 0; i<9; i++){
        cin >> n;
        arr.push_back(n);
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i<9; i++){
        for(int j = 0; j<9; j++){
            sum = 0;
            if(i!=j){
                for(int k = 0; k<9; k++){
                    if((i!=k)&&(j!=k)){
                        sum += arr[k];
                    }
                    if(sum>100) break;
                }
                if(sum == 100){
                    for(int k = 0; k<9; k++){
                        if((k!=i)&&(k!=j)){
                            cout << arr[k] <<'\n';
                        }
                    }
                    return 0;
                }
            }
        }
    }
    return 0;
}