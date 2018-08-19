#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
	int i, j, t;
	scanf("%d", &t);
	for(i = 0;i < t;i++){
		int num[10] = {0}, cur, check = 0, size = 0;
		char arr[85] = {0};
		scanf("%s", arr);
		int len = strlen(arr);
		for(j = len - 1;j >= 0;j--){
			num[arr[j] - '0']++;
			if(j != len - 1 && arr[j] < arr[j + 1]){
				cur = j;
				check = 1;
				break;
			}
		}
		if(check == 0)
			printf("BIGGEST\n");
		else{
			int temp;
			for(j = arr[cur] - '0'+ 1;j <= 9;j++){
				if(num[j] != 0){
					temp = j, num[j]--;
					break;
				}
			}
			for(j = 0;j < cur;j++)
				printf("%c", arr[j]);
			printf("%d", temp);
			for(j = 0;j < 10;j++){
				while(num[j] != 0){
					printf("%d", j);
					num[j]--;
				}
			}
			printf("\n");
		}
	}
}