#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
  int n, a;
  while(~scanf("%d", &n)){
    int cnt = 0;
    vector<int> v;
    v.push_back(-(1 << 29));
    for(int i = 1;i <= n;i++){
      scanf("%d", &a);
      if(a > v.back()){
        v.push_back(a); cnt++;
      }
      else{
        auto it = lower_bound(v.begin(), v.end(), a);
        *it = a;
      }
    }
    printf("%d\n", cnt);
  }
}
