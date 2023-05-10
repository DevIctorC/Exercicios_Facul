#include <stdio.h>
#include <math.h>

int main(){

    int N, Ma, Me, S, cont = 1, MD;
    printf("Digite um valor: ");
    scanf("%d", & N);
    Ma = N;
    Me = N;
    S =  N;

    while (cont < 20)
    {
        printf("Digite outro numero: ");
        scanf("%d", & N);

        if(N>Ma){
            Ma = N;
        }
        else{
            Me = N;
        }
        S = S + N; 
        cont += 1;
    }
    
    printf("O maior e: %d e o menor e: %d e a media e: %d", Ma, Me, MD = S / cont);

    return 0;
}