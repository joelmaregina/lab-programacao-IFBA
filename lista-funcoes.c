//  01. Crie um programa que tenha uma função soma e a função main. 
//  A função main deve ler dois valores, enviar para a função soma.
//  A função soma deve realizar a soma e retornar o valor. 
//  A Função main deve imprimir o resultado da soma.
#include <stdio.h>
int soma(int a, int b);
int main()
{
    int a, b;
    int resultado;
    printf("Digite os valores a serem somados: ");
    scanf("%d", &a);
    scanf("%d", &b);
    resultado = soma(a,b);
    printf("%d", resultado);
}

int soma(int a, int b)
{
    return a + b;
}

//  02. Crie um programa que tenha uma função subtrai e a função main.
//  A função main deve ler três valores, enviar para a função subtrai.
//  A função subtrai deve realizar a subtração dos três valores (primeiro menos o segundo menos o terceiro) e retornar o valor. 
//  A Função main deve imprimir o resultado da subtração.
#include <stdio.h>
int subtrai(int a, int b, int c);
int main()
{
    int a, b, c;
    int resultado;
    printf("Digite os valores a serem trabalhados: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    resultado = subtrai(a,b,c);
    printf("%d", resultado);
}

int subtrai(int a, int b, int c)
{
    return a - b - c;
}

//  04. Crie um programa que tenha uma função ler 3Numeros. Essa função deve ler três números do usuário e retornar os três números. 
//  A função main deve imprimir esses três números. Utilize vetor para fazer o retorno.
#include <stdio.h>
#define TAM 3

typedef struct numero{
    int numeros[TAM];
}Numeros;

Numeros ler3Numeros()
{
    int i;
    Numeros numero1;
    
    for(i = 0; i < TAM; i++){
        printf("Digite o número:");
        scanf("%d", &numero1.numeros[i]);
        
    }
    return numero1;
    
}

int main()
{
    Numeros resultado = ler3Numeros();
    
    for(int i = 0; i < 3; i++){
        printf("%d\n", resultado.numeros[i]);
    }
}


