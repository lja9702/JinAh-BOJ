#include <stdio.h>
long long left[100001] = {0}, right[100001] = {0}, cross[100001] = {0};
int main(){
	long long n, i, j, lef = 0, rig = 0;
	scanf("%lld", &n);
	for(i = 1;i <= n;i++)
		scanf("%lld", &cross[i]);
	for(i = 2;i <= n;i++){
		scanf("%lld", &left[i]);
		lef += left[i];
		left[i] = lef;
	}
	for(i = 2;i <= n;i++){
		scanf("%lld", &right[i]);
		rig += right[i];
		right[i] = rig;
	}

	for(i = 1;i <= n;i++)
		right[i] = (rig - right[i]);

	long long min = 1L << 60, minI;
	for(i = 1;i <= n;i++){
		if(left[i] + cross[i] + right[i] < min)
			min = left[i] + cross[i] + right[i], minI = i;
	}
	printf("%lld %lld", minI, min);
}