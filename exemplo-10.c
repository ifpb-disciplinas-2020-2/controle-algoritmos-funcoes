/*
Fatorial: 6 -> 6 * fatorial(5) -> 6 * 24 -> 720
Fatorial: 5 -> 5* fatorial (4) -> 5 * 24
Fatorial: 4 -> 4* fatorial (3) -> 4 * 6
Fatorial: 3 -> 3* fatorial (2) -> 3 * 2 
Fatorial: 2 -> 2* fatorial (1) -> 2 * 1
Fatorial: 1 -> 1
*/
#include <stdio.h>
int fatorial (int numero){
    printf("Fatorial: %d\n", numero);
    if(numero ==1) return 1;
    return numero * fatorial(numero-1); 
}
int main(){
    int numero =6;
    int fator =fatorial(numero);
    printf("> Fatorial: %d\n", fator);
    return 0; //system(pause);
}

