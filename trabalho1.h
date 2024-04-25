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

#ifndef __TRABALHO1_H
#define __TRABALHO1_H

/*============================================================================*/
/* Função do projeto. */

unsigned int definePontoDeAcesso (int n_antenas);

/*----------------------------------------------------------------------------*/
/* Funções auxiliares que DEVEM ser chamadas pelos alunos. */

float pegaX (int a);
float pegaY (int a);
float calculaDistancia(float x1, float y1, float x2, float y2);
int arredondaInteiro(float n);
unsigned int codificaResultado(int ponto_acesso, int distancia);

/*----------------------------------------------------------------------------*/
/* Funções auxiliares que NÃO DEVEM ser chamadas pelos alunos. */

void criaVetorAntenas (int tamanho);
void destroiVetorAntenas ();
void adicionaAntena (int pos, float x, float y);
void mostraAntenas (int n);

/*============================================================================*/
#endif /* __TRABALHO1_H */
