#include <cstdio>
#include <algorithm>
using namespace std;
int arr[100001][3] = {0};
int main(){
	int i ,j, n, dist[3] = {-1, 0, 1}, miin[3] = {0}, maax[3] = {0};
	scanf("%d", &n);
	for(i = 1;i <= n;i++)
		scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
	for(i = 0;i < 3;i++)
		miin[i] = arr[1][i], maax[i] = arr[1][i];
	for(i = 2;i <= n;i++){
		int tempMin[3] = {0}, tempMax[3] = {0};
		for(j = 0;j < 3;j++){
			int ma = 0, mi = 1 << 29;
			for(int k = 0;k < 3;k++){
				int y = j + dist[k];
				if(y >= 0 && y < 3){
					ma = max(ma, arr[i][j] + maax[y]);
					mi = min(mi, arr[i][j] + miin[y]);
				}
			}
			tempMin[j] = mi, tempMax[j] = ma;
		}
		for(j = 0;j < 3;j++)
			miin[j] = tempMin[j], maax[j] = tempMax[j];
	}
	int ma = max(maax[0], max(maax[1], maax[2]));
	int mi = min(miin[0], min(miin[1], miin[2]));
	printf("%d %d\n", ma, mi);
}