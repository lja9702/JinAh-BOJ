#include <stdio.h>
#include <string.h>

int main(){
	char color[3][10];
	long long chart[11] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};
	int i;
	long long check[3], result = 0;
	for(i = 0;i < 3; i++)
		scanf("%s", &color[i]);

	for(i = 0 ; i < 3; i++){
		if(strcmp(color[i], "black") == 0)
			check[i] = 0;
		else if(strcmp(color[i], "brown") == 0)
			check[i] = 1;
		else if(strcmp(color[i], "red") == 0)
			check[i] = 2;
		else if(strcmp(color[i], "orange") == 0)
			check[i] = 3;
		else if(strcmp(color[i], "yellow") == 0)
			check[i] = 4;
		else if(strcmp(color[i], "green") == 0)
			check[i] = 5;
		else if(strcmp(color[i], "blue") == 0)
			check[i] = 6;
		else if(strcmp(color[i], "violet") == 0)
			check[i] = 7;
		else if(strcmp(color[i], "grey") == 0)
			check[i] = 8;
		else if(strcmp(color[i], "white") == 0)
			check[i] = 9;

		if(i == 0)
			result += (check[i]*10);
		else if(i == 1)
			result += (check[i]);
		else if(i == 2)
			result *= chart[check[i]];
	}

	printf("%lld\n", result);

	return 0;
}