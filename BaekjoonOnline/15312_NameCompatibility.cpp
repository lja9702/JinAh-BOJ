#include <cstdio>
#include <cstring>
int main(){
	char A[3000] = {0}, B[3000] = {0};
	int dp[5000] = {0}, alpha[26] = {3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};
	scanf("%s %s", A, B);
	int i, cnt = 0, len = strlen(A) * 2;
	for(i = 0;i < strlen(A);i++){
		dp[cnt++] = alpha[A[i] - 'A'];
		dp[cnt++] = alpha[B[i] - 'A'];
	}
	while(len > 2){
		cnt = 0;
		for(cnt = 0;cnt < len - 1;cnt++)
			dp[cnt] = (dp[cnt] + dp[cnt + 1]) % 10;
		len--;
	}
	printf("%d%d\n", dp[0], dp[1]);
}