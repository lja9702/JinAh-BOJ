#include <cstdio>
bool num[10001];
int main(){
	num[0] = 1, num[1] = 1;
	for(int i = 2;i * i <= 10000;i++){
		if(!num[i]){
			for(int j = i * i;j <= 10000;j += i)
				num[j] = 1;
		}
	}
	int t, a;
	scanf("%d", &t);
	while(t--){
		int temp = 0;
		scanf("%d", &a);
		for(int i = 2;i * 2 <= a;i++){
			if(!num[i] && !num[a - i])	temp = i;
		}
		printf("%d %d\n", temp, a - temp);
	}
}