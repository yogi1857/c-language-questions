// write a program to take avrage of 5 numbers....

#include <stdio.h>

int main()
{
 int a,b,c,d,e;
 scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
 int sum = a+b+c+d+e ;
 float avrage = sum/ 5;
 printf (" the avrage value of a,b,c,d,e is %.2f",avrage);

    return 0;
}
