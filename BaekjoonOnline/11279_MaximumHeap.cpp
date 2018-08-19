#include <cstdio>
long long heap[100001] = {0};
int main(){
	int t, i, j, top = -1;
	scanf("%d", &t);
	while(t--){
		long long input, max = 0;
		scanf("%lld", &input);
		if(input)
			heap[++top] = input;
		else{
			if(top == -1)
				printf("0\n");
			else{
				for(i = 0;i <= top;i++){
					if(heap[max] < heap[i])
						max = i;
				}
				printf("%lld\n", heap[max]);
				for(i = max;i < top;i++)
					heap[i] = heap[i + 1];
				top--;
			}
		}
	}
}