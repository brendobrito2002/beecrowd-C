#include <stdio.h>
#include <stdlib.h>

int main()
{
double a, b, c;
double soma, media;

scanf("%lf", &a);
scanf("%lf", &b);
scanf("%lf", &c);

soma = a * 2.0 + b * 3.0 + c * 5.0;
media = soma / 10.0;

printf("MEDIA = %.1lf\n", media);

return 0;
}
