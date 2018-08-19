#include <cstdio>
bool flag = false;
int main(){
	int m, n, k, type, x, y;
	scanf("%d %d %d", &m, &n, &k);
	scanf("%d %d", &x, &y);
	if((x % 2 && y % 2 == 0) || (x % 2 == 0 && y % 2))	type = 1;
	else	type = 2;

	while(--k){
		bool evenX = false, evenY = false;
		scanf("%d %d", &x, &y);
		if(x % 2)	evenX = true;
		if(y % 2)	evenY = true;
		if(k % 2 && type == 2 && ((evenX && !evenY) || (!evenX && evenY)))
			flag = true;
		else if(k % 2 && type == 1 && ((evenX && evenY) || (!evenX && !evenY)))
			flag = true;
	}
	if(flag)	printf("YES\n");
	else	printf("NO\n");
}