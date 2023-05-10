#include <stdio.h>

int main(){

    int n1,n2,n3;

    printf("Digite o de n1: ");
    scanf("%d", & n1);

    printf("Digite o de n2: ");
    scanf("%d", & n2);

    printf("Digite o de n3: ");
    scanf("%d", & n3);

    if(n2 + n3 < n1 || n1 + n3 < n2 || n1 + n2 < n3){
        printf("NAO existe triangulo! ");
        return 0;
    }
    if(n1 == n2 && n1 == n3){
        printf("Triangulo equilatero");
        return 0;
    }

    if(n1 == n2 || n1 == n3 || n2 == n3){
        printf("Triangulo Isoceles ");
        return 0;
    }

    else{
        printf("Triangulo Escaleno!");
    }

    return 0;
}