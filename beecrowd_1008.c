#include <stdio.h>
#include <stdlib.h>

int main()
{
int numero, horas;
float porhora, salario;

scanf("%d", &numero);
scanf("%d", & horas);
scanf("%f", & porhora);

salario = horas * porhora;

printf("NUMBER = %d\n", numero);
printf("SALARY = U$ %.2f\n", salario);

return 0;
}
