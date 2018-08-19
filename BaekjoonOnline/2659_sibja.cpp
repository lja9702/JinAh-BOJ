#include <cstdio>
#include <cstdlib>
int main(){
	int tot = 0, i, j, arr[4] = {0}, val = 10000, cnt[10000] = {0};
	for(i = 0;i < 4;i++)
		scanf("%d", &arr[i]);
	for(i = 0;i < 4;i++){
		char str[4] = {0};
		for(j = i;j < i + 4;j++){
			int temp = j;
			if(temp >= 4)	temp %= 4;
			str[j - i] = arr[temp] + '0';
		}
		if(atoi(str) < val)	val = atoi(str);
	}
	for(i = 1111;i < val;i++){
		char temp[4] = {0};
		int t = i, n = 3, max = 10000;
		while(t){
			temp[n--] = t % 10 + '0';
			t /= 10;
		}
		for(j = 0;j < 4;j++){
			int ch = 1;
			char str[5] = {0};
			for(int k = j;k < j + 4;k++){
				int p = k;
				if(p >= 4)	p %= 4;
				if(temp[p] == '0'){
					ch = 0;
					break;
				}
				str[k - j] = temp[p];
			}
			if(ch && atoi(str) < max)	max = atoi(str);
		}
		if(!cnt[max]){	
			cnt[max]++,tot++;
			//printf("%d\n", max);
		}
	}
	printf("%d\n", tot + 1);
}