#include <stdio.h>
#include <stdlib.h>

int main()
{
int horas, km;
double litros;

scanf("%d", &horas);
scanf("%d", &km);

litros = horas * km / 12.0;

printf("%.3lf\n", litros);

return 0;
}
