#include <cstdio>
#include <utility>
using namespace std;
int main(){
	int i, j, n, temp, sum[4] = {0};
	pair<int, int> p[4];
	scanf("%d", &n);
	for(i = 0;i < n;i++){
		for(j = 1;j <= 3;j++){
			scanf("%d", &temp);
			sum[j] += temp;
			if(temp == 3)	p[j].first += 1;
			else if(temp == 2)	p[j].second += 1;
		}
	}
	for(i = 1;i <= 3;i++){
		int cnt = 0;
		for(j = 1;j <= 3;j++){
			if(i != j && sum[i] > sum[j])
				cnt++;
		}
		if(cnt == 2){
			printf("%d %d\n", i, sum[i]);
			return 0;
		}
	}
}