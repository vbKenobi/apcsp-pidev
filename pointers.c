#include <stdio.h>

int main()

{

    float d = 5.33;
    float e = 7.33;
    float f;
    float* ptrtod = &d;
    float* ptrtoe = &e;

    printf("The value of d is %f. The value of e is %f. \n", d, e);

    printf("The address of d is %u. The address of e is %u. \n", (int)&d, (int)&e);

    f = *ptrtoe;

    *ptrtoe = *ptrtod;

    *ptrtod = f;

    printf("The value of d is %f. The value of e is %f. \n", d, e); 

    printf("The address of d is %u. The address of e is %u. \n", (int)&d, (int)&e); return 0;
}
