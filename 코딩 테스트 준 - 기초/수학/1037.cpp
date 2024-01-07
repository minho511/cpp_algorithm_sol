//https://www.acmicpc.net/problem/1037
#include<vector>
#include<algorithm>
#include <stdio.h>
#include<string.h>

using namespace std;

int main(){
	int n;
	int a;
	vector<int> v;
	scanf("%d", &n);
	for(int i = 0; i<n; i++){
		scanf("%d", &a);	
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	printf("%d",v[0]*v[n-1]); 
	return 0;
}