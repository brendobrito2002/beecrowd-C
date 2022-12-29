#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
char vendedor[20];
double salario_fixo, vendas_efetuadas, total;

fgets(vendedor,20,stdin);
scanf("%lf", &salario_fixo);
scanf("%lf", &vendas_efetuadas);

total = salario_fixo + vendas_efetuadas * 0.15;

printf("TOTAL = R$ %.2lf\n", total);

return 0;
}
