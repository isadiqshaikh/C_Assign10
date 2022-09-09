/*#include<stdio.h>
void add();
int main()
{
    add();
    return 0;
}
void add()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("The addition of %d and %d is %d",a,b,c);
}*
/*
#include<stdio.h>
void add(int ,int);
int main()
{
  int x,y;
  printf("Enter two numbers: ");
  scanf("%d %d",&x,&y);
  add(x,y);
}
void add(int a ,int b)
{
    int c;
    c=a+b;
    printf("Sum is %d",c);
}*/








#include<stdio.h>
int fun(int);
int main()
   int x;
   printf("Enter a number: ");
   scanf("%d",&x);
   fun(a)

int fun(int a)
{
    if(a%2==0)
        return 1;
    else
        return 0;
}
