#include <stdio.h>

int main(){
	int i, j, k, t;
	scanf("%d", &t);
	for(i = 0;i < t;i++){
		int check = 1;
		double x = 0, y = 0, arr[4][2] = {0};
		for(j = 0;j < 4;j++){
			scanf("%lf %lf", &arr[j][0], &arr[j][1]);
			x += arr[j][0], y += arr[j][1];
		}

		x /= 4, y /= 4;
		double temp[4][2] = {0}, temp2[4][2] = {0}, temp3[4][2] = {0};
		for(j = 0;j < 4;j++){
			if(arr[j][0] < x && arr[j][1] <= y)
				temp[0][0] = arr[j][0], temp[0][1] = arr[j][1];
			else if(arr[j][0] >= x && arr[j][1] < y)
				temp[1][0] = arr[j][0], temp[1][1] = arr[j][1];
			else if(arr[j][0] > x && arr[j][1] >= y)
				temp[2][0] = arr[j][0], temp[2][1] = arr[j][1];
			else if(arr[j][0] <= x && arr[j][1] > y)
				temp[3][0] = arr[j][0], temp[3][1] = arr[j][1];
		}
		for(j = 0;j < 4;j++){
			int te = j - 1;
			if(te == -1)	
				te = 3;
			temp2[j][0] = temp[te][0] - temp[j][0], temp2[j][1] = temp[te][1] - temp[j][1];
			temp3[j][0] = temp[j][0] - x, temp3[j][1] = temp[j][1] - y;
		}
		double a, b;
		for(j = 0;j < 4;j++){
			int te = j + 1;
			if(te == 4)	
				te = 0;
			a = (temp2[j][0] * temp2[te][0]) + (temp2[j][1] * temp2[te][1]);
			b = (temp3[j][0] * temp3[te][0]) + (temp3[j][1] * temp3[te][1]);
			if(a != 0 || b != 0)	check = 0;
		}
		printf("%d\n", check);
	}
}	