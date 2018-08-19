#include <cstdio>
#include <cstdlib>
int main(){
	int t, i, j, m, n, x, y;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d %d %d", &m, &n, &x, &y);
		int res = 0, check = 0, temp, cnt = 0, gap = abs(m - n), arr[50000] = {0};
		if(m < n){
			int temp1 = m, temp2 = x;
			m = n, x = y;
			n = temp1, y = temp2;
		}
		int tempm = 1, tempn = 1;
		while(tempm <= m){
			if(tempm == x)
				break;
			tempm++, tempn++;
			if(tempn > n){
				tempn = 1;
				res += n;
			}
		}
		arr[cnt] = tempn;
		if(tempn == y)
			printf("%d\n", x);
		else{
			while(cnt <= n){
				temp = arr[cnt] + gap;
				if(temp > n)	temp %= n;
				if(temp == 0) temp = n;
				arr[++cnt] = temp;
				if(temp == y){
					check = 1;
					break;
				}
			}
			if(check)
				printf("%d\n", res + cnt * m + arr[0]);
			else
				printf("-1\n");
		}
	}
}