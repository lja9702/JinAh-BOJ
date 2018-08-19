#include <stdio.h>
#include <string.h>

int main(){
	int N, i, j;
	scanf("%d", &N);
	int arr[N], num, rear = -1;
	char input[20];
	for(i = 0;i < N; i++){
		scanf("%s", &input);
		
		if(strcmp(input, "push_front") == 0){
			scanf("%d", &num);
			for(j = rear;j >= 0;j--)
				arr[j + 1] = arr[j];
			arr[0] = num, rear++;
		}

		else if(strcmp(input, "push_back") == 0){
			scanf("%d", &num);
			arr[++rear] = num;
		}

		else if(strcmp(input, "pop_front") == 0){
			if(rear == -1)
				printf("-1\n");
			else{
				printf("%d\n", arr[0]);
				for(j = 1;j<=rear;j++)
					arr[j-1] = arr[j];
				rear--;
			}
		}

		else if(strcmp(input, "pop_back") == 0){
			if(rear == -1)
				printf("-1\n");
			else
				printf("%d\n", arr[rear--]);
		}

		else if(strcmp(input, "size") == 0)
			printf("%d\n", rear+1);
		
		else if(strcmp(input, "empty") == 0){
			if(rear == -1)
				printf("1\n");
			else
				printf("0\n");
		}
		
		else if(strcmp(input, "front") == 0){
			if(rear == -1)
				printf("-1\n");
			else
				printf("%d\n", arr[0]);
		}
		
		else if(strcmp(input, "back") == 0){
			if(rear == -1)
				printf("-1\n");
			else
				printf("%d\n", arr[rear]);
		}
	}
	return 0;
}