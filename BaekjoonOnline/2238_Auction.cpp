#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
struct arr{
  char name[11];
  int c;
};
vector<char*> V[10001];
arr arr[100001];
int minn =  1 << 29, idx, u, n, cnt[10001];
int main(){
  scanf("%d %d", &u, &n);
  for(int i = 0;i < n;i++){
    scanf("%s %d", arr[i].name, &arr[i].c);
    cnt[arr[i].c]++;
    V[arr[i].c].push_back(arr[i].name);
  }
  for(int i = 1;i <= u;i++){
    if(!cnt[i]) continue;
    if(cnt[i] < minn)
      minn = cnt[i], idx = i;
  }
  printf("%s %d\n", V[idx][0], idx);
}
