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
     char *pauxiliar;
     int nveces;
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
     //Ordenamiento
     for(nveces=1;nveces<5;nveces++){
      for(cont=0;cont<4;cont++){
        if(*lista[cont]>*lista[cont+1]){
            printf("\nCambio %s por %s",lista[cont],lista[cont+1]);
            pauxiliar=lista[cont];
            lista[cont]=lista[cont+1];
            lista[cont+1]=pauxiliar;
        }
      }
     }
     //Despues del ordenamiento
     printf("\nLISTA ORDENADA:");
     for(cont=0;cont<5;cont++){
         printf("\n%s",lista[cont]);
     }
     
     printf("\nToca cualquier tecla: ");
     scanf("%i",&salir);
}

//En primer lugar, además de definir las variables correspondientes, le pregunto al usuario 5 palabras a traves de un "for". 
//La medida de esas palabras la obtengo a traves de la funcion definida en la parte superior del programa(actua como srtlen). 
//Muestro por pantalla la longitud de las mismas, la cual ademas me es necesaria para completar la funcion malloc y asignarle una posicion de memoria a la palabra en la lista. 
//Una vez asignados y definidos los punteros que conducen a las palabras proporcionadas, se muestran por pantalla todas seguidas.
//Por ultimo, a traves del metodo de burbuja ordeno las palabras comparando las longitudes de las mismas y cambiandolas de posicion unas con otras a traves de una palabra auxiliar, mostrando en ultima estancia esta nueva lista ordenada.
