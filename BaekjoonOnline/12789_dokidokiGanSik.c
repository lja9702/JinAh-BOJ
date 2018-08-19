#include <stdio.h>

int main(){
	int i, n, arr[1001] = {0}, stack[1001] = {0}, top = 0, cur = 0;
	scanf("%d", &n);
	for(i = 1;i <= n;i++)
		scanf("%d", &arr[i]);
	for(i = 1;i <= n;i++){
		int check = 0;
		if(top != 0 && stack[top] == i){
			top--;
			continue;
		}
		while(arr[cur] != i && cur != n + 1){
			if(arr[cur] != i)
				stack[++top] = arr[cur++];
		}
		if(arr[cur] == i){
			cur++;
			check = 1;
		}
		if(check == 0){
			printf("Sad\n");
			return 0;
		}
	}
	printf("Nice\n");
}