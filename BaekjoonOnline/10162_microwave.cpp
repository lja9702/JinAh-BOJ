#include <cstdio>

using namespace std;

int main(){
	int i, t, tim[3] = {300, 60, 10}, cnt[3] = {0};

	scanf("%d", &t);
	if(t % 10 != 0){
		printf("-1\n");
		return 0;
	}
	for(i = 0;i < 3;i++){
		cnt[i] = t / tim[i];
		t -= (cnt[i] * tim[i]);
	}
	printf("%d %d %d", cnt[0], cnt[1], cnt[2]);
}