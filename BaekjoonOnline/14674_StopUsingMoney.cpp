#include <cstdio>
#include <algorithm>
struct Info{
	long long i, c, h;
	bool operator<(Info a){
		long long t1 = this->h * a.c, t2 = a.h * this->c;
		if(t1 > t2)	return 1;
		else if(t1 < t2)	return 0;
		else{
			if(this->c < a.c)	return 1;
			else if(this->c > a.c)	return 0;
			else return this->i < a.i;
		}
	}
};

Info list[1001];
int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	for(int i = 0;i < n;i++)
		scanf("%lld %lld %lld", &list[i].i, &list[i].c, &list[i].h);
	std::sort(list, list + n);
	for(int i = 0;i < k;i++)
		printf("%lld\n", list[i].i);
}