#include <cstdio>
#include <vector>
using namespace std;
int main(){
  int n, k;
  while(1){
    int arr[1001], cnt = 0, root[1001], res = 0;
    vector<int> v[1001];
    scanf("%d %d", &n, &k);
    if(!n && !k)
      return 0;
    for(int i = 0;i < n;i++)
      scanf("%d", &arr[i]);
    root[0] = -1;
    for(int i = 1;i < n;i++){
      if(i == 1 || (arr[i - 1] + 1 == arr[i]))
        root[i] = cnt, v[cnt].push_back(i);
      else  root[i] = ++cnt, v[cnt].push_back(i);
      if(arr[i] == k) k = i;
    }
    int parent = root[k];
    if(parent == -1){
      printf("0\n");
      continue;
    }
    int ances = root[parent];
    if(ances == -1){
      printf("0\n");
      continue;      
    }
    for(int i = 0;i < v[ances].size();i++){
      if(v[ances][i] != parent){
        for(int j = 0;j < v[v[ances][i]].size();j++)
          res++;
      }
    }
    printf("%d\n", res);
  }
}
