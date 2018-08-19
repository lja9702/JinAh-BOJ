#include <cstdio>
#include <stack>
#include <cstring>
using namespace std;
int n, cnt = 0;
int main(){
	scanf("%d", &n);
	while(n--){
		char str[100001] = {0};
		scanf("%s", str);
		int len = strlen(str);
		stack<char> S;
		for(int i = 0;i < len;i++){
			if(S.empty())	S.push(str[i]);
			else {
				char temp = S.top();
				if(temp == str[i])	S.pop();
				else	S.push(str[i]);
			}
		}
		if(S.empty())	cnt++;
	}
	printf("%d\n", cnt);
}