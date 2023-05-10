#include <stdio.h>

int main(){

    float n = 1, d = 0, f = 1, cos = 0, x;

    printf("Digite o valor de X: ");
    scanf("%f", & x);
    
    while (d <= 20 )
    {
        cos = cos + (n/f);
        n = n * x * x * (-1);
        d += 2;
        f = f * d * (d - 1);
    }
    
    printf("Cosseno de %f = %f\n ", x, cos);


    return 0;
}