#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;
long long arr[100001] = {0};
int main(){
	long long n, i;
	scanf("%lld", &n);
	for(i = 0;i < n;i++)
		scanf("%lld", &arr[i]);
	sort(arr, arr + n);
	long long z = 1, y = n - 1, minX = 0, minY = n - 1, minZ = 1;
	long long min = abs(arr[0] + arr[1] + arr[n - 1]);
	for(i = 0;i < y - 1;i++){
		z = i + 1, y = n - 1;
		while(y != z){
			if(abs(arr[i] + arr[z] + arr[y]) < min){
				min = abs(arr[i] + arr[z] + arr[y]);
				minX = i, minY = y, minZ = z;
			}
			else if(abs(arr[i] + arr[z + 1] + arr[y]) <= abs(arr[i] + arr[z] + arr[y - 1]))
				z++;
			else
				y--;
		}
	}
	printf("%lld %lld %lld\n", arr[minX], arr[minZ], arr[minY]);
}

//투포인터인데 기준을 어디로 잡는가가 관건
//하나를 고정시키고 나머지 두개를 꾸물꾸물해서 i를 돌린다.