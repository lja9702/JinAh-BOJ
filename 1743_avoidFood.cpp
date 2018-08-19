#include <cstdio>
#include <queue>
#include <cstring>
#include <utility>
using namespace std;
bool check[101][101];
int n, m, k, arr[101][101] = {0}, res = 0;
int main(){
    queue<pair<int, int> > Q;
    int a, b, i, j, k, dist[4][2] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
    scanf("%d %d %d", &n, &m, &k);
    memset(check, false, sizeof(check));
    for(i = 0;i < k;i++){
        scanf("%d %d", &a, &b);
        arr[a][b]++;
    }
    for(i = 1;i <= n;i++){
        for(j = 1;j <= m;j++){
            if(arr[i][j] && !check[i][j]){
                int cnt = 1;
                check[i][j] = true;
                Q.push(make_pair(i, j));
                while(!Q.empty()){
                    int x = Q.front().first, y = Q.front().second;
                    Q.pop();
                    for(k = 0;k < 4;k++){
                        int tempX = x + dist[k][0], tempY = y +dist[k][1];
                        if(tempX >= 1 && tempX <= n && tempY >= 1 && tempY <= m){
                            if(arr[tempX][tempY] && !check[tempX][tempY]){
                                Q.push(make_pair(tempX, tempY));
                                check[tempX][tempY] = true, cnt++;
                            }
                        }
                    }
                }
                if(cnt > res)   res = cnt;
            }
        }
    }
    printf("%d\n", res);
}