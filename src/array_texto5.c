#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    float nota1, nota2, nota3, nota4, media;
    char nome[100];
    
    printf("Digite o nome do aluno:\n");
    fgets(nome,100,stdin);

    printf("Digite a primeira nota do aluno:\n");
    scanf("%f",&nota1);

    printf("Digite a segunda nota do aluno:\n");
    scanf("%f",&nota2);

    printf("Digite a terceira nota do aluno:\n");
    scanf("%f",&nota3);

    printf("Digite a quarta nota do aluno:\n");
    scanf("%f",&nota4);

    media = (nota1+nota2+nota3+nota4)/4;

    if(media >= 7){
        printf("O aluno %s com nota média %.2f está aprovado\n",nome,media);
    }
    else if(media <=4){
        printf("O aluno %s com nota média %.2f está Reprovado\n",nome,media);
    }
    else{
        printf("O aluno %s com nota média %.2f está em Recuperação\n",nome,media);
    }
    return 0;

}