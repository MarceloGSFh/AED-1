#include <stdio.h>

int main(){
    int x, y, z, controle;
    scanf("%d%d%d", &x, &y, &z);
    if (x>y&&y>z) controle=1;
    else if(x>z&&z>y) controle =2;
    else if(y>x&&x>z) controle =3;
    else if(y>z&&z>x) controle =4;
    else if(z>x&&x>y) controle =5;
    else if(z>y&&y>x) controle =6;
    switch(controle){
        case 1: printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", z, y, x, x, y, z);break;
        case 2: printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", y, z, x, x, y, z);break;
        case 3: printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", z, x, y, x, y, z);break;
        case 4: printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", x, z, y, x, y, z);break;
        case 5: printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", y, x, z, x, y, z);break;
        case 6: printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", x, y, z, x, y, z);break;
        }


    return 0;
}
