#include <stdio.h>


void le_Matriz(int m[9][9]){

	int l=0, k=0;
	for(l=0;l<9;l++){
        	for(k=0;k<9;k++){
			scanf("%d", &m[l][k]);
		}
	}
}

int teste_Colunas(int m[9][9]){

	int l=0, k=0, i=0;
	for(l=0;l<9;l++){
		for(k=0;k<9;k++){
            		if(m[l][k]<1 || m[l][k]>9) return 0;
			for(i=0;i<l;i++){
                		if(m[i][k]==m[l][k]) return 0;
			}
		}
	}
	return 1;
}

int teste_Linhas(int m[9][9]){

	int l=0, k=0, i=0;
	for(l=0;l<9;l++){
        	for(k=0;k<9;k++){
            		if(m[l][k]<1 || m[l][k]>9) return 0;
            		for(i=0;i<k;i++){
                		if(m[l][i]==m[l][k]) return 0;
            		}
        	}
	}
	return 1;
}

int teste_3x3(int m[9][9], int num_Linha, int num_Coluna){

	int l=0, i=0, j=0, k=0, V[9]={0};
	for(l=num_Linha; l<num_Linha + 3; l++){
        	for(k=num_Coluna; k<num_Coluna + 3; k++){
            	for(j=0;j<i;j++){
                	if(V[j]==m[l][k]) return 0;
            	}
            	V[i]=m[l][k];
            	i++;
        	}
    	}
	return 1;
}

int teste_SUDOKU(int m[9][9]){

    int l, k;
    if(teste_Colunas(m)&&teste_Linhas(m)){
        for(l=0; l<9; l+=3){
        	for(k=0; k<9; k+=3){
                if(!teste_3x3(m, l, k)) return 0;
            }
        }
        return 1;
    }
    return 0;
}

int main(){

	int m[9][9], i=0, l=0, k=0, x, c;
	scanf("%d", &c);
	for(i=1; i<=c; i++){
        	le_Matriz(m);
        	printf("Instancia %d\n", i);
        	if(teste_SUDOKU(m)) printf("SIM\n");
        	else printf("NAO\n");
        	printf("\n");
	}
	return 0;
}
