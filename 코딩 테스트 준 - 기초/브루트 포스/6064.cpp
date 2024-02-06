#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
        {
            int c;
            while (b != 0)
            {
                c = a % b;
                a = b;
                b = c;
            }
            return a;
        }

int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int g, t, n;
    int M, N, x, y;
    int tmp1, tmp2;
    cin >> t;
    
    
    for(int i = 0; i<t; i++){
        cin >> M >> N >> x >> y;
        if(x == y){
            cout << x << '\n';
            continue;
        }
        if(M>N){
            tmp1 = N;
            N = M;
            M = tmp1;
            tmp1 = y;
            y = x;
            x = tmp1;
        }
        if ((y>x)&&((y-x)%(N-M)==0)){
            g = ((M-y+x)/(N-M)+1)*M+x;
        }else if((y>x)&&((y-x)%(N-M)!=0)){
            g = ((x-y)/(N-M))*N+y;
        }else if((x>y)&&((x-y)%(N-M)==0)){
            g = ((x-y)/(N-M))*N+y;
        }else if((x>y)&&((x-y)%(N-M)!=0)){
            g = ((M-y+x)/(N-M)+1)*M+x;
        }else{
            g = -1;
        }

        cout << g << '\n';

    }
}