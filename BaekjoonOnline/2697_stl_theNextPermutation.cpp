#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	int t, i;
	scanf("%d", &t);
	for(i = 0;i < t;i++){
		char arr[81] = {0};
		scanf("%s", arr);
		int n = strlen(arr);
		if (next_permutation(arr, arr + n))
			puts(arr);
		else puts("BIGGEST");
	}
}