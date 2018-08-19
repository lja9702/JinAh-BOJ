#include <cstdio>
char arr[65][65];
int n;
void quadTree(int x, int y, int size){
  char temp = arr[x][y];
  bool flag = 0;
  for(int i = x;i < x + size;i++){
    for(int j = y;j < y + size;j++){
      if(temp != arr[i][j]) flag = 1;
    }
  }
  if(flag){
    printf("(");
    quadTree(x, y, size / 2);
    quadTree(x, y + size / 2, size / 2);
    quadTree(x + size / 2, y, size / 2);
    quadTree(x + size / 2, y + size / 2, size / 2);
    printf(")");
  }
  else   printf("%c", temp);
}
int main(){
  scanf("%d", &n);
  for(int i = 0;i < n;i++)  scanf(" %s", arr[i]);
  quadTree(0, 0, n);
  printf("\n");
}
