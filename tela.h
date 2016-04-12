// "tela.h"

/*
  Este arquivo contém a definição dos tipos e funções utilizados no Módulo 1 (Tela do Jogo)
*/

#define tamX  25
#define tamY  15


/*  tipo TELA */
typedef struct  tela{
  char  matriz[tamX][tamY]
};TELA

/* funções o módulo 1 (Tela) */

/*  função cria_tela;
- cria a interface onde ocorrerá a dinâmica do jogo.
**/
TELA  * cria_tela();

/*  função mostra_tela;
mostrará a tela na saída quando o jogo for iniciado ou quando ocorrer alguma mudança na matriz
**/
TELA  * mostra_tela(TELA * t);

