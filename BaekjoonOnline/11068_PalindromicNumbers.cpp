#include <cstdio>
int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		int num, ch = 1;
		scanf("%d", &num);
		for(int p = 2;p <= 64;p++){
			int str[50] = {0}, temp = num, len = 0;
			ch = 1;
			while(temp){
				//printf("%d ", temp % p);
				str[len++] = temp % p;
				temp /= p;
			}
			//printf("\n");
			int i = 0, j = len - 1;
			while(i <= j){
				if(str[i] == str[j])
					i++, j--;
				else{
					ch = 0;
					break;
				}
			}
			if(ch){
				printf("1\n");
				break;
			}
		}
		if(!ch)	printf("0\n");
	}
}