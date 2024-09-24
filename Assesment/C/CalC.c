

//Create Menu Driven Calculator using Funcion

#include <stdio.h>

int main() {
    int num1,num2,op,total;

int sum(int a, int b)
{
  return a + b;
}
int sub(int a, int b)
{
  return a - b;
}
int multi(int a, int b)
{
  return a * b;
}
int divi(int a, int b)
{
  return a / b;
}
    while (1)
    {
    printf("\nselect the operation\nPress 1 => Addition\nPress 2 => Subtraction\nPress 3 => Multiplication\nPress 4 => Division\n");
    scanf("%d",&op);

           if (op > 4) {
            printf("Exiting the calculator. Goodbye!\n");
            break;
           }
    printf("Enter the first operand\n");
    scanf("%d",&num1);

    printf("Enter the secon operand\n");
    scanf("%d",&num2);

    if(op==1){
        total= sum(num1,num2);
        printf("Your Answer is = %d", total);
    }
    if(op==2){
        total=sub(num1,num2);
        printf("Your Answer is = %d", total);
    }
    if(op==3){
        total=multi(num1,num2);
        printf("Your Answer is = %d", total);
    }
    if(op==4){
        total=divi(num1,num2);
        printf("Your Answer is = %d", total);
    }

 }

    return 0;
}
