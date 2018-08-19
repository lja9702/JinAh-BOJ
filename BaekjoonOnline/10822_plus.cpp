#include <iostream>
#include <string>
using namespace std;
int main(){
  string str; int num = 0;
  while(getline(cin, str, ','))
    num += stoi(str);
  cout << num;
}
