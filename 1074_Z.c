#include <stdio.h>
#include <stdlib.h>
int cnt = 0, temp = 0;
void Z(int size, int r, int c, int tarR, int tarC){
	int i, j;
	if(r <= tarR && tarR < r + size && c <= tarC && tarC < c + size){
		if(size * size == 4){
			for(i = r;i < r + size;i++){
				for(j = c;j < c + size;j++){
					if(temp != 0)
						return;
					if(i == tarR && j == tarC){
						temp = cnt;
						return;
					}
					cnt++;
				}
			}
		}
		else{
			Z(size / 2, r, c, tarR, tarC);
			Z(size / 2, r, c + size / 2, tarR, tarC);
			Z(size / 2, r + size / 2, c, tarR, tarC);
			Z(size / 2, r + size / 2, c + size / 2, tarR, tarC);
		}
	}
	else
		cnt += (size * size);
}
int main(){
	int n, r, c, i, j, size = 1;
	scanf("%d %d %d", &n, &r, &c);
	for(i = 1;i <= n;i++)
		size *= 2;
	Z(size, 0, 0, r, c);
	printf("%d\n", temp);
}