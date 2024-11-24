#include<stdio.h>
int main()
{
   float num1, num2, sum, sub, pro, div;    
   char alphebat;
   printf("\t\t\tWelcome to the Calculator Program.\n");
   printf("Please choose the operation (+, -, *, /): ");
   scanf(" %c",&alphebat);

   printf("Please enter first number:");
   scanf("%f",&num1);
   printf("Please enter second number:");
   scanf("%f",&num2);

 switch(alphebat){
	case'+':
        sum= num1 + num2;
		printf("Sum of %f and %f is %f.\n",num1, num2 ,sum);
		break;
    case'-':
		sub= num1 - num2;
        printf("Difference of %f and %f is %f.\n",num1, num2 ,sub);
		break;
    case'*':
	    pro= num1 * num2;
        printf("Product of %f and %f is %f.\n",num1, num2 ,pro);
		break;
	case'/':
        div= num1 / num2;
        printf("Remainder of of %f and %f is %f.\n",num1, num2 ,div);
		break;
	
	default:
	        printf("InValid Operation.\nPlease choose the operation (+,-,*,/)");
		    break;	
  }


return 0;
}
