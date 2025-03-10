#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct lista_chamada{
    char aluno[22];
    struct lista_chamada *prox;
}lista_chamada;

lista_chamada *criar_no(lista_chamada *lst, char *nome){
    lista_chamada *novo=(lista_chamada*)malloc(sizeof(lista_chamada));
    lista_chamada *p=lst;
    strcpy(novo->aluno,nome);
    novo->prox=NULL;
    if(lst==NULL) return novo;
    while(p->prox!=NULL)    p=p->prox;
    p->prox=novo;
    return lst;
}

void ordena_lst(lista_chamada *lst){
    if(lst==NULL)   return;
    lista_chamada *p, *t;
    char temp[22];
    for(p=lst; p!=NULL; p=p->prox){
        for(t=p->prox; t!=NULL; t=t->prox){
            if(strcmp(p->aluno, t->aluno)>0){
                strcpy(temp, p->aluno);
                strcpy(p->aluno, t->aluno);
                strcpy(t->aluno, temp);
            }
        }
    }
}

void imprime_k(lista_chamada *lst, int k){
    int i=1;
    lista_chamada *p=lst;
    for(i=1; i<k; i++){
        p=p->prox;
    }
     printf("%s\n", p->aluno);
}

void liberar_lista(lista_chamada *lst){
    lista_chamada *p=lst, *t;
    while(p!=NULL){
        t=p->prox;
        free(p);
        p=t;
    }
}

int main(){
    int n, k, i=0;
    lista_chamada *lst=NULL;
    char nomes[22];
    scanf("%d%d", &n, &k);
    getchar();
    for(i=0; i<n; i++){
        fgets(nomes, sizeof(nomes), stdin);
        nomes[strcspn(nomes, "\n")]='\0';
        lst= criar_no(lst, nomes);
    }
    ordena_lst(lst);
    imprime_k(lst, k);
    liberar_lista(lst);
    return 0;
}
