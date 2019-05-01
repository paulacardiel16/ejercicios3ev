#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;

int contador(char palabra[]){
     int n_vocales=0;
     int j=0;
     while(palabra[j]!='\0'){
         if(palabra[j]=='a' || palabra[j]=='e' || palabra[j]=='i'|| palabra[j]=='o'|| palabra[j]=='u'){
             n_vocales++;
             }
         j++;
}
     return(n_vocales);
     }


int main(){
    char *lista[5];
    char palabra[30];
    int i, nletras;
    char salida;
    char *aux;
    int nveces;
    
    for(i=0;i<5;i++){
        cout << "Dime una palabra: ";
        cin >> palabra;
        nletras=strlen(palabra);
        lista[i]=(char *)malloc(nletras*sizeof(char)); //lo transformo en decimal, salga lo que salga. Malloc busca posiciones de memoria con esa longitud
        strcpy(lista[i],palabra);}

    cout << "\nLas palabras desordenadas son: \n"; 
    for(i=0;i<5;i++){
        cout << lista[i] << "\n";}
    

    //Metodo burbuja
    for(nveces=1;nveces<5;nveces++){
    for(i=0;i<4;i++){
        if(contador(lista[i])> contador(lista[i+1])){
            aux=lista[i];
            lista[i]=lista[i+1];
            lista[i+1]=aux;
        }       
    }
}
    cout << "\nLas palabras ordenadas son: \n"; 
    for(i=0;i<5;i++){
        cout << lista[i] << "\n";}
    
    cin >> salida;
    return 0;

}
