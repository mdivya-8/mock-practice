#include<stdio.h>
void main()
{
char *a="hello";
char b[10];
int i=0;
while(1)
{
b[i]=*(a+i);
if(b[i]=='\0')
break;
i++;
}
printf("the copied string is %s",b);
}
