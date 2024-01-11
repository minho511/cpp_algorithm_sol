//https://www.acmicpc.net/status?user_id=m980107&problem_id=1978&from_mine=1

#include<stdio.h>
#include<vector>
using namespace std;

int main(){
	int n;
	int inp;
	int result = 0;
	vector<int> arr(1001);
	for(int i = 2;i<32; i++){
		if(arr[i] == 0){
			for(int j = i; j<1001/i+1; j++){
				arr[i*j] = 1;
			}	
		}
	}
	scanf("%d", &n);
	arr[1] = 1;
	for(int i = 0; i<n; i++){
		scanf("%d", &inp);
		result += 1-arr[inp];
	}
	printf("%d\n", result);
	return 0;
}