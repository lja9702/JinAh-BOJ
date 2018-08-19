#include <stdio.h>

int main(){
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	int setN = n / 2, setM = m, team = (setN > setM ? setM : setN);
	int other = (m + n) - team * 3;
	while(other < k)
		team--, other += 3;
	printf("%d\n", team);
}