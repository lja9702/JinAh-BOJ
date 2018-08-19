#include <cstdio>
#include <cstring>
char arr[101][15] = {0};
int main(){
	int n, len[101] = {0};
	scanf("%d", &n);
	for(int i = 0;i < n;i++){
		scanf("%s", arr[i]);
		len[i] = strlen(arr[i]);
	}
	if(n == 1){
		printf("%d %c\n", len[0], arr[0][len[0] / 2]);
		return 0;
	}
	for(int i = 0;i < n - 1;i++){
		for(int j = 0;j < n;j++){
			if(len[i] == len[j]){
				bool flag = 1;
				for(int k = 0;k < len[i];k++){
					if(arr[i][k] != arr[j][len[i] - k - 1]){
						flag = 0;
						break;
					}
				}
				if(flag){
					printf("%d %c\n", len[i], arr[i][len[i] / 2]);
					return 0;
				}
			}
		}
	}
}