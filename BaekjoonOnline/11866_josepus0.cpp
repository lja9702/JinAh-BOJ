#include <cstdio>
#include <queue>
using namespace std;

int main(){
	int i, n, m, count = 0;
	queue <int> Q;
	scanf("%d %d", &n, &m);
	for(i = 1;i <= n;i++)
		Q.push(i);
	printf("<");
	while(!Q.empty()){
		count++;
		int cnt = 0;
		while(++cnt != m){
			int temp = Q.front();
			Q.pop();
			Q.push(temp);
		}
		if(count < n)
			printf("%d, ", Q.front());
		else
			printf("%d>\n", Q.front());
		Q.pop();
	}
}