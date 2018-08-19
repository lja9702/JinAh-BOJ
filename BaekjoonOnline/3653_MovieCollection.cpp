#include <cstdio>
#include <vector>
#include <cstring>
using namespace std;
vector<int> tree;
int movie[100001];
int sum(int pos){
  int ret = 0;
  while(pos > 0){
    ret += tree[pos];
    pos &= (pos - 1);
  }
  return ret;
}
void update(int pos, int n){
  while(pos < tree.size()){
    tree[pos] += n;
    pos += (pos & -pos);
  }
}
int main(){
  int n, m, t, l;
  scanf("%d", &t);
  while(t--){
    scanf("%d %d", &n, &m);
    tree = vector <int> (n + m + 1, 0);
    memset(movie, 0, sizeof(movie));
    for(int i = 1;i <= n;i++){
      movie[i] = m + i;
      update(m + i, 1);
    }
    vector<int> res;
    for(int i = m;i >= 1;i--){
      scanf("%d", &l);
      res.push_back(sum(movie[l] - 1));
      update(movie[l], -1);
      movie[l] = i;
      update(movie[l], 1);
    }
    for(int i = 0;i < res.size();i++)
      printf("%d ", res[i]);
    printf("\n");
  }
}
