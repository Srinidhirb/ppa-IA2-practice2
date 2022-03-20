#include<stdio.h>
int input_numbers()
{
  int n;
  printf("enter the number :");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int a=0, i;
  for(i=2;i/2;i++)
  if (n%i==0)
  {
    return 1;
   }
    else 
  {
    return -1;
  }
}
void output(int n, int composite )
{
  if(composite==1)
printf("the no is composite");
else if (composite==-1)
printf("the no is not composite");
}
int main()

{
  int a,b;
  a=input_numbers();
  b=is_composite(a);
  output(a,b);
  return 0;
}