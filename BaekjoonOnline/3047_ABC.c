#include <stdio.h>

int main(){
	int p, q, r, arr[3] = {0};
	char alpha[4] = {0};
	scanf("%d %d %d", &p, &q, &r);
	scanf("%s", &alpha);
	if(p < q && q < r)	arr[0] = p, arr[1] = q, arr[2] = r;
	else if(p < r && r < q)	arr[0] = p, arr[1] = r, arr[2] = q;
	else if(q < p && p < r)	arr[0] = q, arr[1] = p, arr[2] = r;
	else if(q < r && r < p)	arr[0] = q, arr[1] = r, arr[2] = p;
	else if(r < p && p < q)	arr[0] = r, arr[1] = p, arr[2] = q;
	else if(r < q && q < p)	arr[0] = r, arr[1] = q, arr[2] = p;
	printf("%d %d %d\n", arr[alpha[0]-'A'], arr[alpha[1]-'A'], arr[alpha[2]-'A']);
}