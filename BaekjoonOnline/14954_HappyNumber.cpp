#include <cstdio>
#include <map>

using namespace std;
int main(){
	bool check = false;
	int n;
	scanf("%d", &n);
	map <int, int> M;
	while(M[n] != 1){
		int sum = 0;
		M[n] = 1;
		while(n != 0){
			sum += ((n % 10) * (n % 10));
			n /= 10;
		}
		n = sum;
		if(n == 1){
			check = true;
			break;
		}
	}
	if(check)	printf("HAPPY\n");
	else	printf("UNHAPPY\n");
}