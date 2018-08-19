#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char album[25][10][100] = {{"1967", "DavidBowie"}, {"1969", "SpaceOddity"}, {"1970", "TheManWhoSoldTheWorld"}, 
	{"1971", "HunkyDory"}, {"1972", "TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars"},
	{"1973", "AladdinSane"}, {"1973", "PinUps"}, {"1974", "DiamondDogs"},
	{"1975", "YoungAmericans"}, {"1976", "StationToStation"}, {"1977", "Low"},
	{"1977", "Heroes"}, {"1979", "Lodger"}, {"1980", "ScaryMonstersAndSuperCreeps"},
	{"1983", "LetsDance"}, {"1984", "Tonight"}, {"1987", "NeverLetMeDown"},
	{"1993", "BlackTieWhiteNoise"}, {"1995", "1.Outside"}, {"1997", "Earthling"},
	{"1999", "Hours"}, {"2002", "Heathen"}, {"2003", "Reality"}, {"2013", "TheNextDay"}, 
	{"2016",  "BlackStar"}};
	int Q, S, E, i, j, cnt;
	scanf("%d", &Q);
	for(i = 0;i<Q;i++){
		int start = 0, finish = 25;
		scanf("%d %d", &S, &E);
		for(j = 0;j < 25;j++){
			if(atoi(album[j][0]) <= S){
				start = j+1;
				if(atoi(album[j][0]) == S){
					start = j;
					break;
				}
			}
		}
		for(j = 24;j >= start;j--){
			if(atoi(album[j][0]) >= E){
				finish = j-1;
				if(atoi(album[j][0]) == E){
					finish = j;
					break;
				}
			}
		}
		cnt = finish - start + 1;
		if(cnt < 0)
			cnt = 0;
		printf("%d\n", cnt);
		if(cnt != 0){
			for(j = start;j <= finish;j++){
				printf("%s %s\n", album[j], album[j][1]);
			}
		}
	}
}