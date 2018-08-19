#include <cstdio>
#include <utility>
#include <algorithm>
using namespace std;
pair<int, int> P[1000000];
int main(){
	int n, m, i, j, temp, check[1001] = {0};
	scanf("%d %d", &n, &m);
	int tot = 0, res = 1 << 30;	
	for(i = 1;i <= n;i++){
		for(j = 1;j <= m;j++){
			scanf("%d", &temp);
			P[tot++] = make_pair(temp, i);
		}
	}
	if(n == 1 && m == 1){
		printf("0\n");
		return 0;
	}
	sort(P, P + tot);
	int x = 0, y = 0, cnt = 0;
	while(cnt != n){
		if(!check[P[y].second])
			cnt++;
		check[P[y++].second]++;
	}
	y--;
	res = P[y].first - P[x].first;

	while(x < y && y < tot){
		if(cnt == n){
			if(res > P[y].first - P[x].first)
				res = P[y].first - P[x].first;
			x++;
			check[P[x - 1].second]--;
			if(!check[P[x - 1].second])	cnt--;
		}
		else{
			y++;
			if(!check[P[y].second])	cnt++;
			check[P[y].second]++;
		}
	}
	printf("%d\n", res);
}