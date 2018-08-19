#include <cstdio>
using namespace std;
int main(){
	int t, n;
	scanf("%d", &t);
	while(t--){
		int cnt = 0, arr[65] = {0};
		scanf("%d", &n);
		while(n){
			arr[cnt++] = n % 2;
			n /= 2;
		}
		for(int i = 0;i < cnt;i++)
			if(arr[i])	printf("%d ", i);
	}
}
