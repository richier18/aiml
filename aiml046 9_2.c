#include<stdio.h>
#include<math.h>

void area(float,float,float,float);
void S(float,float,float);
void main()
{
    float a,b,c;
    printf("enter A: ");
    scanf("%f",&a);
    printf("enter B: ");
    scanf("%f",&b);
    printf("enter C: ");
    scanf("%f",&c);
    S(a,b,c);

}



  void S(float a,float b,float c)
  {
      float s;
      s = (a+b+c)/2;
      area(a,b,c,s);
  }


   void area(float a,float b,float c,float S)
  {
      float A;

      A = sqrt(S*(S-a)*(S-b)*(S-c));
      if(A>0)
      printf("area of triangle is:\n %.2f",A);
  }
