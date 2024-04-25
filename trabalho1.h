/*============================================================================*/
/* ICSF13 - 2024-1 - TRABALHO 1                                               */
/*----------------------------------------------------------------------------*/
/* Bogdan T. Nassu                                                            */
/* Leyza E. B. Dorini                                                         */
/* Daniel F. Pigatto                                                          */
/*============================================================================*/
/** Fun��es pedidas e auxiliares para o 1o trabalho da disciplina Fundamentos
 * de Programa��o 1, 1o semestre de 2024, profs. Bogdan T. Nassu, Leyza E. B.
 * Dorini e Daniel F. Pigatto, Universidade Tecnol�gica Federal do Paran�. */
/*============================================================================*/

#ifndef __TRABALHO1_H
#define __TRABALHO1_H

/*============================================================================*/
/* Fun��o do projeto. */

unsigned int definePontoDeAcesso (int n_antenas);

/*----------------------------------------------------------------------------*/
/* Fun��es auxiliares que DEVEM ser chamadas pelos alunos. */

float pegaX (int a);
float pegaY (int a);
float calculaDistancia(float x1, float y1, float x2, float y2);
int arredondaInteiro(float n);
unsigned int codificaResultado(int ponto_acesso, int distancia);

/*----------------------------------------------------------------------------*/
/* Fun��es auxiliares que N�O DEVEM ser chamadas pelos alunos. */

void criaVetorAntenas (int tamanho);
void destroiVetorAntenas ();
void adicionaAntena (int pos, float x, float y);
void mostraAntenas (int n);

/*============================================================================*/
#endif /* __TRABALHO1_H */
