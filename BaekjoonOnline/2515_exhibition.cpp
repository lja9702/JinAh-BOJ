#include <cstdio>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;
typedef pair<int, int> pi;
int dp[300001], c;
int main(){
  int n, h, s;
  vector<pi> p;
  vector<int> temp;
  scanf("%d %d", &n, &s);
  p.push_back(pi(0, 0));
  for(int i = 0;i < n;i++){
    scanf("%d %d", &h, &c);
    p.push_back(pi(h, c));
  }
  sort(p.begin(), p.end());
  dp[1] = p[1].second;
  for(int i = 0;i <= n;i++)
    temp.push_back(p[i].first);
  for(int i = 2;i <= n;i++){
    if(temp[i] - temp[i - 1] < s){
      vector<int>::iterator it = upper_bound(temp.begin(), temp.end(), temp[i] - s);
      int cur = it - temp.begin();
      dp[i] = max(dp[i - 1], dp[cur - 1] + p[i].second);
    }
    else
      dp[i] = dp[i - 1] + p[i].second;
  }
  printf("%d\n", dp[n]);
}
