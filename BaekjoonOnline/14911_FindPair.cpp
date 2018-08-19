#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;
vector<int> v[100001];
char arr[100];
int num[11], cnt, res, t;
int main(){
  fgets(arr, sizeof(arr), stdin);
  arr[strlen(arr) - 1] = '\0';
  char *rest;
  rest = strtok(arr, " ");
  while(rest != NULL){
    num[cnt++] = atoi(rest);
    rest = strtok(NULL, " ");
  }
  scanf("%d", &t);
  std::sort(num, num + cnt);
  for(int i = 0;i < cnt;i++){
    for(int j = i + 1;j < cnt;j++){
      if(num[i] + num[j] == t){
        bool fl = 1;
        for(int k = 0;k < v[num[i]].size();k++){
          if(v[num[i]][k] == num[j]) fl = 0;
        }
        if(fl){
          printf("%d %d\n", num[i], num[j]);
          res++;  v[num[i]].push_back(num[j]);
        }
      }
    }
  }
  printf("%d\n", res);
}
