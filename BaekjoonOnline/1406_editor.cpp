#include <cstdio>
#include <cstring>
#include <list>

using namespace std;
char arr[100001] = {0};
int main(){
	int n, i;
	list <char> lt;
	scanf("%s %d", arr, &n);
	getchar();
	int len = strlen(arr);

	for(i = 0;i < len;i++)
		lt.push_back(arr[i]);

	list<char>::iterator cur = lt.end();

	for(i = 0;i < n;i++){
		char in[10] = {0}, put;
		fgets(in, 10, stdin);
		if(in[0] == 'L' && cur != lt.begin())
			cur--;
		else if(in[0] == 'D' && cur != lt.end())
			cur++;
		else if(in[0] == 'B' && cur != lt.begin())
			cur = lt.erase(--cur);
		else if(in[0] == 'P'){
			put = in[2];
			lt.insert(cur, put);
		}
	}
	for(cur = lt.begin();cur != lt.end();cur++)
		printf("%c", *cur);
	printf("\n");
}
