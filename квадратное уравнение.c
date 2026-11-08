#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c;
    double x = 0.0, x_1 = 0.0, x_2 = 0.0, D = 0.0;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    D = b * b - 4.0 * a * c;
    printf("%f", D);

    if (D > 0)
    {
        x_1 = (-b + sqrt(D)) / (2.0 * a);
        x_2 = (-b - sqrt(D)) / (2.0 * a);
        printf("корни:\nx1=%f x2=%f", x_1, x_2);
    }
    else if (D < 0)
        printf("нет корней)");

    else
    {
        x = (-b) / (2.0 * a);
        printf("корень:\nx=%f", x);
    }

    return 0;
}