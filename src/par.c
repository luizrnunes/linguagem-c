#include <stdio.h>
//Utilizaremos  a biblioteca stdlib que guarda
//os comandos de limpar a tela e pause
#include <stdlib.h>

int main(){
    //comando para limpar a tela em linux
    system("clear");
    int n;
    printf("Digite um número inteiro e tecle enter\n");
    scanf("%d",&n);
    // Se o valor digitado pelo usuário dividido por 2 e 
    // restar zero(0), então este valor é Par
    if( n % 2 == 0 ){
        printf("O número %d que você digitou é Par\n",n);
    }
    return 0;
}