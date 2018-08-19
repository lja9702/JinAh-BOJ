#include <cstdio>
using namespace std;
int main(){
    int arr[21] = {0}, a, b;
    for(int i = 1;i <= 20;i++)  arr[i] = i;
    	for(int i = 0;i < 10;i++){
    		scanf("%d %d", &a, &b);
    		int temp[21] = {0};
    		for(int i = a;i <= b;i++)	temp[i] = arr[b - i + a];
    		for(int i = a;i <= b;i++)	arr[i] = temp[i];
    	}
    	for(int i = 1;i <= 20;i++)	printf("%d ", arr[i]);
    	printf("\n");
}