#include <cstdio>
#include <vector>

long sum(std::vector<int> &a){
  long res = 0;
  for(int i = 0;i < a.size();i++)
    res += a[i];
  return res;
}
