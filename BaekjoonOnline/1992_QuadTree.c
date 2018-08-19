#include <cstdio>
char res[100000] = {0}, arr[66][66] = {0};
int n, cnt = 0;
void quad(int x, int y, int size){
	bool flag = true;
	for(int i = x;i < x + size;i++){
		for(int j = y;j < y + size;j++){
			if(arr[i][j] != arr[x][y]){
				flag = false;
				break;
			}
		}
	}
	if(flag){
		printf("%c", arr[x][y]);
		return;
	}
	else{
		printf("(");
		quad(x, y, size / 2);
		quad(x, y + size / 2, size / 2);
		quad(x + size / 2, y, size / 2);
		quad(x + size / 2, y + size / 2, size / 2);
		printf(")");
	}
 }
int main(){
	scanf("%d", &n);
	for(int i = 0;i < n;i++)
		scanf("%s", arr[i]);
	quad(0, 0, n);
}