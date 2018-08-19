#include <stdio.h>

int main(){
	int bugger[3], drink[2];
	int i;

	for(i = 0;i<3;i++)
		scanf("%d", &bugger[i]);
	
	for(i = 0;i<2;i++)
		scanf("%d", &drink[i]);
	int cheapBugger = bugger[0];
	int cheapDrink = drink[0];
	
	for(i = 1;i<3;i++){
		if(cheapBugger > bugger[i])
			cheapBugger = bugger[i];
	}
	if(cheapDrink> drink[1])
		cheapDrink = drink[1];

	printf("%d\n", cheapBugger+cheapDrink-50);
	return 0;
}