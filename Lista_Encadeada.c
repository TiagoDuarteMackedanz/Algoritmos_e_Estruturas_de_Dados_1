#include <stdio.h>
#include <stdlib.h>

struct list {
    int info;
    struct list* next;
};
typedef struct list List;

/*Inserção no Início: Retorna a Lista Atualizada*/
    List* list_insert(List* l, int i) {
        List* novo = (List*) malloc(sizeof(List));
        novo->info=i;
        novo->next=l;
        return novo;
    }

/*Imprime Valores dos Elementos em Stdout*/
void list_print (List* l) {
    List* p;
    for (p = l; p!= NULL; p = p -> next)
    printf("%d\n", p->info);
}

//Função Principal
int main () {
    List* lista = NULL;
    lista = list_insert(lista, 5);
    lista = list_insert(lista, 7);
    list_print(lista);

    return 0;
}