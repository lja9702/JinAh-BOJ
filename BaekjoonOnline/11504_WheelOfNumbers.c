#include <stdio.h>

int main(){
	int i, j, t, k;
	scanf("%d", &t);
	for(i = 0;i < t;i++){
		int n, m, inX = 0, inY = 0, arr[101] = {0}, cnt = 0, x[20] = {0}, y[20] = {0};
		scanf("%d %d", &n, &m);
		int ten = 1, temT, temp = 0;
		for(j = 0;j < m - 1;j++)	ten *= 10;
		temT = ten;
		for(j = 0;j < m;j++){
			scanf("%d", &x[j]);
			inX += temT * x[j];
			temT /= 10;
		}
		temT = ten;
		for(j = 0;j < m;j++){
			scanf("%d", &y[j]);
			inY += temT * y[j];
			temT /= 10;
		}
		for(j = 0;j < n;j++)
			scanf("%d", &arr[j]);
		for(j = 0;j < n;j++){
			temT = ten, temp = 0;
			for(k = j;k <= j + m;k++){
				int t = k;
				if(t > n - 1)	t = t - n;
				temp += (temT * arr[t]);
				temT /= 10;
			}
			if(temp >= inX && temp <= inY)
				cnt++;
		}
		printf("%d\n", cnt);
	}
}