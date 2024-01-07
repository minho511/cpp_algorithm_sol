// https://www.acmicpc.net/problem/4375
#include <iostream>
using namespace std;
int main(){
    int n;
    int i;
    int cnt;
    int s;
    while(cin>>n){
        i = 1;
        cnt = 1;
        while(1){
        	if(i%n == 0) break;
            
            i = (10*i + 1)%n;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}