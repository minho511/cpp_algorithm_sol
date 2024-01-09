#include <iostream>
using namespace std;

int main(){
    int n;
    long result = 0;
    cin >> n;
    for(int i = 1; i<n+1; i++){
        result += i*(n/i);
    }
    cout << result <<'\n';
    return 0;
}