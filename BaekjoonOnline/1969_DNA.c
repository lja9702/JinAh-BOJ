#include <stdio.h>

char arr[1001][51] = {0};
int main(){
	char dna[51] = {0}, t[4] = {'A', 'C', 'G', 'T'};
	int k, n, m, i, j, cnt = 0;
	scanf("%d %d", &n, &m);
	for(i = 0;i< n;i++){
		scanf("%s", arr[i]);
	}

	for(i = 0;i < m;i++){
		int max = 0, temp[4] = {0};
		for(j = 0;j < n;j++){
			for(k = 0;k < 4;k++){
				if(arr[j][i] == t[k])
					temp[k]++;
			}
		}
		for(k = 0;k < 4;k++){
			if(temp[k] > temp[max])
				max = k;
		}
		dna[i] = t[max];
		cnt += (n - temp[max]);
	}
	printf("%s\n%d\n", dna, cnt);
	return 0;
}