#include <stdio.h>
#include <stdlib.h>

int main()
{
int valor, centavos, cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, um = 0, cinquentac = 0, vinteecincoc = 0, dezc = 0, cincoc = 0, umc = 0;
double money, dinheiro;

scanf("%lf", &money);

valor = money;
dinheiro = money * 100;
centavos = dinheiro;

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
centavos = centavos % 100;

if ((centavos/50) >= 1){
    cinquentac = centavos/50;
    centavos = centavos - cinquentac*50;
}

if ((centavos/25) >= 1){
    vinteecincoc = centavos/25;
    centavos = centavos - vinteecincoc*25;
}

if ((centavos/10) >= 1){
    dezc = centavos/10;
    centavos = centavos - dezc*10;
}

if ((centavos/5) >= 1){
    cincoc = centavos/5;
    centavos = centavos - cincoc*5;
}

if ((centavos/1) >= 1){
    umc = centavos/1;
    centavos = centavos - umc*1;
}

printf("NOTAS:\n");
printf("%d nota(s) de R$ 100.00\n", cem);
printf("%d nota(s) de R$ 50.00\n", cinquenta);
printf("%d nota(s) de R$ 20.00\n", vinte);
printf("%d nota(s) de R$ 10.00\n", dez);
printf("%d nota(s) de R$ 5.00\n", cinco);
printf("%d nota(s) de R$ 2.00\n", dois);
printf("MOEDAS:\n");
printf("%d moeda(s) de R$ 1.00\n", um);
printf("%d moeda(s) de R$ 0.50\n", cinquentac);
printf("%d moeda(s) de R$ 0.25\n", vinteecincoc);
printf("%d moeda(s) de R$ 0.10\n", dezc);
printf("%d moeda(s) de R$ 0.05\n", cincoc);
printf("%d moeda(s) de R$ 0.01\n", umc);

return 0;
}
