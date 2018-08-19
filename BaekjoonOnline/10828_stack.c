#include <stdio.h>
#include <string.h>

int main(){
	int N, i, j;
	scanf("%d", &N);
	int arr[N], num, top = -1;
	char input[10];
	for(i = 0;i < N; i++){
		scanf("%s", &input);
		
		if(strcmp(input, "push") == 0){
			scanf("%d", &num);
				arr[++top] = num;
		}

		else if(strcmp(input, "pop") == 0){
			if(top == -1)
				printf("-1\n");
			else
				printf("%d\n", arr[top--]);
		}

		else if(strcmp(input, "size") == 0){
			printf("%d\n", top+1);
		}
		
		else if(strcmp(input, "empty") == 0){
			if(top == -1)
				printf("1\n");
			else
				printf("0\n");
		}
		
		else if(strcmp(input, "top") == 0){
			if(top == -1)
				printf("-1\n");
			else
				printf("%d\n", arr[top]);
		}
	}
	return 0;
}