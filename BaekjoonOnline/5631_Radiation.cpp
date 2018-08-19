#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int n, ax, ay, bx, by, q, cnt = 1;
int main(){
  while(~scanf("%d", &n)){
    if(!n)  return 0;
    vector <pair<int, int> > v;
    vector <long long> arr1, arr2;
    for(int i = 0;i < n;i++){
      int p, q;
      scanf("%d %d", &p, &q);
      v.push_back({p, q});
    }
    scanf("%d %d %d %d %d", &ax, &ay, &bx, &by, &q);
    for(int i = 0;i < n;i++){
      arr1.push_back(pow(v[i].first - ax, 2) + pow(v[i].second - ay, 2));
      arr2.push_back(pow(v[i].first - bx, 2) + pow(v[i].second - by, 2));
    }
    sort(arr1.begin(), arr1.end()); sort(arr2.begin(), arr2.end());
    long long r1, r2, a, b, ab;
    for(int i = 0;i < q;i++){
      scanf("%lld %lld", &r1, &r2);
      r1 *= r1, r2 *= r2;
      if(!i)  printf("Case %d:\n", cnt++);
      a = upper_bound(arr1.begin(), arr1.end(), r1) - arr1.begin();
      b = upper_bound(arr2.begin(), arr2.end(), r2) - arr2.begin();
      if(n - a - b < 0) printf("0\n");
      else printf("%lld\n", n - a - b);
    }
  }
}
