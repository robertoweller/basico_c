#include <stdio.h>

int main() {
    // Um printf basico
    printf("\nSistema em teste, so para entender os laços em C\n");

    int A = 0, B = 7, C = 4, D = 3;
    
    for (A = 0; A < B; A++)
    {
        D = D + 1;
    }
    // Assim que mistura strings e variaveis dentro do printf
    printf("\nResultado para for >%d< %s", D, "\n\n");

    //for (A = 0; A <= C; A++)
    //{
    //    D = D + 2;
    //}
    
    if (D >= 20)
    {
        printf("\n%d %s", D, " - ");
        printf("SISTEMA OPERACIONAIS\n");
    }
    else
    {
        printf("%d %s", D, " - ");
        printf("REDES DE COMPUTADORES\n");
    }
    
    return 0;
}

