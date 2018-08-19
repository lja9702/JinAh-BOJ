#include <cstdio>
#include <cstring>

char arr[1000001] = {0}, explo[37] = {0}, res[1000001] = {0};
int main(){
	scanf("%s %s", arr, explo);
	int l = strlen(explo), len = strlen(arr), cnt = 0;
	for(int i = 0;i < len;i++){
		res[cnt] = arr[i];
		if(res[cnt] == explo[l - 1]){
			int ch = 1;
			for(int j = l - 2;j >= 0;j--){
				if(res[cnt - (l - 1 - j)] != explo[j]){
					ch = 0;
					break;
				}
			}
			if(ch)	cnt -= l;
		}
		cnt++;
	}
	if(cnt == 0){
		printf("FRULA\n");
		return 0;
	}
	for(int i = 0;i < cnt;i++)
		printf("%c", res[i]);
	printf("\n");
}