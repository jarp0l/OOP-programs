/*
 * Task #1:
 * WAP in C to add two complex numbers using the concept of structure.
 */
#include <stdio.h>

struct Complex {
    float re, im;
};

int main(){
    struct Complex c1, c2, c3;
    printf("Enter the real part of first complex number: ");
    scanf("%f", &c1.re);

    printf("Enter the complex part of first complex number: ");
    scanf("%f", &c1.im);

    printf("\n");

    printf("Enter the real part of second complex number: ");
    scanf("%f", &c2.re);

    printf("Enter the complex part of first complex number: ");
    scanf("%f", &c2.im);

    c3.re = c1.re + c2.re;
    c3.im = c1.im + c2.im;

    printf("\nSum of the two complex numbers: %.2f + i %.2f\n", c3.re, c3.im);

    return 0;
}