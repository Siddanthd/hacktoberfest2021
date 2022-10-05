#include <stdio.h>
int main()
{
char str[10];int i;
i=0;
printf("enter the string");
gets(str);
while(str[i]!='\0')
{
i++;
}
printf("the length of the string is %d",i);
return 0;
}
