#include<stdio.h>
void main()
{
char *s ="helloworld";
int i=0;
while(*(s+i)){
i++;
}
printf("the length of string is %d",i);
}
