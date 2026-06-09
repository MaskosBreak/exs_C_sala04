//Inclui biblioteca stdio.h para usar a entrada e saída de infos(printf e scanf)
#include<stdio.h>

//Inclui bibliotecas utilitárias
#include<stdlib.h>

int main(){

//declaração de variável
    float n1, n2, resp;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    resp = n1 + n2;

    printf("%.2f",resp);
    


//pausar o sitema ate que o usuaria pressione uma tecla
    system("pause");
//finalizando o sistema + ocorreu tudo certo
    return 0;
}
