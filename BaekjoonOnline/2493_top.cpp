#include <cstdio>
#include <stack>

using namespace std;

int arr[500001] = {0};
int main(){
	int n, i, j, a;
	stack<int> S;
	scanf("%d", &n);
	arr[0] = 1 << 29, S.push(0);
	for(i = 1;i <= n;i++)
		scanf("%d", &arr[i]);

	for(i = 1;i <= n;i++){
		if(arr[S.top()] > arr[i]){
			printf("%d ", S.top());
		}
		else{
			while(!S.empty() && arr[S.top()] < arr[i])
				S.pop();
			printf("%d ", S.top());
		}
		S.push(i);
	}
	printf("\n");
}
