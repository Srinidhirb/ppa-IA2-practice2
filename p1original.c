#include<stdio.h>

void input(float *base, float *height)
{
  printf("enter the base value:\n");
  scanf("%f",base);
  printf("enter the height value:\n");
  scanf("%f",height);
}

void find_area(float base , float height, float *area)
{
  *area=base*height/2;
  
}

void output(float base, float height, float area)
{
  printf("the area of the triangle with %f and %f is %f",base,height,area);
}

int main()
{
  float base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
  return 0;
}