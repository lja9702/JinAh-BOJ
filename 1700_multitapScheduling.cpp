#include <cstdio>
int arr[1001][1001] = {0};
int dist[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
int main(){
    int c, r, k, cnt = 1;
    scanf("%d %d %d", &c, &r, &k);
    if(k > r * c){
        printf("0\n");
        return 0;
    }
    while(cnt <= r * c){

    }
}