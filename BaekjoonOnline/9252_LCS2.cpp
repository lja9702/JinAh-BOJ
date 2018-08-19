#include <cstdio>
#include <cstring>
#include <algorithm>
int arr[1001][1001] = {0};
int main(){
	char a[1001] = {0}, b[1001] = {0}, res[1001] = {0};
	scanf("%s %s", a, b);
	int lenA = strlen(a), lenB = strlen(b);
	for(int i = 0;i < lenB;i++){
		for(int j = 0;j < lenA;j++){
			if(b[i] == a[j])
				arr[i + 1][j + 1] = arr[i][j] + 1;
			else	arr[i + 1][j + 1] = std::max(arr[i][j + 1], arr[i + 1][j]);
		}
	}
	int cnt = arr[lenB][lenA], cur = lenA;
	for(int i = lenB;i > 0;i--){
		int j = cur;
		if(!arr[i][j])	break;
		while(arr[i][j] == cnt)	j--;
		if(b[i - 1] == a[j])
			res[cnt - 1] = a[j], cur = j + 1, cnt--;
	}
	printf("%d\n%s\n", arr[lenB][lenA],res);
}