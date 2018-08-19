#include <cstdio>

void hanoi(int st, int mid, int end, int n){
	if(n == 0)	return;
	hanoi(st, end, mid, n - 1);
	printf("%d %d\n", st, end);
	hanoi(mid, st, end, n - 1);
}
int main(){
	int i, n, cnt = 1;
	scanf("%d", &n);
	for(i = 1;i <= n;i++)
		cnt *= 2;
	printf("%d\n", cnt - 1);
	hanoi(1, 2, 3, n);
}