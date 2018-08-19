#include <cstdio>
#include <vector>
using namespace std;
vector <int> v;
int n, a, res;
int main(){
  scanf("%d", &n);
  v.push_back(-1);
  for(int i = 1;i <= n;i++){
    scanf("%d", &a);
    if(v.back() < a){
      v.push_back(a);
      res++;
    }
    else{
      vector<int>::iterator it = lower_bound(v.begin(), v.end(), a);
      *it = a;
    }
  }
  printf("%d\n", n - res);
}
