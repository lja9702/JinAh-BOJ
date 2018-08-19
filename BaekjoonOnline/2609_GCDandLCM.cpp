#include <cstdio>
 
int gcd(int big, int small){
    if(small == 0)  return big;
    else    gcd(small, big % small);
}
int main(){
    int a, b, m, n;
    scanf("%d %d", &a, &b);
    m = gcd(b, a);
    n = m * (a / m) * (b / m);
    printf("%d\n%d\n", m, n);
}