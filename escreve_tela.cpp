#include <stdio.h>
#include <stdlib.h> 

/*
Nota: nenhuma informação contida aqui é uma verdade absoluta, se eu estiver errado
me corrija, que estou aprendendo


# include 
é uma fomar de incluir bibiotecas para dentro do meu programa


<iostream>
é a blioteca de cout que me da asaida na tela

pelo que entendi no c ou c++ até saidas básica na tela precisa ser incluidas pelo 
# include


------------------------------------------

Dentro de main roda tudo que faz parte do programa
básicamente eu penso que seja uma funçõ declara obrigatória do c

------------------------------------------

no programa acredito que tudo (ou quase tudo), tem que terminar em ";",
mas preciso avançar nos estudo para ter certeza
*/
int main(int argc, char* argv[]){

    // Aqui a váriavel é declarada como um inteiro 

    short int resposta;

    printf("Dá para usar o printf para escrever na tela\n");

    // Escreve na tela a mensagem, "\n" é um comando em bits, para pular de linha
    // Entendendo os merge(s)
    printf("\n Um print no c é muito dificil (de 0 a 10)? \n");

    scanf("%hd", &resposta);

    printf("\n Sério que %hd?\n", resposta);

    // Todo programa precisa retornar algo
    return 0;

}
