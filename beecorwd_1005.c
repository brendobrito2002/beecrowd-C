#include <stdio.h>
#include <stdlib.h>

int main()
{
double a, b;
double soma, media;

scanf("%lf", &a);
scanf("%lf", &b);

soma = a * 3.5 + b * 7.5;
media = soma / 11.0;

printf("MEDIA = %.5lf\n", media);

return 0;
}
