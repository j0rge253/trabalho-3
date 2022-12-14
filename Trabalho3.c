#include<stdio.h>
#include<stdlib.h>

int main(){
    //Variáveis usadas

    unsigned int x[200] = {0}; //
    
    int y;
    int z;
   	int k;
   	int w;
   	int j;
   	int i=0;

   //#########################


    while (i<=5000) {
        printf("Digite um numero: ");
        scanf("%d", &y);
        if(y == -1)
        break;
        x[y / 32] = x[y / 32] | (1 << (y % 32));
        i++;
    }

    printf("\n(ordem crescente)\n");
    i=0;

    while (i <= 5000){
        if((x[i / 32] >> i) & 1){
            printf("%d\n", i);
        }
        i++;
    }

    //#########################
 return 0;
 }
//O Codigo basicamnete vai receber um série de números ate que o usuario digite "-1", depois vai imprimi a todos.
//De maneira crescente e sem repetição.