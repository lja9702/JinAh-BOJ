#include <cstdio>
#include <algorithm>
struct Info{
	int s, c, l, num;
	bool operator<(Info a){
		if(this->s > a.s)	return 1;
		else if(this->s < a.s)	return 0;
		else{
			if(this->c < a.c)	return 1;
			else if(this->c > a.c)	return 0;
			else{
				if(this->l < a.l)	return 1;
				else	return 0;
			}
		}
	}
};
Info Info[3];
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0;i < n;i++){
		Info[i].num = i + 1;
		scanf("%d %d %d", &Info[i].s, &Info[i].c, &Info[i].l);
	}
	std::sort(Info, Info + n);
	printf("%d\n", Info[0].num);
}