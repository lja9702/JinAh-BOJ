#include <cstdio>
#include <cstring>
long long gcd(long long big, long long small){
    if(small == 0)  return big;
    else    gcd(small, big % small);
}
int main(){
    long long a, t, n, i, j, temp;
    scanf("%lld", &t);
    while(t--){
    	long long arr[101] = {0}, max = 0, sum = 0;
        scanf("%d", &n);
    	for(i = 0;i < n;i++)
    		scanf("%lld", &arr[i]);
    	for(i = 0;i < n - 1;i++){
    		for(j = i + 1;j < n;j++){
    			temp = gcd(arr[i], arr[j]);
                sum += temp;
    		}
    	}
	    printf("%lld\n", sum);
	 }
}