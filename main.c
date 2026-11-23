#include <stdio.h>

void split_double(double d, int *int_part, double *frac_part);

int main(void)
{
    double val;
    int ipart;
    double fpart;

    scanf("%lf", &val);

    split_double(val, &ipart, &fpart);

    printf("%d,%.4f", ipart, fpart);

    return 0;
}

void split_double(double d, int *int_part, double *frac_part)
{
    *int_part = (int)d;
    *frac_part = d - *int_part;
}