#include<stdio.h>

int main()
{
int i,j;
printf("%d %d %d\n", 1, 26*26-1,2);
for(i = 0 ; i < 26 ; i++)
for ( j = 0 ; j < 26 ; j++)
if(i != 25 || j != 25) printf("%c%c\n",i+'A',j+'A');
return 0;
}
