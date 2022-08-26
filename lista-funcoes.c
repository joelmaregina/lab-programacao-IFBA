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

//  03. Faça um programa que tenha uma função que recebe um número inteiro e retorna o fatorial deste número. 
//  Esta função deve ainda verificar se é possível calcular o fatorial, se não for, ela deve de alguma forma retornar
//  para a main que deu algum erro. A função main deve solicitar o valor do usuário e imprimir o fatorial dele, 
//  ou se não é possível calcular o fatorial.
#include <stdio.h>


int fatorial(int valor)
{
    int fatorial = 1;
    for(int i = 1; i <= valor; i++){
  
        fatorial = fatorial * i;
    }
    return fatorial;
}

int main()
{
    int i;
    int valor;
    int resultado;
    
    printf("Digite o número de entrada: \n");
    scanf("%d", &valor);
    
    if (valor < 0){
        printf("Não é possível fazer fatorial de um número negativo");
    }else{
        resultado = fatorial(valor);
        
        printf("%d", resultado);
        
    } 
}

//  04. Crie um programa que tenha uma função ler 3Numeros. Essa função deve ler três números do usuário e retornar os três números. 
//  A função main deve imprimir esses três números. Utilize vetor para fazer o retorno.
#include <stdio.h>
#define TAM 3

void ler3Numeros(int array[])
{
    int i, valor;

    for(i = 0; i < TAM; i++){
        printf("Digite o número:");
        scanf("%d", &valor);
        array[i] = valor;
    }
}

int main()
{
    int resultado[TAM];
    
    ler3Numeros(resultado);
    
    for(int i = 0; i < TAM; i++){
        printf("%d\n", resultado[i]);
    }
}

// //  04. Crie um programa que tenha uma função ler 3Numeros. Essa função deve ler três números do usuário e retornar os três números. 
// //  A função main deve imprimir esses três números. Utilize vetor para fazer o retorno.
// #include <stdio.h>
// #define TAM 3

// void ler3Numeros(int array[TAM])
// {
//     int i;
//     //array[TAM];
    
//     for(i = 0; i < TAM; i++){
//         printf("Digite o número:");
//         scanf("%d", &array[i]);
//     }
// }

// int main()
// {
//     int resultado[TAM];
//     ler3Numeros(resultado[TAM]);
    
//     for(int i = 0; i < TAM; i++){
//         printf("%d\n", resultado[i]);
//     }
// }


// 05. Crie um programa que tenha uma função ler4Numeros.
// Essa função deve ler quatro números do usuário e retornar os quatro números.
// A função main deve imprimir esses quatro números. Utilize struct para fazer o retorno.
#include <stdio.h>
#define TAM 4

typedef struct numero{
    int numeros[TAM];
}Numeros;

Numeros ler4Numeros()
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
    Numeros resultado = ler4Numeros();
    
    for(int i = 0; i < TAM; i++){
        printf("%d\n", resultado.numeros[i]);
    }
}


