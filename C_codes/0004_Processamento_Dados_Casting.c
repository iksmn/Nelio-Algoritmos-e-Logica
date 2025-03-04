#include <stdio.h>
int main()
{
    int x, y;
    x = 5;
    y = 2 * x;
    printf("%d\n", x);
    printf("%d\n", y);

    int k; 
    double l;
    k = 5;
    l = 2 * k;
    printf("%d\n", k);
    printf("%.1lf\n", l);

    double b1, b2, h, area;
    b1 = 6.0;
    b2 = 8.0;
    h = 5.0;
    area = (b1 + b2) / 2.0 * h;
    printf("%lf\n", area);

    int c, d, resultado;
    c = 5;
    d = 2;
    resultado = c/d;
    printf("%d\n", resultado);

    double f;
    int g;
    f = 5.0;
    g = (int) f; //casting (converção de tipos de variáveis).
    printf("%d\n", g);

    int m, n;
    double result;
    m = 5;
    n = 2;
    result = (double) m/n;
    printf("%lf\n", result);

    return 0;
}