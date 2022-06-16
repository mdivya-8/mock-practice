#include<stdio.h>
void main(){
char *a="helloworld";
char *b="hellow";
int i=0;
while(*(a+i)&& *(b+i)){
if(*(a+i)!=*(b+i))
break;
i++;
}
if(*(a+i)=='\0'&&*(b+i)=='\0')
printf("both are equal");
else
printf("both are not equal");
}
