#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a, b, c, value1, value2;
    double discriminant;
    
    printf("Enter a b c: ");
    scanf("%d%d%d", &a, &b, &c);
    
    discriminant = (b * b) - (4 * a * c);
    
    if (discriminant < 0) {
        printf("Equation %d.0x^2 + %d.0x + %d.0 = 0 has\n", a, b, c);
        printf("    no real roots\n");
        }
    else if (a == 0 && b == 0 && c == 0) {
        printf("Equation %d.0x^2 + %d.0x + %d.0 = 0 has\n", a, b, c);
        printf("    an infinite number of roots\n");
        }
    else if (discriminant == 0) {
        value1 = (-b / (2 * a));
        printf("Equation %d.0x^2 + %d.0x + %d.0 = 0 has\n", a, b, c);
        printf("    one real root: x = %d.0\n", value1);
        }
    else {
        value1 = (-b + pow(discriminant, (1.0 / 2.0))) / (2.0 * a);
        value2 = (-b - pow(discriminant, (1.0 / 2.0))) / (2.0 * a);
        printf("Equation %d.0x^2 + %d.0x + %d.0 = 0 has\n", a, b, c);
        printf("    two real roots: x1 = %d.0, x2 = %d.0\n", value1, value2);
    }
        
        
        
    
    return 0;
}