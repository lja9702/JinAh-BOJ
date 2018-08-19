#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;
int main(){
	int t, i, j, n;
	scanf("%d", &t);
	while(t--){
		bool check = true, Rch = false;
		char *result;
		int num[100001] = {0}, cnt = 0, fr = 0;
		char input[100001] = {0}, arr[410000] = {0};
		scanf("%s", input), scanf("%d", &n), scanf("%s", arr);
		result = strtok(arr, "[],");
		while(result != NULL){
			num[cnt++] = atoi(result);
			result = strtok(NULL, "[],");
		}
		int len = strlen(input);
		for(i = 0;i < len;i++){
			if(input[i] == 'R'){
				if(Rch == true)	Rch = false;
				else	Rch = true;
			}
			else if(input[i] == 'D'){
				if(fr > n - 1){
					printf("error\n");
					check = false;
					break;
				}
				else{
					if(Rch == true)
						n--;
					else
						fr++;
				}
			}
		}
		if(check && !Rch){
			printf("[");
			for(i = fr;i < n - 1;i++)
				printf("%d,", num[i]);
			if(fr < n)
				printf("%d", num[n - 1]);
			printf("]\n");
		}
		else if(check && Rch){
			printf("[");
			for(i = n - 1;i > fr;i--)
				printf("%d,", num[i]);
			if(fr < n)
				printf("%d", num[fr]);
			printf("]\n");
		}
	}
}