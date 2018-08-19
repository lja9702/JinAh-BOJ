#include <cstdio>
#include <cstring>
int main(){
	char a[1010] = {0}, b[1010] = {0};
	scanf("%s %s", a, b);
	if(strlen(a) >= strlen(b))	printf("go\n");
	else	printf("no\n");
}