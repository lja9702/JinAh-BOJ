#include <cstdio>
#include <cstring>
char alpha[101][27] = {0};
int main(){
	int n, cnt = 0;
	scanf("%d", &n);
	for(int i = 0;i < n;i++){
		char arr[15] = {0};
		scanf("%s", arr);
		int len = strlen(arr);
		for(int j = 0;j < len;j++)	alpha[i][arr[j] - 'A']++;
	}
	for(int i = 1;i < n;i++){
		int a = 0, b = 0, c = 0;
		for(int j = 0;j < 26;j++){
			if(alpha[0][j] > alpha[i][j])
				a = alpha[0][j] - alpha[i][j], c++;
			else if(alpha[0][j] < alpha[i][j])
				b = alpha[i][j] - alpha[0][j], c++;
		}
		if(c > 2 || (c == 2 && a != b))	continue;
		cnt++;
	}
	printf("%d\n", cnt);
}