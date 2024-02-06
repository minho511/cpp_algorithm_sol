#include<bits/stdc++.h>
using namespace std;
bool comp(vector<int> &a, vector<int> &b){
    if(a[1] == b[1]){
        return a[0] < b[0];
    }return a[1] < b[1];
}

int main(){
    int t;
    cin >> t;
    vector<vector<int> >array(t);
    
    for(int i = 0; i<t; i++){
        int n, m;
        cin >> n >> m;
        array[i].push_back(n);
        array[i].push_back(m);
    }
    sort(array.begin(), array.end(), comp);
    for(int i = 0; i<t; i++){
        cout << array[i][0] << ' ' << array[i][1] << '\n';
    }
}