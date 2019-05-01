//Programas sobre manejo de memoria
#include<stdio.h>
int main(){
    char palabra1[
    ];
    char palabra2[5];
    int salir;
    printf("Dime algo: ");
    scanf("%s",palabra1);
    printf("\nDime algo mas: ");
    scanf("%s",palabra2);
    printf("direccion palabra1 = %x ",palabra1);
    printf("palabra1 = %c\n",*(palabra1+1));
    printf("direccion palabra2 = %x ",palabra2);
    printf("palabra2 = %c  ",*(palabra2+1));
    scanf("%i",&salir);
}

//En primer lugar leo dos palabras dadas por el usuario. Luego obtengo la posicion de memoria de cada una, así como la segunda letra de las mismas, ambas dos mostradas por pantalla.
