#include <stdio.h>
#include <stdlib.h>
int compare(const void* a, const void* b){
	return (*(int*) a > *(int*) b ? 1 : (*(int*) a < *(int*) b ? -1 : 0));
}
int main(){
	int i, j, n;
	scanf("%d", &n);
	long long arr[n], top = -1, input;
	for(i = 0;i < n;i++){
		scanf("%lld", &input);
		if(input == 0){
			if(top == -1)
				printf("0\n");
			else{
				qsort(arr, top + 1, sizeof(int), compare);
				printf("%lld\n", arr[0]);
				for(j = 1;j<=top;j++)
					arr[j-1] = arr[j];
				top--;
			}
		}
		else
			arr[++top] = input;
	}
}