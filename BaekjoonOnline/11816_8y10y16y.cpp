#include <cstdio>
#include <cstring>
#include <cstdlib>
int main(){
	// scanf("%i", &a);
	char in[20] = {0};
	int sum = 0, temp = 1;
	scanf("%s", in);
	if(in[0] == '0' && in[1] == 'x'){
		for(int i = strlen(in) - 1;i >= 2;i--){
			if(in[i] >= '0' && in[i] <= '9')	sum += temp * (in[i] - '0');
			else	sum += temp * (in[i] - 'a' + 10);
			temp *= 16;
		}
	}
	else if(in[0] == '0'){
		for(int i = strlen(in) - 1;i >= 1;i--)
			sum += temp * (in[i] - '0'), temp *= 8;	
	}
	else	sum = atoi(in);
	printf("%d\n", sum);
}