#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cel {
    char nome[20];
    struct cel *seg;
};
typedef struct cel amigos;

amigos *nova_cel(char *nome) {
    amigos *novo = (amigos *)malloc(sizeof(amigos));
    strcpy(novo->nome, nome);
    novo->seg = NULL;
    return novo;
}

amigos *add_Amigo(amigos *p, char *nome) {
    amigos *novo = nova_cel(nome);
    amigos *r = p;
    if (p == NULL) return novo;
    while (r->seg != NULL) {
        r = r->seg;
    }
    r->seg = novo;
    return p;
}

amigos *ler_Nomes(char *n) {
    amigos *p = NULL;
    char nome[20];
    int i = 0, j = 0;
    while (n[i] != '\0') {
        if (n[i] == ' ' || n[i] == '\n') {
            if (j > 0) {
                nome[j] = '\0';
                p = add_Amigo(p, nome);
                j = 0;
            }
        } else nome[j++] = n[i];
        i++;
    }
    if (j > 0) {
        nome[j] = '\0';
        p = add_Amigo(p, nome);
    }
    return p;
}

amigos *nome_ref(amigos *p, char *nref, amigos *lst2) {
    amigos *s, *r, *l;
    if (strcmp(nref, "nao") == 0) {
        amigos *r = p;
        if(r == NULL) return lst2;
        while(r->seg != NULL) r = r->seg;
        r->seg = lst2;
        return p;
    }
    s=NULL;
    r=p;
    while(r!=NULL&&strcmp(r->nome, nref)!= 0) {
        s=r;
        r=r->seg;
    }
    if(r!=NULL){
        if(s==NULL){
            l=lst2;
            while(l->seg!=NULL) l=l->seg;
            l->seg = p;
            return lst2;
        }
        else{
            s->seg=lst2;
            l=lst2;
            while(l->seg!=NULL) l=l->seg;
            l->seg=r;
            return p;
        }
    }
}

void imprime_lst(amigos *p) {
    amigos *r = p;
    while (r != NULL) {
        printf("%s", r->nome);
        if (r->seg != NULL) printf(" ");
        r = r->seg;
    }
    printf("\n");
}

void libera_lst(amigos *p) {
    amigos *temp;
    while (p != NULL) {
        temp = p;
        p = p->seg;
        free(temp);
    }
}

int main() {
    amigos *lst1 = NULL, *lst2 = NULL, *r;
    char n[200], ref[25];
    gets(n);
    lst1 = ler_Nomes(n);
    gets(n);
    lst2 = ler_Nomes(n);
    gets(ref);
    ref[strcspn(ref, "\n")] = 0;
    if (strcmp(ref, "nao") == 0) {
        r = lst1;
        if (r == NULL) lst1 = lst2;
        else {
            while (r->seg != NULL) r = r->seg;
            r->seg = lst2;
        }
    } else {
        lst1 = nome_ref(lst1, ref, lst2);
    }

    imprime_lst(lst1);
    libera_lst(lst1);
    return 0;
}
