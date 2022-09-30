#include "ListaTarefas.h"

void FLista(lista_de_tarefas* plista){
    plista->primeiro = InicioArranjo;
    plista->ultimo = plista->primeiro;
}

int LEhVazia(lista_de_tarefas* plista){
    return (plista->ultimo == plista->primeiro);
}

int InserirTarefaNaLista(lista_de_tarefas* plista, Tarefa tarefa){
    if(plista->ultimo == MAXTAM){
        return 0;
    }
    plista->tarefa[plista->ultimo] = tarefa;
    plista->ultimo++;
    return 1;
}

int RemoverTarefa(lista_de_tarefas* plista, int posicao, Tarefa *tarefa){
    if(posicao < plista->primeiro || posicao >= plista->ultimo)
        return 0;
    *tarefa = plista->tarefa[posicao];
    for(int i=posicao; i < (plista->ultimo-1); i++){
        plista->tarefa[i] = plista->tarefa[i+1];
    }
    plista->ultimo--;
    return 1;
}

void Imprimirlista(lista_de_tarefas* plista){
    printf("Elementos da lista: \n");
    for(int i = plista->primeiro; i < plista->ultimo; i++){
        printf("%d - %s\n", i, plista->tarefa[i].nova_tarefa);
    }
    printf("\n");
}

void InserirNovaTarefa(Tarefa* tarefa, char *n){
    strcpy(tarefa->nova_tarefa, n);
}