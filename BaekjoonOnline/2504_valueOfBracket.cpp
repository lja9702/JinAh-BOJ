#include <cstdio>
#include <stack>
#include <cstring>
using namespace std;
char str[33];
int main(){
	scanf(" %s", str);
	int len = strlen(str);
	stack <char> S;
	for(int i = 0;i < len;i++){
		if(!S.empty() && str[i] == ')' && S.top() == '(')	S.pop();
		else if(!S.empty() && str[i] == ']' && S.top() == '[')	S.pop();
		else	S.push(str[i]);
	}
	if(!S.empty()){
		printf("0\n");
		return 0;
	}
	stack <int> iS;
	for(int i = 0;i < len;i++){
		if(str[i] == '(')	iS.push(-2);
		else if(str[i] == '[')	iS.push(-3);
		else if(str[i] == ']'){
			int temp = 0;
			while(!iS.empty() && iS.top() != -3){
				temp += iS.top();
				iS.pop();
			}
			iS.pop();
			if(temp)	iS.push(3 * temp);
			else	iS.push(3);
		}
		else{
			int temp = 0;
			while(!iS.empty() && iS.top() != -2){
				temp += iS.top();
				iS.pop();
			}
			iS.pop();
			if(temp)	iS.push(2 * temp);
			else	iS.push(2);
		}
	}
	int res = 0;
	while(!iS.empty()){
		res += iS.top();
		iS.pop();
	}
	printf("%d\n", res);
}
