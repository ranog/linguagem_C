/*  NOME
        chule.c

    SINOPSES
        ./chule
        Informe a nota 1: [valor]
        Informe a nota 2: [valor]
        Informe a nota 3: [valor]
        Informe a nota 4: [valor]
        Media = [valor]

    DESCRIÇÃO
        Media de 4 notas fornecida pelo usuario, usando vetor, com e 
        sem laço for.

----------------------------------------------------------------------

    HISTÓRICO
        - 201624091939: João Paulo, setembro de 2016
            - Aula Parte6.pdf: 
                https://drive.google.com/drive/u/0/folders/0BxRxyxExX8AgWEtrbk1TUVhtckk

*/

#include "stdio.h"
#include "stdlib.h"

int main(){



    float nota[4];
    float media, total = 0;
    int i;

    // SEM laço for:
    printf("Informe a nota 1: ");
        scanf("%f", &nota[0]);
    
    printf("Informe a nota 2: "); 
        scanf("%f", &nota[1]);
    
    printf("Informe a nota 3: "); 
        scanf("%f", &nota[2]);
    
    printf("Informe a nota 4: "); 
        scanf("%f", &nota[3]);

    media = (nota[0] + nota[1] + nota[2] + nota[3])/4.;

    printf("Media = %.1f\n", media);
    //----------------------------------------------------------------

    // COM laço for:
    for(i = 0; i < 4; i++){
        printf("Informe a nota %d: ", i+1);
            scanf("%f", &nota[i]);

            total += nota[i];
    }
    
    media = total/4;

    printf("Media = %.1f\n", media);

    return(0);

}
