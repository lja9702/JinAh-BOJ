#include <stdio.h>
#include <string.h>

int main(){
	int i, list[26] = {0, }, check = 0;
	char word[1000001];
	scanf("%s", &word);
	for(i = 0;i < strlen(word);i++){
		if(word[i] >= 'A' && word[i] <= 'Z')
			list[word[i] - 'A']++;
		else if(word[i] >= 'a' && word[i] <= 'z')
			list[word[i] - 'a']++;
	}
	int max = 0;
	for(i = 1;i<26;i++){
		if(list[max] < list[i]){
			max = i;
			check = 0;
		}
		else if(list[max] == list[i])
			check++;
	}
	if(check == 0)
		printf("%c\n", max + 'A');
	else
		printf("?\n");

}