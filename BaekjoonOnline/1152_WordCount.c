#include <cstdio>
#include <cstring>

int main(){
	char input[1000001];
	fgets(input, 1000001, stdin);
	char* ptr = strtok(input, " \r\n");
	int cnt = 0;
	while(ptr != NULL){
		cnt++;
		ptr = strtok(NULL, " \r\n");
	}
	printf("%d\n", cnt);
}
