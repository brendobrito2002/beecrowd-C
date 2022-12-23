#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

double raio, area;
double pi = 3.14159;

scanf("%lf", &raio);

area = pi * pow(raio,2);

printf("A=%.4lf\n", area);

return 0;
}
