#include <cstdio>
#include <cstring>
int n, arr[14], fin[14];
void dfs(int idx, int st){
	if(idx == 6){
		for(int i = 0;i < 6;i++)
			printf("%d ", fin[i]);
		printf("\n");
		return ;
	}
	for(int i = st;i < n;i++){
		fin[idx] = arr[i];
		dfs(idx + 1, i + 1);
	}
}
int main(){
	while(1){
		memset(arr, 0, sizeof(int));
		scanf("%d", &n);
		if(!n)	return 0;
		for(int i = 0;i < n;i++)
			scanf("%d", &arr[i]);
		dfs(0, 0);
		printf("\n");
	}
}