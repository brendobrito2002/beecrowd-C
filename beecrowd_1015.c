#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
double x1, y1, x2, y2;
double soma, raiz;

scanf("%lf", &x1);
scanf("%lf", &y1);
scanf("%lf", &x2);
scanf("%lf", &y2);

soma = pow(x2 - x1,2) + pow(y2 - y1,2);
raiz = sqrt(soma);

printf("%.4lf\n", raiz);

return 0;
}
