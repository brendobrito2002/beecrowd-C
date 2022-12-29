#include <stdio.h>
#include <stdlib.h>

int main()
{
int distancia;
double combustivel, total;

scanf("%d", &distancia);
scanf("%lf", &combustivel);

total = distancia / combustivel;

printf("%.3lf km/l\n", total);

return 0;
}
