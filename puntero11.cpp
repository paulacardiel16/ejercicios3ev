//Manejo de punteros
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int medida(char aux[]){
    int l=0;
    while(aux[l]!='\0'){
          l++;    
    }
    return l;
}

int main(){
     char *lista[5];
     int salir;
     char aux[15];
     int cont;
     int l;
     for(cont=0;cont<5;cont++){
         printf("\nNombre amigo %i: ",cont);
         scanf("%s",aux);  
         l=medida(aux);
         printf(" %i\n",l);
         lista[cont]=(char *) malloc(l*sizeof(char)); 
         strcpy(lista[cont],aux);
     }
     for(cont=0;cont<5;cont++){
         printf("\n%s",lista[cont]);
     }
     
     printf("\nToca cualquier tecla: ");
     scanf("%i",&salir);
}

//En primer lugar, además de definir las variables correspondientes, le pregunto al usuario 5 palabras a traves de un "for". 
//La medida de esas palabras la obtengo a traves de la funcion definida en la parte superior del programa(actua como srtlen). 
//Muestro por pantalla la longitud de las mismas, la cual ademas me es necesaria para completar la funcion malloc y asignarle una posicion de memoria a la palabra en la lista. 
//Por ultimo, una vez asignados y definidos los punteros que conducen a las palabras proporcionadas, se muestran por pantalla todas seguidas.
