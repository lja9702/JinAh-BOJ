#include <cstdio>
#define MIN(a, b) (a > b ? b : a)
#include <cmath>
using namespace std;

int main(){
	int a, b, t, i, j;
	scanf("%d", &t);
	for(j = 0;j < t;j++){
		int temp, gcd = 1;
		scanf("%d %d", &a, &b);

		for(i = 1;i <= (MIN(a, b));i++){
			if(a % i == 0 && b % i == 0){
				gcd *= i;
				a /= i, b /= i;
			}
		}
		printf("%d\n", gcd * a * b);
	}

}