#include <cstdio>
#include <cstring>
#include <cstdlib>
int gcd(int big, int small){
    if(small == 0)  return big;
    else    gcd(small, big % small);
}
int main(){
    int a, t, i, j;
    scanf("%d", &t);
    getchar();
    while(t--){
    	char str[1000] = {0}, *res;
    	int n = 0, arr[101] = {0}, max = 0;
    	gets(str);
    	res = strtok(str, " ");
    	while(res != NULL){
    		arr[n++] = atoi(res);
    		res = strtok(NULL, " ");
    	}
    	for(i = 0;i < n - 1;i++){
    		for(j = i + 1;j < n;j++){
    			int temp = gcd(arr[i], arr[j]);
    			if(max < temp)	max = temp;
    		}
    	}
	   printf("%d\n", max);
	 }
}