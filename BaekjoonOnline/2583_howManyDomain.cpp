#include <cstdio>
#include <queue>
#include <cstring>
#include <utility>
#include <algorithm>
using namespace std;
bool check[101][101];
int n, m, k, arr[101][101] = {0}, res[10001] = {0}, cur = 0;
int main(){
    queue<pair<int, int> > Q;
    int stX, stY, enX, enY, i, j, k, dist[4][2] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
    scanf("%d %d %d", &m, &n, &k);
    memset(check, false, sizeof(check));
    while(k--){
        scanf("%d %d %d %d", &stX, &stY, &enX, &enY);
        for(i = stY;i < enY;i++){
            for(j = stX;j < enX;j++)
                arr[i][j]++;
        }
    }
    for(i = 0;i < m;i++){
        for(j = 0;j < n;j++){
            if(!arr[i][j] && !check[i][j]){
                int cnt = 1;
                check[i][j] = true;
                Q.push(make_pair(i, j));
                while(!Q.empty()){
                    int y = Q.front().first, x = Q.front().second;
                    Q.pop();
                    for(k = 0;k < 4;k++){
                        int tempY = y + dist[k][0], tempX = x +dist[k][1];
                        if(tempX >= 0 && tempX < n && tempY >= 0 && tempY < m){
                            if(!arr[tempY][tempX] && !check[tempY][tempX]){
                                Q.push(make_pair(tempY, tempX));
                                check[tempY][tempX] = true, cnt++;
                            }
                        }
                    }
                }
                res[cur++] = cnt;
            }
        }
    }
    sort(res, res + cur);
    printf("%d\n", cur);
    for(i = 0;i < cur;i++)
        printf("%d ", res[i]);
}