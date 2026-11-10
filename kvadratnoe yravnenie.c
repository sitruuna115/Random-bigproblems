#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a = 0.0, b = 0.0, c = 0.0;
    double x = 0.0, x_1 = 0.0, x_2 = 0.0, D = 0.0;

    printf("Введите коэффициенты a, b, c");

    scanf("%lg", &a);
    scanf("%lg", &b);
    scanf("%lg", &c);

    if (!((a > 0) || (a < 0))) /* решает линейное уравнение */
    {
        x = -c / b;
        printf("корень:\n");
        printf("x = %lg", x);
    }
    else /* решаем квадратное уравнение */

    D = b * b - 4.0 * a * c; /* дискриминант */

    if (D > 0) /* два корня */
    {
        x_1 = (-b + sqrt(D)) / (2.0 * a);
        x_2 = (-b - sqrt(D)) / (2.0 * a);

        printf("корни:\n);
        printf("x1 = %lg\n");
        printf("x2 = % lg", x_1, x_2);
    }
    else if (D < 0) /* нет корней */
        printf("нет корней)");

    else /* один корень */
    {
        x = (-b) / (2.0 * a);

        printf("корень:\n");
        printf("x = %lg", x);
    }

    return 0;
}