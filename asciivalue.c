#include<stdio.h>
#include<string.h>
int main()
{
char a[5];
int i;
printf("enter the string");
gets(a);
for(i=0;i<strlen(a);i++)
{
printf("%d\n",a[i]); //%d will print the ascii value of the character
}
return 0;
}
