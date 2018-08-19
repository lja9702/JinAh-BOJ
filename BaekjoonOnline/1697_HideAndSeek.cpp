#include <cstdio>
#include <queue>
using namespace std;
typedef struct node{
	int pos;
	int cnt;
}node;

int main(){
	int i, n, k, check[100001] = {0}, ins[2] = {-1, 1};
	queue<node> queue;
	scanf("%d %d", &n, &k);
	node first;
	first.pos = n, first.cnt = 0, check[first.pos] = 1;
	queue.push(first);
	while(!queue.empty()){
		node fr = queue.front();
		if(fr.pos == k){
			printf("%d\n", fr.cnt);
			break;
		}
		node temp[3];
		for(i = 0;i < 3;i++){
			if(i == 2)
				temp[i].pos = fr.pos * 2; 
			else
				temp[i].pos = fr.pos + ins[i];
			temp[i].cnt = fr.cnt + 1;
			if(temp[i].pos <= 100000 && temp[i].pos >= 0 && check[temp[i].pos] == 0){
				queue.push(temp[i]);
				check[temp[i].pos] = 1;
			}
		}
		queue.pop();
	}
}
