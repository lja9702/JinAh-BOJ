#include <cstdio>

int size[28] = {0};
char moo(int st, int end, int idx, int n){
	if(idx == 0){
		if(n == st)	return 'm';
		else	return 'o';
	}
	else if(st <= n && n < st + size[idx - 1])
		return moo(st, st + size[idx - 1] - 1, idx - 1, n);
	else if(end - size[idx - 1] < n && n <= end)
		return moo(end - size[idx - 1] + 1, end, idx - 1, n);
	else{
		if(n == st + size[idx - 1])	return 'm';
		else	return 'o';
	}
}
int main(){
	int i, n;
	scanf("%d", &n);
	size[0] = 3;
	for(i = 1;i < 28;i++)
		size[i] = size[i - 1] * 2 + i + 3;
	printf("%c\n", moo(1, size[27], 27, n));
}
