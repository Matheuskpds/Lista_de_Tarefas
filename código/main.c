#include "ListaTarefas.h"

int main(){
    Tarefa tarefa;
    lista_de_tarefas plista_I;
    int resp, resp_II;
    char nova_tarefa[100];
    int loop = 1;
    FLista(&plista_I);
    while(loop){
        printf("=*=*=*=*=* LISTA DE TAREFAS =*=*=*=*=*");
        printf("\n\n");
        printf("[1] inserir elemento na lista \n");
        printf("[2] Imprimir Lista \n");
        printf("[3] Remover tarefa da lista\n");
        printf("[4] encerrar programa\n");
        printf("\n\n");
        printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");
        scanf("%d", &resp);
        getchar();
        switch (resp)
        {
            case 1:
                system("clear");
                printf("Digite uma tarefa: \n");
                fflush(stdin);
                fgets(nova_tarefa, 100, stdin);
                InserirNovaTarefa(&tarefa, nova_tarefa);
                InserirTarefaNaLista(&plista_I, tarefa);
                break;
            case 2:
                system("clear");
                if(LEhVazia(&plista_I) == 1){
                    printf("A lista está vazia.\n");
                }
                else
                    Imprimirlista(&plista_I);
                break;
            case 3:
                system("clear");
                Imprimirlista(&plista_I);
                printf("Qual tarefa deseja remover? \n");
                scanf("%d", &resp_II);
                RemoverTarefa(&plista_I, resp_II, &tarefa);
                break;
            case 4:
                printf("Programa encerrado.\n");
                loop = 0;
                break;
            default:
                break;
        }
        if (resp != 4){
            printf("\n\nAperte uma tecla para continuar: ");
            fflush(stdin);
            getchar();
            system("clear");
        }
    }
}
