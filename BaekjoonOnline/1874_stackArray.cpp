#include <cstdio>
#include <stack>
using namespace std;

int arr[100001] = {0};
int main(){
	stack <int> S;
	int max = 0, i, n, cnt = 0, temp1 = 0, temp2 = 0, check = 0;
	scanf("%d", &n);
	for(i = 0;i < n;i++){
		scanf("%d", &arr[i]);
		if(arr[i] == n)
			check = 1;

		if(check == 0 && max < arr[i]){
			max = arr[i];
			temp1++;
		}
		else if(check == 0 && max != arr[i] && arr[i - 1] > arr[i])
			temp1++;
		else if(check == 1 && arr[i - 1] > arr[i])
			temp2++;
	}

	if(temp1 + temp2 != n - 1){
		printf("NO\n");
		return 0;
	}

	for(i = 1;i <= n;i++){
		if(S.empty() || S.top() != arr[cnt]){
			S.push(i);
			printf("+\n");
		}
		while(!S.empty() && arr[cnt] == S.top()){
			S.pop();
			printf("-\n");
			cnt++;
		}
	}
}