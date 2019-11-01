#include <stdio.h>

#define N_MAX   100

typedef struct{                // registro pessoa
       int  codigo;
       char nome[30];
}INFORMACAO;
       
typedef struct{
       INFORMACAO info[N_MAX];  // dados do registro
       int f;                   // número de registro(s) ocupado(s) na estrutura
}NODO;                          // estrutura do tipo NODO


void inclui_Antes(NODO *lista){
    lista->f = 6;
     int x, y;
     if(lista->f == N_MAX){
         printf("Lista está cheia");
     }else{
     lista->info[0].codigo = 0;
     lista->info[1].codigo = 1;
     lista->info[2].codigo = 2;
     lista->info[3].codigo = 3;
     lista->info[4].codigo = 4;
     printf("Insira a posição em que deseja inserir o dado: ");
     scanf("%d", &x);
     for( int i = 6 ; i > x; i--){
         /*O último vetor que está sem valor recebe o valor da penúltimo posição,
          repete o processo de trás para frente, até o vetor desejado 
          ser substituido e empurrado para frente, e assim possa ser
          alterado*/
          lista->info[i].codigo = lista->info[i - 1].codigo; 
         }   
     printf("Insira o valor");    
     scanf("%i", &lista->info[x].codigo);//insere o valor a ser alterdo
 }

}
void imprime_lista( NODO *lista ){
    lista->f = 6;
    int i;                                // índice do laço
 
    if( lista->f == 0 )                    // verifica se lista vazia
        printf( "\n Lista vazia! " );
    else{
        printf("\n Relatório Geral ----------------------------------------- ");
	    for( i = 0 ; i < lista->f ; i++ ) { // percorre a lista e imprime dados
	         printf( "\n Registro[%d]", i );
	         printf( "\t Código.: %d", lista->info[ i ].codigo );
	    }
    }    
    getchar();                             // parada da tela
}

int main(void)
{
    NODO lista;
    inclui_Antes(&lista);
    imprime_lista(&lista);
    
}




