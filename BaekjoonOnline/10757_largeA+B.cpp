#include <cstdio>
#include <cstring>

int main(){
	char a[10001] = {0}, b[10001] = {0};
	scanf("%s %s", a, b);
	int A = strlen(a), B = strlen(b);
	int temp = 0, i, j, res[10002] = {0};
	
	if(A == B){
		for(i = A - 1;i >= 0;i--){
			res[i + 1] = (a[i] - '0') + (b[i] - '0');
		}
	}
	else if(A > B){
		for(i = A - 1;i >= A - B;i--){
			res[i + 1] = (a[i] - '0') + (b[i - (A - B)] - '0');
		}
		for(i = 0;i < A - B;i++)
			res[i + 1] = (a[i] - '0');

	}
	else{
		for(i = B - 1;i >= B - A;i--){
			res[i + 1] = (a[i - (B - A)] - '0') + (b[i] - '0');
		}
		for(i = 0;i < B - A;i++)
			res[i + 1] = (b[i] - '0');
	}
	int max = (A >= B ? A : B);
	for(i = max;i >= 0;i--){
		if(i == 0)
			res[i] = temp;
		else{
			res[i] += temp;
			temp = res[i] / 10;
			res[i] %= 10;
		}
	}
	for(i = 0;i <= max;i++){
		if(i == 0 && res[0] == 0)
			continue;
		printf("%d", res[i]);
	}
	printf("\n");
}