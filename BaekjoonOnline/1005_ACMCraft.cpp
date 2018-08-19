#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;

typedef struct _node{
	int tim;
	int indeg;
	int check;
	int max_prev_tim;
}Node;
int arr[1001][1001] = {0};
int main(){
	int i, j, t, n, k, w;
	Node node[1001];
	scanf("%d", &t);
	for(i = 0;i < t;i++){
		int cnt = 0, fin = 0;
		queue <int> Q;
		memset(node, 0, sizeof(node));
		memset(arr, 0, sizeof(arr));
		scanf("%d %d", &n, &k);

		for(j = 1;j <= n;j++)
			scanf("%d", &node[j].tim);
		
		for(j = 0;j < k;j++){
			int a, b;
			scanf("%d %d", &a, &b);
			arr[a][b] = 1;
			node[b].indeg++;
		}
		
		scanf("%d", &w);
		
		while(cnt <= n){
			for(j = 1;j <= n;j++){
				if(node[j].indeg == 0 && node[j].check == 0){
					node[j].check = 1;
					node[j].tim += node[j].max_prev_tim;
					
					if(j == w){
						fin = 1;
						break;
					}
					Q.push(j);
					cnt++;
				}
			}
			
			while(!Q.empty()){
				int temp = Q.front();
				Q.pop();
				for(j = 1;j <= n;j++){
					if(arr[temp][j] == 1 && node[j].check == 0){
						node[j].indeg--;
						if(node[j].max_prev_tim < node[temp].tim)
							node[j].max_prev_tim = node[temp].tim;
					}
				}
			}
			
			if(fin == 1){
				printf("%d\n", node[w].tim);
				break;
			}
		}
	}
}