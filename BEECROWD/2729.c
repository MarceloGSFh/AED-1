#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lista{
    char item[21];
    struct lista *seg;
} lista;

lista *nova_cel(char *item){
    lista *novo=(lista *)malloc(sizeof(lista));
    if(!novo){
        exit(1);
    }
    strcpy(novo->item, item);
    novo->seg=NULL;
    return novo;
}

int contem(lista *p, char *item){
    while(p!=NULL){
        if(strcmp(p->item, item)==0){
            return 1;
        }
        p = p->seg;
    }
    return 0;
}

lista *add_itens(lista *p, char *item){
    if(contem(p, item)){
        return p;
    }
    lista *novo=nova_cel(item);
    lista *r=p;
    if (p==NULL) return novo;
    while(r->seg!=NULL){
        r=r->seg;
    }
    r->seg=novo;
    return p;
}

lista *ler_itens(char *n){
    lista *p=NULL;
    char item[21];
    int i=0, j=0;
    while(n[i]!='\0'){
        if(n[i]==' ' || n[i]=='\n'){
            if(j > 0){
                item[j]='\0';
                p=add_itens(p, item);
                j=0;
            }
        }
        else{
            item[j++]=n[i];
            if(j>=21){
                exit(1);
            }
        }
        i++;
    }
    if(j>0){
        item[j]='\0';
        p=add_itens(p, item);
    }
    return p;
}

lista *ordena_lista(lista *p){
    if(p==NULL || p->seg==NULL)return p;

    int trocado;
    lista *atual, *proximo;
    char temp[21];

    do{
        trocado=0;
        atual=p;
        while(atual->seg!=NULL){
            proximo = atual->seg;
            if(strcmp(atual->item, proximo->item)>0){
                strcpy(temp, atual->item);
                strcpy(atual->item, proximo->item);
                strcpy(proximo->item, temp);
                trocado=1;
            }
            atual = atual->seg;
        }
    }while(trocado);
    return p;
}

void imprime_lista(lista *p){
    while(p!=NULL){
        printf("%s ", p->item);
        p=p->seg;
    }
    printf("\n");
}

void libera_lista(lista *p){
    while(p!=NULL){
        lista *temp=p;
        p=p->seg;
        free(temp);
    }
}

int main(){
    int n;
    lista *lst;
    char itens[1000];
    if (scanf("%d\n", &n)!=1){
        return 1;
    }
    for (int i = 0; i < n; i++) {
        if(!fgets(itens, sizeof(itens), stdin)){
            return 1;
        }
        itens[strcspn(itens, "\n")]='\0';
        lst = ler_itens(itens);
        lst = ordena_lista(lst);
        imprime_lista(lst);
        libera_lista(lst);
    }
    return 0;
}

