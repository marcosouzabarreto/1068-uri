#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"
int verificador_de_parenteses(tp_pilha pilha, int tamanho, const char *expressao){
    char e;
    int verificador = 0;
    for(;tamanho>=0; tamanho--){
        char caractere;
        caractere = expressao[tamanho];

        if ((caractere==40)||(caractere==41)) {
            push(&pilha, caractere);
        }
    }
    while(!pilha_vazia(&pilha)){
        pop(&pilha, &e);
        if(verificador<0){
            return 0;
        }
        e==40 ? verificador++ : verificador--;
    }
    if (verificador!=0) return 0;
}
int main()
{
    tp_pilha pilha;
    char expressao[100];
    int tamanho, funcionou;
    inicializa_pilha(&pilha);
    scanf ( "%[^\n]", expressao);

    tamanho = strlen(expressao);

    if (tamanho<=4) {
        printf("Nada foi inserido");
        return 0;
    }
    funcionou = verificador_de_parenteses(pilha, tamanho, expressao);
    funcionou? printf("Esta certo") : printf("esta errado");

    return 0;
}
