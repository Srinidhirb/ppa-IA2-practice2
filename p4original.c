#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the array size");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  printf("enter the elements of the array:\n");
  for (int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}
int sum_composite(int n)
{
 int me;
 for (int i=1;i<n;i++)
 {
   if(n%i==0)
   {
     me+=1;
   }
 }
 return me;
}
int sum_composite_numbers(int n, int a[n])
{
int sum =0;
for (int i=0;i<n;i++)
{
  if ( sum_composite(a[i])>2)
 {
  sum=sum+a[i];
 } 
}
return sum;
}
void output(int sum)
{
  printf("the sum of the composite no is %d",sum);
}
int main()
{
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sum_composite_numbers(n,a);
  output(sum);
  return 0;
}