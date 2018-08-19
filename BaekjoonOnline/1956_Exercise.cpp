#include <cstdio>
#include <algorithm>
int arr[401][401] = {0};
int main(){
	int v, e, i, j, k, a, b, c, res = 1 << 29, cnt = 0;
	scanf("%d %d", &v, &e);
	for(i = 0;i < e;i++){
		scanf("%d %d %d", &a, &b, &c);
		arr[a][b] = c;
	}
	for(i = 1;i <= v;i++){
		for(j = 1;j <= v;j++){
			if(arr[i][j] == 0)	arr[i][j] = 1 << 29;
		}
	}
	for(k = 1;k <= v;k++){
		for(i = 1;i <= v;i++){
			for(j = 1;j <= v;j++)
				arr[i][j] = std::min(arr[i][j], arr[i][k] + arr[k][j]);
		}
	}	
	for(i = 1;i <= v;i++){
		res = std::min(res, arr[i][i]);
		if(arr[i][i] >= 1 << 29)	cnt++;
	}
	if(cnt == v)	printf("-1\n");
	else printf("%d\n", res);
}