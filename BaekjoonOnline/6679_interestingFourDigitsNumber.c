#include <stdio.h>

int main(){
	int i;
	for(i = 1000;i <= 9999;i++){
		int ten = i, twel = i, six = i, t = 0, w = 0, s = 0;
		while(ten != 0)
			t += ten % 10, ten /= 10;
		while(twel != 0)
			w += twel % 12, twel /= 12;
		while(six != 0)
			s += six % 16, six /= 16;
		if(t == w && w == s)
			printf("%d\n", i);
	}
}