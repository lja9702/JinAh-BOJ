#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;
vector<int> v;
int fail[1100000], tlen, plen;
char T[1100000], P[1100000];
void getFail(){
  int j = 0;
  for(int i = 1;i < plen;i++){
    while(j > 0 && P[i] != P[j])
      j = fail[j - 1];
    if(P[i] == P[j])  fail[i] = ++j;
  }
}
void KMP(){
  int j = 0;
  for(int i = 0;i < tlen;i++){
    while(j > 0 && T[i] != P[j])
      j = fail[j - 1];
    if(T[i] == P[j]){
      if(j == plen - 1){
        v.push_back(i - plen + 2);
        j = fail[j];
      }
      else  j++;
    }
  }
}
int main(){
  fgets(T, sizeof(T), stdin);
  fgets(P, sizeof(P), stdin);
  if(T[strlen(T) - 1] == '\n')  T[strlen(T) - 1] = '\0';
  if(P[strlen(P) - 1] == '\n')  P[strlen(P) - 1] = '\0';
  tlen = strlen(T), plen = strlen(P);
  getFail();
  KMP();
  int size = v.size();
  printf("%d\n", size);
  for(int i = 0;i < size;i++)
    printf("%d ", v[i]);
}
