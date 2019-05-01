#include <iostream>
using namespace std;

int main(){
    int x; x=3;
    int y; y=5;
    char salida;
    int* px; //puntero que lleva a x
    
    printf ("x=%X y=%X", &x,&y); //Me da la poscion de memoria 
    
    cin >> salida;
    return 0;
}
