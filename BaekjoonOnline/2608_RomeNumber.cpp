#include <cstdio>
#include <cstring>
char alpha[4][2] = {{'I', 'V'}, {'X', 'L'}, {'C', 'D'}, {'M', }};
int num[4][2] = {{1, 5}, {10, 50}, {100, 500}, {1000, }};
int check(char str[], int len, int sum){
	for(int i = 0;i < len;i++){
		if(i != len - 1){
			bool flag = false;
			if(str[i] == 'I' && str[i + 1] == 'V')
				sum += 4, flag = true;
			else if(str[i] == 'I' && str[i + 1] == 'X')
				sum += 9, flag = true;
			else if(str[i] == 'X' && str[i + 1] == 'L')
				sum += 40, flag = true;
			else if(str[i] == 'X' && str[i + 1] == 'C')
				sum += 90, flag = true;
			else if(str[i] == 'C' && str[i + 1] == 'D')
				sum += 400, flag = true;
			else if(str[i] == 'C' && str[i + 1] == 'M')
				sum += 900, flag = true;
			if(flag)	{
				i++; continue;
			}
		}
		for(int j = 0;j < 4;j++){
			for(int k = 0;k < 2;k++){
				if(alpha[j][k] == str[i]){
					sum += num[j][k]; break;
				}
			}
		}
	}
	return sum;
}
void chan(int num){
	int i, j, dig = 1, cnt = 0, tp = num, cur = 0;
	char res[50] = {0};
	while(tp /= 10)
		dig *= 10, cnt++;
	while(cnt > -1){
		int temp = num / dig;
		if(temp <= 3){
			for(i = 0;i < temp;i++)
				res[cur++] = alpha[cnt][0];
		}
		else if(temp == 4){
			if(dig == 1)	res[cur++] = 'I', res[cur++] = 'V';
			else if(dig == 10)	res[cur++] = 'X', res[cur++] = 'L';
			else if(dig == 100)	res[cur++] = 'C', res[cur++] = 'D';
		}
		else if(temp > 4 && temp < 9){
			res[cur++] = alpha[cnt][1];
			for(i = 0;i < temp - 5;i++)
				res[cur++] = alpha[cnt][0];
		}
		else{
			if(dig == 1)	res[cur++] = 'I', res[cur++] = 'X';
			else if(dig == 10)	res[cur++] = 'X', res[cur++] = 'C';
			else if(dig == 100)	res[cur++] = 'C', res[cur++] = 'M';
		}
		cnt--, num %= dig, dig /= 10;
	}
	printf("%s\n", res);
}

int main(){
	char fr[50] = {0}, se[50] = {0};
	scanf("%s %s", fr, se);
	int i, j, sumF = 0, sumS = 0, res;
	sumF = check(fr, strlen(fr), sumF);
	sumS = check(se, strlen(se), sumS);
	res = sumF + sumS;
	printf("%d\n", res);
	chan(res);
}