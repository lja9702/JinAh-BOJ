#include <cstdio>
#include <map>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
  int t, a, c, d, e, f, g, col = 0, wrong = 0;
  double res = 0;
  scanf("%d", &t);
  map<string, int> M, check;
  while(t--){
    char b[100];
    scanf("%d %s %d %d %d %d %d", &a, b, &c, &d, &e, &f, &g);
    string st(b);
    if(!st.compare("megalusion"))  continue;
    if(M.find(st)==M.end()) M[st] = 0;
    if(!check[st] && c == 4)  col++, wrong += M[st], check[st] = 1;
    else  M[st]++;
  }
  if(!col)  printf("0\n");
  else{
    res = (double) col / (col + wrong) * 100;
    printf("%.10lf\n", res);
  }
}
