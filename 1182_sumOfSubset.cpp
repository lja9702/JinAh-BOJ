#include <cstdio>
int cnt = 0, n, s, arr[30] = {0};
void dfs(int i, int sum, int flag){
    //printf("%d, %d\n", i, sum);
    if(sum == s && flag)
        cnt++;
    if(i == n)   return;
    dfs(i + 1, sum, 0);
    dfs(i + 1, sum + arr[i], 1);
}
int main(){
    scanf("%d %d", &n, &s);
    for(int i = 0;i < n;i++)
        scanf("%d", &arr[i]);
    dfs(0, 0, 0);
    printf("%d\n", cnt);
}