#include <cstdio>
#include <cstring>
int main(){
	int i;
	char arr[101] = {0};
	scanf("%s", arr);
	for(i = 0;i < strlen(arr);i++){
		if(arr[i] >= 'a' && arr[i] <= 'z')
			printf("%c", arr[i] - 'a' + 'A');
		else
			printf("%c", arr[i] - 'A' + 'a');
	}
	printf("\n");
}