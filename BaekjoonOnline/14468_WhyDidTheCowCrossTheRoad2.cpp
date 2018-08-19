#include <cstdio>
#include <cstring>
char arr[60] = {0};
bool check[27];
int cnt = 0, alpha[27];
int main(){
	scanf("%s", arr);
	memset(alpha, -1, sizeof(alpha));
	for(int i = 0;i < 52;i++){
		if(alpha[arr[i] - 'A'] == -1)	alpha[arr[i] - 'A'] = i;
		else{
			for(int j = alpha[arr[i] - 'A'] + 1;j < i;j++){
				if(!check[arr[j] - 'A'])	cnt++;
			}
			check[arr[i] - 'A'] = true;
		}
	}
	printf("%d\n", cnt);
}