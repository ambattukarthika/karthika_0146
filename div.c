#include<stdio.h>
int main()
{
      int num1,num2;
      float div;  
      printf("\tEnter Two Numbers\n");
      printf("---------------------------\n");
      printf("Enter First Number  : ");
      scanf("%d", &num1);
      printf("\nEnter Second Number : ");
      scanf("%d",&num2);
      /*div defined as a float & cast any one variable num1 or num2.*/
      div=num1/(float)num2;	//num2 cast as float
      printf("\nDivision of %d & %d is = %f",num1,num2,div);
      return 0;
}
