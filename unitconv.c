#include <stdio.h>
int main() {
    int type;
    float temperature, res;
    printf("***Temperature Unit Converter***\n");
    printf("Choose the conversion type:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("5. Fahrenheit to Kelvin\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("Enter the number corresponding to the conversion: ");
    scanf("%d",&type);
    printf("Enter the temperature to convert: ");
    scanf("%f", &temperature);
    switch(type){
        case 1:
            res=(temperature*9/5)+32;
            printf("Temperature in Fahrenheit: %.2f\n",res);
            break;
        case 2:
            res=(temperature-32)*5/9;
            printf("Temperature in Celsius: %.2f\n",res);
            break;
        case 3:
            res=temperature+273.15;
            printf("Temperature in Kelvin: %.2f\n",res);
            break;
        case 4:
            res=temperature-273.15;
            printf("Temperature in Celsius: %.2f\n",res);
            break;
        case 5:
            res=(temperature-32)*5/9+273.15;
            printf("Temperature in Kelvin: %.2f\n",res);
            break;
        case 6:
            res=(temperature-273.15)* 9/5+32;
            printf("Temperature in Fahrenheit: %.2f\n",res);
            break;

        default:
            printf("Invalid Input!\n");
            break;
    }
    return 0;
}
