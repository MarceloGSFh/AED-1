#include <stdio.h>

int main(){
    float x, y;
    int s1=1, s2=2;
    scanf("%f%f", &x, &y);
    if(y==0&&x==0){
        printf("Origem\n");
        }
    else{
        if(x==0){
            printf("Eixo Y\n");
            }
        else{
            if(y==0){
                printf("Eixo X\n");
                }
            else{
                if(x>0) x=s1;
                else if(x<0) x=s2;
                switch((int)x){
                case 1:{
                    if(y>0) printf("Q1\n");
                    else if(y<0) printf("Q4\n");
                    break;}
                case 2:{
                    if(y>0) printf("Q2\n");
                    else if(y<0) printf("Q3\n");
                    break;}
                    }
                }
            }
        }
    return 0;
}
