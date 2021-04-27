#include <stdio.h>
//assinatura da função (protótipo)
int somarDoisNumeros(int primeiro, int segundo);
int main(){
    int a =8, b=9;
    //chamar a função
    int soma = somarDoisNumeros(a, b); //a+b
    printf("Soma: %d\n", soma);
    return 0; //system(pause);
}
//declaração da função
int somarDoisNumeros(int primeiro, int segundo){
    int resultado;
    resultado = primeiro+segundo;
    return resultado;
}