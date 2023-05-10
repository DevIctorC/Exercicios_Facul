/*Dados três valores A, B e C de uma equação do segundo grau (Ax2+Bx+C=0), 
faça um fluxograma para calcular o valor
das raízes, se para os valores fornecidos for possível determinar raízes reais.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, func;
    float x1,x2;
    
    printf("Digite o valor de A: ");
    scanf("%d", & a);
    if(a == 0){
        printf("Não é uma equação do segundo grau!!");
        return 0;
    }

    printf("Digite o valor de B: ");
    scanf("%d", & b);
    
    printf("Digite o valor de C: ");
    scanf("%d", & c);
    
    if(b == 0 && c == 0){
        printf("A equação é incompleta \nO valor de x é igual a 0");
        return(0);
    }
    
    func = powf(b,2) - (4*a*c);
    printf("Valor de delta: %d ", func);
    
    if(func > 0){
        x1 = (-(b) + sqrt(func)) / (2 * a);
        printf("\nValor para x+:  %.2f", x1);

        x2 = ((-1)*b - sqrt(func)) / (2 * a);
        printf("\nValor para X-:  %.2f", x2);
    }

    else if (func == 0)
    {
        x1 = -(b)/(2*a);
        printf("\nSo existe um valor real = %.2f", x1);
        return 0;
    }
    
    else{
        printf("\nNao possui raizes");
    }

    return 0;
}
