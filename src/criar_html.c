#include <stdio.h>
#include <stdlib.h>
int main(){
    system("clear");

    FILE *pagina;
    pagina = fopen("files/index.html","a");
    fprintf(pagina,"<html><body><h1>Minha Pagina</h1></body></html>");
    printf("Página criada...\n");
    fclose(pagina);
    system("firefox files/index.html");
    return 0;
}