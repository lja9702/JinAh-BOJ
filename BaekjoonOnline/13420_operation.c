#include <stdio.h>

int main(){
	int t, i;
	long long a, b, c;
	scanf("%d", &t);
	for(i = 0;i < t;i++){
		char oper, equ;
		scanf("%lld %c %lld %c %lld", &a, &oper, &b, &equ, &c);
		switch(oper){
			case '+':
				if(a + b == c)	printf("correct\n");
				else	printf("wrong answer\n");
				break;
			case '-':
				if(a - b == c)	printf("correct\n");
				else	printf("wrong answer\n");
				break;
			case '*':
				if(a * b == c)	printf("correct\n");
				else	printf("wrong answer\n");
				break;
			case '/':
				if(a / b == c)	printf("correct\n");
				else	printf("wrong answer\n");
				break;
			default:
				break;			
		}
	}
}