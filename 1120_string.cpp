#include <cstdio>
#include <cstring>

int main(){
	char a[55] = {0}, b[55] = {0};
	scanf("%s %s", a, b);
	int i, j, lenA = strlen(a), lenB = strlen(b), min = 1 << 29;

	for(i = 0;i <= lenB - lenA;i++){
		int temp = 0;
		for(j = i;j < i + lenA;j++){
			if(a[j - i] != b[j])	temp++;
		}
		if(temp < min)	min = temp;
	}
	printf("%d\n", min);
}