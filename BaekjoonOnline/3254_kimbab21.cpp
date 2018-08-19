#include <cstdio>
const int sk = 1, ji = 2;
int arr[7][8], res, resflag;
bool sflag, jflag;
int dist[4][2] = {{0, 1}, {1, 1}, {1, 0}, {1, -1}};
int main(){
  int a, b, t = 21;
  while(t--){
    int sx, sy, jx, jy;
    scanf("%d %d", &a, &b);
    for(int i = 6;i >= 1;i--){
      if(!arr[i][a]){
        arr[i][a] = sk, sx = i, sy = a;
        break;
      }
    }
    for(int i = 6;i >= 1;i--){
      if(!arr[i][b]){
        arr[i][b] = ji, jx = i, jy = b;
        break;
      }
    }
    for(int p = 1;p <= 6;p++){
      for(int q = 1;q <= 7;q++){
        for(int i = 0;i < 4;i++){
          int x = p, y = q, cnt1 = 0, cnt2 = 0;
          if(arr[x][y] == sk)  cnt1++;
          else if(arr[x][y] == ji)  cnt2++;
          for(int j = 0;j < 3;j++){
            int tx = x + dist[i][0], ty = y + dist[i][1];
            if(tx > 0 && tx <= 6 && ty > 0 && ty <= 7){
              if(arr[tx][ty] == sk)  cnt1++;
              else if(arr[tx][ty] == ji)  cnt2++;
            }
            x += dist[i][0], y += dist[i][1];
          }
          if(cnt1 == 4) sflag = 1;
          else if(cnt2 == 4) jflag = 1;
        }
      }
    }
    if(!resflag){
      if(sflag)
        resflag = 1, res = 21 - t;
      else if(jflag)
        resflag = 2, res = 21 - t;
    }
  }
  if(!resflag)  printf("ss\n");
  else if(resflag == 1) printf("sk %d\n", res);
  else  printf("ji %d\n", res);
}
