#include <stdio.h>
#include <math.h>

void addition(){
  printf("Enter 2 numbers: ");
  int a,b;
  scanf("%d %d",&a,&b);
  printf("%d + %d = %d",a,b,a+b);
  
}

void subtraction(){
  printf("Enter 2 numbers: ");
  int a,b;
  scanf("%d %d",&a,&b);
  printf("%d - %d = %d",a,b,a-b);
}

void multiplication(){
  printf("Enter 2 numbers: ");
  int a,b;
  scanf("%d %d",&a,&b);
  printf("%d * %d = %d",a,b,a*b);
}

void division(){
  printf("Enter 2 numbers: ");
  double a,b;
  scanf("%lf %lf",&a,&b);
  printf("%.2lf / %.2lf = %.2lf",a,b,a/b);
}

void squareRoot(){
   printf("Enter a number: ");
  double a;
  scanf("%lf",&a);
  printf("Square root of %.2lf is %.2lf",a,sqrt(a));
}

void powerNum(){
   printf("Enter a number: ");
  double a;
  scanf("%lf",&a);
  printf("Enter the power: ");
  double b;
  scanf("%lf",&b);
  printf("%.2lf to the power of %.2lf is %.2lf",a,b,pow(a,b));
}


void perimeterCircle(double a){
  printf("Perimeter is: %.2lf",2*3.14*a);
}

void areaCircle(){
   printf("Enter radius: ");
  double a;
  scanf("%lf",&a);
  printf("Area is: %.2lf\n",3.14*a*a);
  perimeterCircle(a);
}

int main(void) {
  printf("Enter a character:\n");
  printf("'+' for addition.\n");
  printf("'-' for subtraction.\n");
  printf("'*' for multiplication.\n");
  printf("'/' for division.\n");
  printf("'s' for square root.\n");
  printf("'p' for power.\n");
  printf("'c' for area and perimeter of a circle.\n");

  char c;
  scanf("%c",&c);

  if(c=='+'){
    addition();
  }else if (c=='-'){
    subtraction();
  }else if(c=='*'){
    multiplication();
  }else if(c=='/'){
    division();
  }else if(c=='s'){
    squareRoot();
  }else if(c=='p'){
    powerNum();
  }else if(c=='c'){
    areaCircle();

  }else{
    printf("\ninvalid operation.");
  }
  return 0;
}
