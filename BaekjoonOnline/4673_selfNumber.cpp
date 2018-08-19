#include <cstdio>
bool num[10001];

int self_number(int n){
	int sum = n;
	while(n){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main(){
	for(int i = 1;i <= 10000;i++){
		int idx = self_number(i);
		if(idx <= 10000)	num[idx] = true;
	}

	for(int i = 1;i <= 10000;i++)
		if(!num[i])	printf("%d\n", i);
}