/*============================================================================*/
/* ICSF13 - 2024-1 - TRABALHO 1                                               */
/*----------------------------------------------------------------------------*/
/* Bogdan T. Nassu                                                            */
/* Leyza E. B. Dorini                                                         */
/* Daniel F. Pigatto                                                          */
/*============================================================================*/
/** Funções pedidas e auxiliares para o 1o trabalho da disciplina Fundamentos
 * de Programação 1, 1o semestre de 2024, profs. Bogdan T. Nassu, Leyza E. B.
 * Dorini e Daniel F. Pigatto, Universidade Tecnológica Federal do Paraná. */
/*============================================================================*/

#include <stdio.h>
#include <stdlib.h>

#include "trabalho1.h"

/*============================================================================*/
/* ANTENAS                                                                    */
/*============================================================================*/
/* Tipos internos. */

typedef struct
{
    float x;
    float y;
} Coordenada;

Coordenada* antenas; /* Esta variável é global somente para isolar parte do trabalho dos alunos. */

/*----------------------------------------------------------------------------*/
/** Funções para manipular o vetor de antenas. */

void criaVetorAntenas (int tamanho)
{
    antenas = (Coordenada*) malloc (sizeof (Coordenada) * tamanho);
}

void destroiVetorAntenas ()
{
    free (antenas);
}

void adicionaAntena (int pos, float x, float y)
{
    antenas [pos].x = x;
    antenas [pos].y = y;
}

void mostraAntenas (int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf ("(%.4f,%.4f)\n", antenas [i].x, antenas [i].y);
}

float pegaX (int a) {return (antenas [a].x);}
float pegaY (int a) {return (antenas [a].y);}

/*============================================================================*/

unsigned int definePontoDeAcesso(int n_antenas)
{
    int i, j, resultado, indice_antena_ideal = 0;
    float antena_i_x, antena_i_y, antena_j_x, antena_j_y, distancia;
    float maior_distancia_antenas = 0;
    float menor_distancia_maxima = 9999999.9;


    for(i = 0; i < n_antenas; i++)
    {
        antena_i_x = pegaX(i);
        antena_i_y = pegaY(i);

        for(j = i; j < n_antenas; j++)
        {
            antena_j_x = pegaX(j);
            antena_j_y = pegaY(j);
            distancia = calculaDistancia(antena_i_x, antena_i_y, antena_j_x, antena_j_y);

            if(distancia > maior_distancia_antenas)
                maior_distancia_antenas = distancia;
        }

        if(maior_distancia_antenas < menor_distancia_maxima)
        {
            menor_distancia_maxima = maior_distancia_antenas;
            indice_antena_ideal = i;
        }

        maior_distancia_antenas = 0;
    }
    resultado = codificaResultado(indice_antena_ideal, arredondaInteiro(menor_distancia_maxima));
    return resultado;
}

float calculaDistancia(float x1, float y1, float x2, float y2)
{
    float x = (x2 - x1) * (x2 - x1);
    float y = (y2 - y1) * (y2 - y1);
    float distancia = sqrt((x + y));
    return distancia;
}

int arredondaInteiro(float n)
{
    return (int)(n + 0.5);
}
unsigned int codificaResultado(int ponto_acesso, int distancia)
{
    unsigned int resultado = (ponto_acesso << 24) | distancia;
    return resultado;
}
