#include<stdio.h>
int input_side()
{
  int n;
  printf("enter the length of the side:\n");
  scanf("%d",&n);
  return n;
}
 int check_scalene(int a, int b, int c)
 {
    if (a==b || b==c || c==a)
   {
     return -1;
   }
   else  {
    return 1  ;
   }
   
 }

 void output(int a, int b, int c, int isscalene)
 
  { if (isscalene==1)
  {
    printf("the triangle is scalene triangle" );
  }
  else if (isscalene==-1)
  {
    printf("the triangle is not scalne triangle");
  }
}
int main ()
  {
    int a,b,c,s;
    a=input_side();
    b=input_side();
    c=input_side();
    s=check_scalene(a,b,c);
    output(a,b,c,s);
    return 0;
  }