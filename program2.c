#include <stdio.h>

int main()
{

    int n,par, impar, num, cont;

    printf("Digite o tamanho da sequencia: ");/* mostra mensagem na tela */
    scanf("%d", &n);

    par=0;
    impar=0;
    cont=0;

    while( cont < n )
    {
    printf("Digite o %do. numero ", cont+1);
    scanf("%d", &num);
    if(num%2 == 0) par = par + 1;
    else impar = impar + 1;
    cont = cont + 1;

    }

    printf("A sequencia é formada por %d numeros pares e %d impares.\n\n", par,impar);

}
