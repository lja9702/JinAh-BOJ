#include <cstdio>
#include <algorithm>
#include <utility>
using namespace std;
pair<int, int> arr[10001];
int main(){
	int i, j, a, b, n, l, cur = 0, cnt = 0;
	scanf("%d %d", &n, &l);
	for(i = 0;i < n;i++){
		scanf("%d %d", &a, &b);
		arr[i] = make_pair(a, b - 1);
	}
	sort(arr, arr + n);
	for(i = 0;i < n;i++){
		int x = arr[i].first, y = arr[i].second;
		if(cur <= x)	cur = x;
		else if(cur > y)	continue;
		int gap = y - cur + 1;
		cnt += gap / l;
		if(gap % l == 0)	cur = y + 1;
		else 	cnt += 1, cur += ((gap / l + 1) * l);
		//printf("cnt: %d cur: %d\n",cnt, cur);
	}
	printf("%d\n", cnt);
}

//첫시작은 그대로 끝지점은 입력된 값에서 1뺀값을 저장한다.
// 이때, 커서를 두고 만약 (cur<=x)이면 cur = x 
//(cur > y)이면 continue;를 돌리면서 진행을 한다. 
//말그대로 그리디하게 풀면된다. 
//이때 주의할 점은 좌표를 sorting해줘야되고, 웅덩이가 겹칠 수 있다는 점이다.