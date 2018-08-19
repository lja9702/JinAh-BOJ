#include <cstdio>

int main(){
	int i, j, t, cnt = 0;
	scanf("%d", &t);
	for(i = 1;i <= (t / 2);i++){
		int a, b, c;
		for(j = i;j <= (t / 2);j++){
			a = i, b = j, c = t - i - j;
			if(c < a || c < b)
				continue;
			if(a >= b && a >= c && a < b + c)
				cnt++;
			else if(b >= a && b >= c && b < a + c)
				cnt++;
			else if(c >= a && c >= b && c < a + b)
				cnt++;
		}
	}
	printf("%d\n", cnt);
}