#include <iostream>
#include <stdio.h>

/*
Nota: nenhuma informação contida aqui 'uma verdade absoluta, se eu estiver errado
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
int main(){

    // Aqui a váriavel é declarada como um inteiro 
    int numero;

    int resposta;

    //printf("Dá para usar o printf para printar\n")

    // Escreve na tela a mensagem, "\n" é um comando em bits, para pular de linha
    // Entendendo os merge(s)
    std::cout << "\n Um print no c é muito dificil (de 0 a 10)? \n";

    std:: cin >> resposta;

    std:: cout << "Sério que " << resposta << "?\n\n";

    std::cout << "Bem vindo ao meu programa de estudo em c \n\n";

    std:: cout << "Digite um número como exemplo, por favor... ";

    // cin vai espera o que o usuário digitar e vai atribuir a váriavel numero
    std:: cin >> numero;
    
    // por fim vai escrever na tela a mensagem e a váriavel digitada
    std:: cout << "Número digitado foi " << numero << "\n";

    // Todo programa precisa retornar algo
    return 0;

}