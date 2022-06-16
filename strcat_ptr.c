#include<stdio.h>
void main()
{
char *a="hello";
char *b="world";
char c[20];
int i,j=0;
while(*(a+i))
{
c[i]=*(a+i);
i++;
}
while(1)
{
c[i]=*(b+j);
if(c[i]=='\0')
break;
i++;
j++;
}
printf("the concatinated string is %s",c);
}
