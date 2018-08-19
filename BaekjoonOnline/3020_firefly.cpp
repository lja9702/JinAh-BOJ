#include <cstdio>

using namespace std;
int arr[500001] = {0}, up[500001] = {0}, down[500001] = {0};
int cnt[500001] = {0};
int main(){
	int i, n, h, t;
	scanf("%d %d", &n, &h);
	int up_sum = n / 2, down_sum = n / 2;
	for(i = 0;i < n;i++){
		scanf("%d", &t);
		if(i % 2 == 0){
			down[t]++;
		}
		else{
			up[t]++;
		}
	}

	for(i = 1;i <= h;i++){
		cnt[i] += down_sum;
		down_sum -= down[i];

		cnt[h - i + 1] += up_sum;
		up_sum -= up[i];
	}

	int min = 1, nt = 0;

	for(i = 1;i <= h;i++){
		if(cnt[i] < cnt[min]){
			min = i;
			nt = 1;
		}
		else if(cnt[i] == cnt[min])
			nt++;
	}
	printf("%d %d\n", cnt[min], nt);
}