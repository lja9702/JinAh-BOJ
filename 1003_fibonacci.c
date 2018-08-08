#include <stdio.h>
int main(){
	int cnt1[41] = {0}, cnt2[42] = {0}, t, n;
	scanf("%d", &t);
	cnt1[0] = 1, cnt2[0] = 0, cnt1[1] = 0, cnt2[1] = 1;
	for(int i = 2;i <= 40;i++){
		cnt1[i] = cnt1[i - 1] + cnt1[i - 2];
		cnt2[i] = cnt2[i - 1] + cnt2[i - 2];
	}
	while(t--){
		scanf("%d", &n);
		printf("%d %d\n", cnt1[n], cnt2[n]);
	}
}
