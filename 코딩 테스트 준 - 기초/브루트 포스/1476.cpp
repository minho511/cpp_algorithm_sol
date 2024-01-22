#include<bits/stdc++.h>
using namespace std;
int sol(int E, int S, int M){
    int temp;
    for(int n = 1; n<=7980; n++){
        if(n%15==E){
            if(n%28==S){
                if(n%19==M){
                    return n;
                }
            }
        }
    }
}
int main(){
    int E, S, M;
    cin >> E >> S >> M;
    if(E==15) E=0;
    if(S==28) S=0;
    if(M==19) M=0;
    int n=0;
    int result = 0;
    result = sol(E, S, M);
    cout << result;
}