#include <stdio.h>
#include <math.h>
#define PI 3.141593
int main(void)
{ /* Acknowledge variables */
    double a, f_a, b, f_b, c, f_c;
    printf("Use degrees for angle values \n");
    printf("Enter 1st coefficient of lift and flight-path angle: \n");
    scanf("%lf %lf",&f_a, &a);
    printf("Enter 2nd coefficient of lift and flight-path angle: \n");
    scanf("%lf %lf",&f_c, &c);
    printf("Enter new coefficient of lift: \n");
    scanf("%lf", &f_b);
    b = a*PI/180 +(f_b - f_a)/(f_c - f_a)*(c*PI/180 - a*PI/180);
    printf("New flight-path angle in radians: %lf \n", b);
    /* Exit program */
    return 0;
}
