#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float maths();
float trig();
float logar();
int main(){
    int ch;
    err:
    printf("***********************************************************\n");
    printf("Enter 1 for mathematical functions like addition, subtraction...\n");
    printf("***********************************************************\n");
    printf("Enter 2 for trigonometric functions....\n");
    printf("***********************************************************\n");
    printf("Enter 3 for logarithm related functions....\n");
    printf("***********************************************************\n");
    printf("Enter 4 to Exit\n");
    printf("***********************************************************\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("***********************************************************\nResult of the operation is : %f\n",maths());
        printf("***********************************************************\n");
        break;
        case 2:
        printf("***********************************************************\nResult of the operation is %f\n",trig());
        printf("***********************************************************\n");
        break;
        case 3:
        printf("***********************************************************\nResult of the operation is %f\n",logar());
        printf("***********************************************************\n");
        break;
        case 4:
        printf("***********************************************************\n");
        goto end;
        default:
        printf("***********************************************************\nInvalid Input, Try again\n");
        printf("***********************************************************\n");
        goto err;
        break;
    }
    printf("Exit or Continue\n");
    printf(" Any        2\n");
    printf("***********************************************************\n");
    scanf("%d",&ch);
    if(ch==2)
    goto err;
    end:
    printf("***********************************************************\n");
    printf("Terminating the program!\n");
    printf("***********************************************************\n");
    return 0;
}

float maths(){
    int ch;
    float a,b;
    printf("***********************************************************\n");
    printf("Enter 1 for Sum of two numbers\n");
    printf("***********************************************************\n");
    printf("Enter 2 for Difference of two numbers\n");
    printf("***********************************************************\n");
    printf("Enter 3 for Quotient of two numbers\n");
    printf("***********************************************************\n");
    printf("Enter 4 for Product of two numbers\n");
    printf("***********************************************************\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("Enter two numbers\n");
        printf("***********************************************************\n");
        scanf("%f%f",&a,&b);
        return a+b;
        case 2:
        printf("Enter the first number\n");
        printf("***********************************************************\n");
        scanf("%f",&a);
        printf("Enter the second number\n");
        printf("***********************************************************\n");
        scanf("%f",&b);
        return a-b;
        case 3:
        printf("Enter the dividend\n");
        printf("***********************************************************\n");
        scanf("%f",&a);
        printf("Enter the divisor\n");
        printf("***********************************************************\n");
        scanf("%f",&b);
        return a/b;
        case 4:
        printf("Enter two numbers\n");
        printf("***********************************************************\n");
        scanf("%f%f",&a,&b);
        return a*b;
        default:
        printf("Invalid operation\n");
        printf("***********************************************************\n");
        return 0;
    }
}
float trig(){
    int ch;
    float angle,pi=3.141592;
    printf("***********************************************************\n");
    printf("Enter 1 to get sine of an angle\n");
    printf("***********************************************************\n");
    printf("Enter 2 to get cosine of an angle\n");
    printf("***********************************************************\n");
    printf("Enter 3 to get tangent of an angle\n");
    printf("***********************************************************\n");
    printf("Enter 4 to get secant of an angle\n");
    printf("***********************************************************\n");
    printf("Enter 5 to get cosecant of an angle\n");
    printf("***********************************************************\n");
    printf("Enter 6 to get cotangent of an angle\n");
    printf("***********************************************************\n");
    scanf("%d",&ch);
    printf("Enter angle in degrees\n");
    printf("***********************************************************\n");
    scanf("%f",&angle);
    switch(ch){
        case 1:
        angle*=pi/180;
        return sin(angle);
        case 2:
        angle*=pi/180;
        return cos(angle);
        case 3:
        if(((int)angle % 90) == 0){
            printf("Undefined\n");
            return 0;
        }
        angle*=pi/180;
        return tan(angle);
        case 4:
        if(((int)angle % 90) == 0){
            printf("Undefined\n");
            return 0;
        }
        angle*=pi/180;
        return 1/cos(angle);
        case 5:
        if(((int)angle % 90) == 0){
            printf("Undefined\n");
            return 0;
        }
        angle*=pi/180;
        return 1/sin(angle);
        case 6:
        if(((int)angle % 90) == 0){
            printf("Undefined\n");
            return 0;
        }
        angle*=pi/180;
        return 1/tan(angle);
        default:
        printf("Invalid Input\n");
        return 0;
    }
}
float logar(){
    int ch;
    printf("Enter 1 for logarithm of base 10\n");
    printf("***********************************************************\n");
    printf("Enter 2 for natural logarithm of base e\n");
    printf("***********************************************************\n");
    printf("Enter 3 for exponentation of a number (i.e e^x)\n");
    printf("***********************************************************\n");
    scanf("%d",&ch);
    float n;
    printf("Enter number\n");
    printf("***********************************************************\n");
    scanf("%f",&n);
    switch(ch){
        case 1:
        return log10(n);
        case 2:
        return log(n);
        case 3:
        return exp(n);
        default:
        printf("Invalid Input\n");
        printf("***********************************************************\n");
        return 0;
    }
}