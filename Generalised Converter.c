#include <stdio.h>

int main(int argc, char *argv[]) {
    int quantity, ch;
    double celsius, fahrenheit, miles, kilometer, pounds, kilogram;
                
    printf("Enter a quantity: ");
    scanf("%d", &quantity);
    
    while((ch=getchar()) != EOF) {
        if (ch == 'F') {    
            celsius = (quantity - 32.0) * 5.0/9.0;  
            printf("The temperature %d.0F converts to %.1fC\n", quantity, celsius);
        }
        if (ch == 'C') {
            fahrenheit = (quantity * 9.0 / 5.0) + 32.0;
            printf("The temperature %d.0C converts to %.1fF\n", quantity, fahrenheit);
            return 0;
        }
        if (ch == 'M') {
            kilometer = quantity * 1.60934;
            printf("The distance %d.0 miles converts to %.1f kilometers\n", quantity, kilometer);
        }
        if (ch == 'K') {
            miles = quantity / 1.609;
            printf("The distance %d.0 kilometers converts to %.1f miles\n", quantity, miles);
        }
        if (ch == 'P') {
            kilogram = quantity * 0.45359237;
            printf("The mass %d.0 pounds converts to %.1f kilograms\n", quantity, kilogram);
        }
        if (ch == 'G') {
            pounds = quantity / 0.454;
            printf("The mass %d.0 kilograms converts to %.1f pounds\n", quantity, pounds);
        }
    }
    return 0;
}