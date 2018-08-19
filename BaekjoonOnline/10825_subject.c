#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct infor{
	char name[11];
	int korean, english, math;
}infor;

int compare(const void* a, const void* b){
	infor *ptrA, *ptrB;
	ptrA = (infor*) a, ptrB = (infor*) b;
	if(ptrA -> korean < ptrB -> korean)
		return 1;
	else if(ptrA -> korean > ptrB -> korean)
		return -1;
	else{
		if(ptrA -> english > ptrB -> english)
			return 1;
		else if(ptrA -> english < ptrB -> english)
			return -1;
		else{
			if(ptrA -> math < ptrB -> math)
				return 1;
			else if(ptrA -> math > ptrB -> math)
				return -1;
			else
				return strcmp(ptrA -> name, ptrB -> name);
		}
	}
}

int main(){
	int n, i;
	scanf("%d", &n);
	infor infor[n];
	for(i = 0;i < n;i++)
		scanf("%s %d %d %d", infor[i].name, &infor[i].korean, &infor[i].english, &infor[i].math);
	qsort(infor, n, sizeof(infor[0]), compare);
	for(i = 0;i < n;i++)
		printf("%s\n", infor[i].name);
}