#include <stdio.h>

int main(){
	int N, K, i, j, cnt = 0;
	scanf("%d %d", &N, &K);
	int country[N][5];
	for(i = 0;i<N;i++)
		scanf("%d %d %d %d", &country[i][0], &country[i][1], &country[i][2], &country[i][3]);
	
	for(i = 0;i<N;i++){
		if(K == country[i][0]){
			K = i;
			break;
		}
	}
	for(j = 0;j<N;j++){
		if(country [j][0] != 0){
			if(country[j][1] > country[K][1]){
				cnt++;
				country[j][0] = 0;
			}
			else if(country[j][1] == country[K][1]){
				if(country[j][2] > country[K][2]){
					cnt++;
					country[j][0] = 0;
				}
				else if(country[j][2] == country[K][2]){
					if(country[j][3] > country[K][3]){
						cnt++;
						country[j][0] = 0;
					}
				}
			}
		}
	}
	printf("%d\n", cnt+1);
}