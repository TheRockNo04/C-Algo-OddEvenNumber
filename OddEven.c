#include<stdio.h>
#include<conio.h>

int main(){

 int no;

 printf("Enter your number:- ");
 scanf("%d",&no);

 if(no%2==0)
    {printf("%d is a even number",no);}

 else
    {printf("%d is a odd number",no);}

 return 0;
 getch();
}
