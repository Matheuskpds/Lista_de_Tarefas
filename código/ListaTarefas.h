#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define InicioArranjo 0
#define MAXTAM 20

typedef struct{
    char nova_tarefa[100];
}Tarefa;

typedef struct{
    Tarefa tarefa[MAXTAM];
    int primeiro, ultimo;
}lista_de_tarefas;

void FLista(lista_de_tarefas* plista);
int LEhVazia(lista_de_tarefas* plista);
int InserirTarefaNaLista(lista_de_tarefas* plista, Tarefa tarefa);
int RemoverTarefa(lista_de_tarefas* plista, int posicao, Tarefa *tarefa);
void Imprimirlista(lista_de_tarefas* plista);
void InserirNovaTarefa(Tarefa* tarefa, char *n);