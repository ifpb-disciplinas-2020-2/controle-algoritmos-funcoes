#include <stdio.h>
int somarDoisNumeros(int primeiro, int segundo){
    // int resultado;
    // resultado = primeiro+segundo;
    // return resultado;
        
        return primeiro + segundo;
}
int main(){
    int a =7, b=9;
    //chamar a função
    int soma = somarDoisNumeros(a, b); //a+b
    printf("Soma: %d\n", soma);
    return 0; //system(pause);
}