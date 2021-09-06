#include <stdio.h>
#include <math.h>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main(void) {
    printf("isunordered(NAN,1.0) = %d\n", isunordered(NAN, 1.0));
    printf("isunordered(1.0,NAN) = %d\n", isunordered(1.0, NAN));
    printf("isunordered(NAN,NAN) = %d\n", isunordered(NAN, NAN));
    printf("isunordered(1.0,0.0) = %d\n", isunordered(1.0, 0.0));

    _getch();
    return 0;
}