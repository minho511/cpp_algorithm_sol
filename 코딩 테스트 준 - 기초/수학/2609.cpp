#include<iostream>

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
    int a, b;
    cin >> a >> b;
    int value_gcd = gcd(a, b);
    cout<<value_gcd<<'\n';
    cout<<a*b/value_gcd<<'\n';
    
    return 0;
}