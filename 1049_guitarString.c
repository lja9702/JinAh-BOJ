#include <stdio.h>

int main(){
	int n, m, i, j;
	scanf("%d %d", &n, &m);
	int brand[m][2], res[m + 1];
	for(i = 0;i < m;i++)
		scanf("%d %d", &brand[i][0], &brand[i][1]);

	int setMin = brand[0][0], danMin = brand[0][1];

	for(i = 0;i < m;i++){
		int check = (brand[i][0] < brand[i][1] * 6 ? 0 : 1);
		if(n % 6 == 0){
			if(!check)
				res[i] = brand[i][0] * (n / 6);
			else
				res[i] = brand[i][1] * n;
		}
		else{
			if(!check)
				res[i] = brand[i][0] * (n / 6 + 1);
			else
				res[i] = brand[i][1] * n;
		}
		if(setMin > brand[i][0])
			setMin = brand[i][0];
		if(danMin > brand[i][1])
			danMin = brand[i][1];
	}
	if(n % 6 == 0)
		res[i] = setMin * (n / 6 - 1) + danMin * 6;
	else
		res[i] = setMin * (n / 6) + danMin *(n % 6);
	int min = res[0];
	for(i = 0;i <= m;i++){
		if(min > res[i])
			min = res[i];
	}
	printf("%d\n", min);
}