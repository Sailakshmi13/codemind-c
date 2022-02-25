#include<stdio.h>
int main()
{
char x[100];
fgets(x,100,stdin);
printf("%s",x);
return 0;
}