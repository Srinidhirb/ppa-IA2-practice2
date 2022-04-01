#include<stdio.h>
void input(float*base, float*height)
{
  printf("enter the base and height of the triangle :\n");
  scanf("%f%f",base,height);
}
void find_area(float base , float height, float *area)
{
  *area= base*height*0.5;
}
void output(float base, float height, float area)
{
  printf("the area of the triagle with base %f and heigth %f is %f ",base,height,area);
}
int main()
{
  float base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
  return 0;
}