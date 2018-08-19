#include <cstdio>
int arr[2200][2200] = {0}, cnt[3] = {0};
void paper(int stX, int stY, int n){
	bool check = true;
	int i, j;
	for(i = stX;i < stX + n;i++){
		for(j = stY;j < stY + n;j++){
			if(arr[stX][stY] != arr[i][j]){
				check = false;
				break;
			}
		}
	}
	if(check){
		cnt[arr[stX][stY] + 1]++;
		return;
	}
	paper(stX, stY, n / 3);
	paper(stX, stY + n / 3, n / 3);
	paper(stX, stY + n / 3 * 2, n / 3);

	paper(stX + n / 3, stY, n / 3);
	paper(stX + n / 3, stY + n / 3, n / 3);
	paper(stX + n / 3, stY + n / 3 * 2, n / 3);

	paper(stX + n / 3 * 2, stY, n / 3);
	paper(stX + n / 3 * 2, stY + n / 3, n / 3);
	paper(stX + n / 3 * 2, stY + n / 3 * 2, n / 3);
}
int main(){
	int n, i, j;
	scanf("%d", &n);
	for(i = 1;i <= n;i++)
		for(j = 1;j <= n;j++)
			scanf("%d", &arr[i][j]);
	paper(1, 1, n);
	printf("%d\n%d\n%d\n", cnt[0], cnt[1], cnt[2]);
}