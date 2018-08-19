#include <stdio.h>

int main(){
	int a, b, t, n, i, j, k;
	scanf("%d", &t);
	for(i = 0;i < t;i++){
		int arr[10001] = {0};
		scanf("%d", &n);
		for(j = 1;j < n;j++){
			scanf("%d %d", &a, &b);
			arr[b] = a;
		}
		scanf("%d %d", &a, &b);
		int check = 0, A[10001] = {0}, B[10001] = {0}, par = a, curA = 0, curB = 0;
		A[curA++] = a, B[curB++] = b;
		while(arr[par] != 0){
			A[curA++] = arr[par];
			par = arr[par];
		}
		par = b;
		while(arr[par] != 0){
			B[curB++] = arr[par];
			par = arr[par];
		}
		for(j = 0;j < curA;j++){
			for(k = 0;k < curB;k++){
				if(A[j] == B[k]){
					printf("%d\n", A[j]);
					check = 1;
					break;
				}
			}
			if(check == 1)	break;
		}
	}
}