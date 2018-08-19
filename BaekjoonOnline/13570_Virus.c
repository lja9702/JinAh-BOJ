#include <stdio.h>
int arr[(1 << 20) + 1][2] = {0}, cnt[(1 << 20) + 1] = {0};

int child_cnt(int m){
	if(arr[m][0] != 0)
		cnt[m] += child_cnt(arr[m][0]);

	if(arr[m][1] != 0)
		cnt[m] += child_cnt(arr[m][1]);

	return cnt[m] + 1;
}

int main(){
	int n, i, j, res = 1, check = 1;
	scanf("%d", &n);
	for(i = 1;i <= n;i++){
		scanf("%d %d", &arr[i][0], &arr[i][1]);
	}

	child_cnt(1);

	while(cnt[check] != 0 && arr[check][0] != 0 && arr[check][1] != 0){
		if(cnt[arr[check][0]] >= cnt[arr[check][1]])
			check = arr[check][1];
		else
			check = arr[check][0];
		res++;
	}
	printf("%d\n", res);

}