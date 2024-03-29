/*My first C Program!*/

#include <stdio.h>
#define PI 3.14159

void main(void)
{
    double r;
    printf("Calculation of Area and Circumference of Circles.\nUsers should enter the radius of circle, r.\nr = ");
    scanf("%lg", &r);
    while (r <= 0.0) {
        puts("Please enter a number greater than 0.");
        scanf("%lg", &r);
    }
    if (r > 0.0) {
        int c;
        puts("Please select: 1 for calculation of area of circle and 2 for calculation for circumference of circle.");
        scanf("%i", &c);
        while (c != 1 && c != 2) {
            puts("Please enter 1 or 2 only.");
            scanf("%i", &c);
        }
        if (c == 1) {
            double A = PI*r*r;
            printf("The area of circle with radius r = %g is %g.\n", r, A);
        }
        else if (c == 2) {
            double C = 2*PI*r;
            printf("The circumference of circle with radius r = %g is %g.\n", r, C);
        }
        else {
            puts("Program error. Please debug.");
        }
    }
    else {
        puts("Program error. Please debug.");
    }
    puts("Succesful termination.");
}
