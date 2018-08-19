#include <cstdio>
#include <stack>
using namespace std;

int main(){
	int n, p, i, j, a, b, cnt = 0;
	scanf("%d %d", &n, &p);
	stack <int> S[7];
	for(i = 0;i < n;i++){
		scanf("%d %d", &a, &b);
		if(S[a].empty() || S[a].top() < b)
			S[a].push(b), cnt++;

		else if(S[a].top() > b){
			while(!S[a].empty() && S[a].top() > b)
				S[a].pop(), cnt++;
			if(S[a].empty() || S[a].top() != b)
				S[a].push(b),cnt++;
		}
	}
	printf("%d\n", cnt);
}