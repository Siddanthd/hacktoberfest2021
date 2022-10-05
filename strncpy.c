#include <stdio.h>
int main()
{
char str1[10],str2[10];
int i;
i=0;
printf("enter the string");
gets(str);
while(str[i]!='\0')
{
str2[i]=str1[i];
i++;
}
printf(“the copied string is”);
puts(str2);
}
