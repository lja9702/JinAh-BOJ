#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int t, n, m;
int main(){
  scanf("%d", &t);
  while(t--){
    int a, b, c, indeg[1001] = {0}, dp[1001] = {0};
    vector<pair<int, int> > ad[1001];
    queue<int> Q;
    scanf("%d %d", &n, &m);
    for(int i = 0;i < m;i++){
      scanf("%d %d %d", &a, &b, &c);
      ad[a].push_back(make_pair(b, c)), ad[b].push_back(make_pair(a, c));
      indeg[a]++, indeg[b]++;
    }
    for(int i = 1;i <= n;i++){
      if(indeg[i] == 1) Q.push(i);
    }
    while(!Q.empty()){
      int fr = Q.front();
      Q.pop();
      if(fr == 1) continue;
      for(int i = 0;i < ad[fr].size();i++){
        int temp = ad[fr][i].first, dm = ad[fr][i].second;
        if(!dp[fr]) dp[fr] = dm;
        printf("======%d->%d======\n", fr, temp);
        printf("dp[%d] : %d\n", fr, dp[fr]);
        dp[temp] += min(dp[fr], dm);
        printf("dp[%d] : %d\n", temp, dp[temp]);
        indeg[temp]--;
        if(indeg[temp] == 1)  Q.push(temp);
      }
    }
    printf("%d\n", dp[1]);
  }
}
