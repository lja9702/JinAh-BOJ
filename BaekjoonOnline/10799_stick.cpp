#include <cstdio>
#include <cstring>
char arr[1000001] = {0};
int main(){
	scanf("%s", &arr);
	int top = strlen(arr) - 1, cnt = 0, sum = 0, idx = 0;
	while(idx <= top){
		if(idx < top && arr[idx] == '(' && arr[idx + 1] == ')')
			sum += cnt, idx++;
		else if(arr[idx] == '(')
			cnt++;
		else if(arr[idx] == ')')
			cnt--, sum++;
		idx++;
	}
	printf("%d\n", sum);
}