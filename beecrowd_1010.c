#include <stdio.h>
#include <stdlib.h>

int main()
{
int peca1, n_peca1, peca2, n_peca2;
float unitario1, unitario2, total;

scanf("%d", &peca1);
scanf("%d", &n_peca1);
scanf("%f", &unitario1);

scanf("%d", &peca2);
scanf("%d", &n_peca2);
scanf("%f", &unitario2);

total = n_peca1 * unitario1 + n_peca2 * unitario2;

printf("VALOR A PAGAR: R$ %.2f\n", total);

return 0;
}
