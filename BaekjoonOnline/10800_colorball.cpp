#include <cstdio>
#include <algorithm>
struct Info{
    int color, size, num;
    bool operator<(Info a) {
        if(this -> size == a.size)
            return this -> color < a.color;
        return this -> size < a.size;
    }
};
int sum[200001] = {0}, temp[200001] = {0}, res[200001] = {0}, nu[200001] = {0};
Info info[200001];
int main(){
    int n, color, size, siz[2001] = {0}, cnt = 0;
    scanf("%d", &n);
    info[0].size = 0, info[0].color = 0, info[0].num = 0;
    for(int i = 1;i <= n;i++){
        scanf("%d %d", &info[i].color, &info[i].size);
        info[i].num = i;
    }
    std::sort(info, info + n + 1);
    for(int i = 1;i <= n;i++){
		if(info[i].size == info[i-1].size && info[i].color == info[i-1].color)   cnt++;
		else  cnt=0;
		sum[i] = sum[i - 1] + info[i - 1].size;
		int cur = temp[info[i].color];
		res[info[i].num] = sum[i] + cnt * info[i].size - (nu[cur] + siz[info[i].size] * info[i].size);
		siz[info[i].size]++, temp[info[i].color] = i, nu[i] = nu[cur] + info[i].size;
    }
    for(int i = 1;i <= n;i++)	printf("%d\n", res[i]);
}