#include <stdio.h>
#include <stdlib.h>

int main()
{
int tempo;

scanf("%d", &tempo);

if (tempo < 60){
    printf("0:0:%d\n", tempo);
}
else if (tempo >= 60 && tempo < 3600){
    printf("0:%d:%d\n", (tempo/60), (tempo%60));
}
else if (tempo >= 3600){
    printf("%d:%d:%d\n", (tempo/3600), (tempo%3600)/60, ((tempo%3600)%60));
}

return 0;
}

