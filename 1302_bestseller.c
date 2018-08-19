#include <stdio.h>
#include <string.h>

int main(){
	int N, i, j;
	scanf("%d", &N);
	char book[N][51];
	int check[N];
	for(i = 0;i<N;i++)
		scanf("%s", &book[i]);
	
	for(i = 0;i<N;i++){
		int cmp = 0;
		for(j = i;j<N;j++){
			if(strcmp(book[i], book[j]) == 0)
				cmp++;
		}
		check[i] = cmp;
	}
	int maxIndex = 0;
	for(i = 0;i<N;i++){
		if(check[i] == check[maxIndex]){
			if(strcmp(book[i], book[maxIndex]) < 0)
				maxIndex = i;
		}
		else{
			if(check[maxIndex] < check[i])
				maxIndex = i;
		}
	}
	printf("%s\n", book[maxIndex]);
}