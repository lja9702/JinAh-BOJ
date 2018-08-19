#include <cstdio>
#include <cstring>
#include <algorithm>
int arr[1001][1001] = {0};
int main(){
	char a[1001] = {0}, b[1001] = {0};
	scanf("%s %s", a, b);
	int lenA = strlen(a), lenB = strlen(b);
	for(int i = 0;i < lenB;i++){
		for(int j = 0;j < lenA;j++){
			if(b[i] == a[j])	arr[i + 1][j + 1] = arr[i][j] + 1;
			else	arr[i + 1][j + 1] = std::max(arr[i][j + 1], arr[i + 1][j]);
		}
	}
	printf("%d\n", arr[lenB][lenA]);
}