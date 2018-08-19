#include <cstdio>
#include <cstdlib>
long long heap[100001][2] = {0};
int main(){
	int t, i, j, top = -1;
	scanf("%d", &t);
	while(t--){
		long long input, min = 0;
		scanf("%lld", &input);
		if(input){
			heap[++top][0] = input, heap[top][1] = abs(input);
		}
		else{
			if(top == -1)
				printf("0\n");
			else{
				for(i = 0;i <= top;i++){
					if((heap[min][1] > heap[i][1]) || (heap[min][1] == heap[i][1] && heap[min][0] > heap[i][0]))
						min = i;
				}
				printf("%lld\n", heap[min][0]);
				for(i = min;i < top;i++)
					heap[i][0] = heap[i + 1][0], heap[i][1] = heap[i + 1][1];
				top--;
			}
		}
	}
}