#include <cstdio>
#include <set>
using namespace std;
int num;
int main(){
  scanf("%d", &num);
  set<int> S;
  while(1){
    int temp = num, sum = 0;
    while(temp){
      sum += (temp % 10) * (temp % 10);
      temp /= 10;
    }
    if(sum == 1){
      printf("HAPPY\n");
      return 0;
    }
    if(S.find(sum) == S.end()){
      S.insert(sum);
      num = sum;
    }
    else{
      printf("UNHAPPY\n");
      return 0;
    }
  }
}
