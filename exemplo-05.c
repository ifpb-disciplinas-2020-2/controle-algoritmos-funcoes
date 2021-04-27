#include <stdio.h>
// declaração da função
int somarDoisNumeros(int primeiro, int segundo){
   primeiro = 5; //variável local (passagem por valor)
   return primeiro + segundo; //14
}
int main(){
   int a=7, b=9;
   printf("> a:%d, b:%d\n", a, b);
   int valor = somarDoisNumeros(a, b);
   printf("> a:%d, b:%d, soma: %d\n", a, b, valor); //a = 5 ou 7?
   return 0;
}