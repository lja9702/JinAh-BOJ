#include <stdio.h>
#include <string.h>

int arr[5001] = {0};
long long dp[5001] = {0};
int main(){
	int i;
	char code[5001] = {0};
	scanf("%s", &code);
	for(i = 0;i < strlen(code);i++){
		arr[i + 1] = code[i] - '0';
	}

	if(arr[1] == 0)	dp[1] = 0;
	else 	dp[1] = 1;

	if((arr[1] == 1 && arr[2] != 0) || (arr[1] == 2 && arr[2] > 0 && arr[2] <= 6))
		dp[2] = 2;
	else
		dp[2] = 1;

	for(i = 3;i <= strlen(code);i++){
		if((arr[i - 1] == 1) || (arr[i - 1] == 2 && arr[i] <= 6)){
			dp[i] += (dp[i - 2] % 1000000);
		}
		if(arr[i] != 0)
			dp[i] = ((dp[i] % 1000000) + (dp[i - 1] % 1000000)) % 1000000;
	}
	printf("%lld\n", dp[strlen(code)] %1000000);
}