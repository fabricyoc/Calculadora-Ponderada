#include <stdio.h>
#include <stdlib.h>

/*
##############################################
########### Author: Fabricyo Costa ###########
##############################################
*/

float QuantoPreciso(float mediaUm)
{
    float calcMediaParcialUm, resultadoPontos, resultadoFinal;
    calcMediaParcialUm = (mediaUm * 200) / 40;
    resultadoPontos = (300 - calcMediaParcialUm) / 3;
    resultadoFinal = (resultadoPontos * 60) / 100;
    printf("\n\nNa 2ª etapa você precisa de %.2f pontos para passar.\nE obter média de %.2f pontos.", resultadoPontos, resultadoFinal);
}

int main()
{
    int opcao;
    float notas[4];
    float mediaUm, mediaDois, mediaGeral;

    do
    {    
        system("clear");
        puts("*** \tMÉDIA PONDERADA\t ***");
        puts("\n- PRIMEIRA ETAPA -");
        
        for(int i =0; i < 4; i++)
        {
            printf("Digite a %iª nota: ", i+1);
            scanf("%f", &notas[i]);
            mediaUm = (notas[0] + notas[1]) / 5;
            mediaDois = (((notas[2] + notas[3])/2)*3)/5;

            if(notas[i] == notas[1] && notas[i] != notas[2])
            {
                printf("\n- SEGUNDA ETAPA -\n");
            }
        }
        printf("\nMédia primeira etapa: %.2f", mediaUm);    
        printf("\nMédia segunda etapa: %.2f", mediaDois);
        mediaGeral = mediaUm + mediaDois;
        printf("\nMÉDIA FINAL: %.2f", mediaGeral);

        if(mediaDois == 0)
        {
            QuantoPreciso(mediaUm);
        }
        
        printf("\n");
        
        printf("\nDeseja realizar uma nova consulta (1-SIM / 0-NÃO)? ");
        scanf("%i", &opcao);
    } while(opcao == 1);

    return 0;
}
