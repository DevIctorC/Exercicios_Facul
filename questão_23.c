#include <stdio.h>

int main(){

    int n = 1, d = 0, f = 1,  e = 0, x;

    printf("Digite um valor para X: ");
    scanf("%d", & x);

    while (d <= 20)
    {
        e = e + (n/f);
        n = n * x;
        d += 1;
        f = f * d;
    }
    
    printf("Exponencial de X= %d", e);



    return 0;
}