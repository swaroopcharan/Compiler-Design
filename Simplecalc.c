#include<stdio.h>
#include<math.h>
int main(){
    double a , b;
    char op;
    printf("Enter the operand1 : ");
    scanf("%lf",&a);
    printf("Enter the operand2 : ");
    scanf("%lf",&b);
    printf("Enter the operator to be used(+ , - , * ,/ ,p): ");
    scanf("%s",&op);
    
    switch (op) {
        case '+':
        printf("%lf + %lf = %lf",a,b,a+b);
        break;
        case '-':
        printf("%lf - %lf = %lf",a,b,a-b);
        break;
        case '*':
        printf("%lf * %lf = %lf",a,b,a*b);
        break;
        case '/':
        printf("%lf / %lf = %lf",a,b,a/b);
        break;
        case 'p':
        printf("Power is : %lf",pow(a,b));
        break;
        default:
        printf("Enter the operator correctly");
    }
    return 0;
}
