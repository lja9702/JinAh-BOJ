#include <cstdio>
#include <cmath>
int gcd(int a, int b){
	return (a % b == 0 ? b : gcd(b, a % b));
}
bool prime(int n) {	//소수인지 아닌지 체크
	for(int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0)
			return false;
	}
	return true;
}
int main(){
	int n, k;
	while(scanf("%d %d", &n, &k) != EOF){
		int res = 1;
		if(n >= k){
			printf("%d\n", k);
			continue;
		}
		for(int i = n;i >= 2;i--){
			if(prime(k) && i < k)	break;
			if(i == k){
				res *= k;
				break;
			}
			int temp = gcd(i, k);
			if(temp != 1){
				res *= temp;
				k /= temp;
			}
		}
		printf("%d\n", res);
	}
}

//n과 k의 공약수로 k를 나눈다.
//n은 1을 감소시키며 계속 공약수를 구해서 결과값에 공약수들의 곱을 저장한다
//만약 n의 값이 k보다 작아지고 k가 소수일 경우에는 곱하지 않고 결과값을 출력한다.