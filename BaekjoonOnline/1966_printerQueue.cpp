#include <cstdio>
#include <queue>

using namespace std;
typedef struct _file{
	int idx;
	int order;
}File;
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		File file[101];
		queue <File> Q;
		int n, m, i, j, max = 0, cnt = 0;
		scanf("%d %d", &n, &m);
		for(i = 0;i < n;i++){
			scanf("%d", &file[i].order);
			file[i].idx = i;
			Q.push(file[i]);
			if(max < file[i].order)
				max = file[i].order;
		}
		while(!Q.empty()){
			int order = Q.front().order, idx = Q.front().idx;
			if(order < max){
				Q.pop();
				Q.push(file[idx]);
			}
			else{
				cnt++;
				if(idx == m){
					printf("%d\n", cnt);
					break;
				}
				file[idx].order = -1;
				Q.pop();
			}
			max = 0;
			for(i = 0;i < n;i++){
				if(max < file[i].order)
					max = file[i].order;
			}
		}
	}
}