#include <stdio.h>
#include <stdlib.h>

int main()
{
int valor, cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, um = 0, aux;

scanf("%d", &valor);
aux = valor;

if ((valor/100) >= 1){
    cem = valor/100;
    valor = valor - cem*100;
}

if ((valor/50) >= 1){
    cinquenta = valor/50;
    valor = valor - cinquenta*50;
}

if ((valor/20) >= 1){
    vinte = valor/20;
    valor = valor - vinte*20;
}

if ((valor/10) >= 1){
    dez = valor/10;
    valor = valor - dez*10;
}

if ((valor/5) >= 1){
    cinco = valor/5;
    valor = valor - cinco*5;
}

if ((valor/2) >= 1){
    dois = valor/2;
    valor = valor - dois*2;
}

if ((valor/1) >= 1){
    um = valor/1;
    valor = valor - um*1;
}

printf("%d\n", aux);
printf("%d nota(s) de R$ 100,00\n", cem);
printf("%d nota(s) de R$ 50,00\n", cinquenta);
printf("%d nota(s) de R$ 20,00\n", vinte);
printf("%d nota(s) de R$ 10,00\n", dez);
printf("%d nota(s) de R$ 5,00\n", cinco);
printf("%d nota(s) de R$ 2,00\n", dois);
printf("%d nota(s) de R$ 1,00\n", um);

return 0;
}
