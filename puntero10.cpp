//Manejo de punteros
#include<stdio.h>
#include<stdlib.h>

int main(){
     char *lista[3];
     int salir;
     lista[0]=(char *) malloc(8*sizeof(char)); 
     lista[1]=(char *) malloc(7*sizeof(char));
     lista[2]=(char *) malloc(9*sizeof(char)); 
     printf("\nPrimer rey mago: ");
     scanf("%s",lista[0]);
     printf("\nSegundo rey mago: ");
     scanf("%s",lista[1]);     
     printf("\nTercero rey mago: ");
     scanf("%s",lista[2]);
     printf("\nLOS TRES REYES MAGOS SON: ");
     printf("%s, ",lista[0]);
     printf("%s y ",lista[1]);
     printf("%s",lista[2]);
     printf("\nToca cualquier tecla: ");
     scanf("%i",&salir);
}

//Defino una lista a traves de punteros que almancenen la posicion de memoria de las tres palabras que me propociona el usuario, una para cada rey mago, siendo estas mostradas en pantalla al final del codigo proporcionado.
