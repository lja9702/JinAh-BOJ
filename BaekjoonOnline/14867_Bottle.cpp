#include <cstdio>
#include <queue>
#include <utility>
#include <map>
using namespace std;
typedef pair<int, int> pii;
typedef pair<pii, int> ppi;
queue<ppi> Q;
map<pii, int> M;

ppi mp(int a, int b, int c){
  return ppi(pii(a,b),c);
}

int main(){
	int a, b, c, d, i, j;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	Q.push(mp(0, 0, 0)), M[pii(0, 0)] = 1;
	while(!Q.empty()){
		int frnA = Q.front().first.first, frnB = Q.front().first.second, 
		cnt = Q.front().second;
		Q.pop();
		if(frnA == c && frnB == d){
			printf("%d\n", cnt);
			return 0;
		}
		if(!M[pii(a, frnB)])
			Q.push(mp(a, frnB, cnt + 1)), M[pii(a, frnB)] = 1;
		if(!M[pii(frnA, b)])	
			Q.push(mp(frnA, b, cnt + 1)), M[pii(frnA, b)] = 1;
		if(!M[pii(0, frnB)])
			Q.push(mp(0, frnB, cnt + 1)), M[pii(0, frnB)] = 1;
		if(!M[pii(frnA, 0)])
			Q.push(mp(frnA, 0, cnt + 1)), M[pii(frnA, 0)] = 1;
		if(frnA <= b - frnB && !M[pii(0, frnB + frnA)])
			Q.push(mp(0, frnB + frnA, cnt + 1)), M[pii(0, frnB + frnA)] = 1;
		else if(frnA > b - frnB && !M[pii(frnA - (b - frnB), b)])
			Q.push(mp(frnA - (b - frnB), b, cnt + 1)), M[pii(frnA - (b - frnB), b)] = 1;
		if(frnB <= a - frnA && !M[pii(frnB + frnA, 0)])
			Q.push(mp(frnB + frnA, 0, cnt + 1)), M[pii(frnB + frnA, 0)] = 1;
		else if(frnB > a - frnA && !M[pii(a, frnB - (a - frnA))])
			Q.push(mp(a, frnB - (a - frnA), cnt + 1)), M[pii(a, frnB - (a - frnA))] = 1;
	}
	printf("-1\n");
}

//BFS와 맵, 페어를 이용해서 풀면된다.
//만약 맵에 저장되어있는 값이면 Q에 push를 하지않는다. 
//값을 찾으면 바로 출력을하고 return을 시키고 큐가 비었을때는 -1을 출력한다.