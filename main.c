#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int a, b;    
  printf("input two integers:");
  scanf("%d %d", &a, &b);
  
  int Add_R=a+b;  
  int Sub_R=a-b;
  int Mul_R=a*b;
  int Div_R=a/b;
  int Div2_R=a%b;
  
  printf("+result is %d\n", Add_R);
  printf("-result is %d\n", Sub_R);
  printf("*result is %d\n", Mul_R);
  printf("/result is %d\n", Div_R);
  printf("%%result is %d\n", Div2_R);
  
  
  system("PAUSE");	
}
