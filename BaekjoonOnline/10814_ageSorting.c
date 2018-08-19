#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct infor{
	int idx;
	int age;
	char name[101];
}infor;
int compare(const void* a, const void* b){
	infor *ptrA, *ptrB;
	ptrA = (infor*) a, ptrB = (infor*) b;
	if(ptrA -> age > ptrB -> age)
		return 1;
	else if(ptrA -> age < ptrB -> age)
		return -1;
	else
		return (ptrA -> idx > ptrB -> idx ? 1 : (ptrA -> idx < ptrB -> idx ? -1 : 0));
		
}
int main(){
	int n, i;
	scanf("%d", &n);
	infor infor[n];
	for(i = 0;i< n;i++){
		scanf("%d %s", &infor[i].age, &infor[i].name);
		infor[i].idx = i;
	}
	qsort(infor, n, sizeof(infor[0]), compare);
	for(i = 0;i< n;i++)
		printf("%d %s\n", infor[i].age, infor[i].name);
}