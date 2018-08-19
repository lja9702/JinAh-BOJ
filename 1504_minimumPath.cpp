#include <cstdio>
#include <algorithm>
using namespace std;
int arr[801][801] = {0}, n, e, p, q, res = 0, x, y, z;
int main() {
    scanf("%d %d", &n, &e);
    	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			if(i == j)	arr[i][j] = 0;
			else 	arr[i][j] = 1 << 28;
		}
	}
	for (int i = 0; i < e; i++) {
    		scanf("%d %d %d", &x, &y, &z);
    		arr[x][y] = arr[y][x] = z;
    	}
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
    scanf("%d %d", &p, &q);
    arr[p][p] = arr[q][q] = 0;
    res = min(arr[1][p] + arr[p][q] + arr[q][n], arr[1][q] + arr[q][p] + arr[p][n]);
    printf("%d\n", res >= 1 << 28 ? -1 : res);
    return 0;
}