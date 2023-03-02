//program to return area of circle using a function
#include<stdio.h>
float area(float radius);
int main()
{
  #define pi 3.142
  float radius,result;
  printf("Enter radius of circle");
  scanf("%f",&radius);
  result=area(radius);
  printf("The area is %f",result);
  return 0;
}
float area(float radius)
{
  float c;
  #define pi 3.142
  c=pi*radius*radius;
  return c;
}