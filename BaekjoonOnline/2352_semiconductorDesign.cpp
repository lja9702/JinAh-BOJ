#include <cstdio>
#include <vector>
using namespace std;
vector<int> v;
int main(){
  int n, a, res = 0;
  scanf("%d", &n);
  v.push_back(-(1 << 29));
  for(int i = 0;i < n;i++){
    scanf("%d", &a);
    if(v.back() < a)
      v.push_back(a), res++;
    else{
      vector<int>::iterator it = lower_bound(v.begin(), v.end(), a);
      *it = a;
    }
  }
  printf("%d\n", res);
}
