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

// 06. Crie um programa que tenha uma função ler3Letras. Essa função deve ler três letras do usuário e retornar as três letras. 
// A função main deve imprimir essas três letras.

char ler3Letras(char letras[]);

void main()
{
    char letras[4];
    
    ler3Letras(letras);
    
    printf("O 1º caracter é: %c\nO 2º caracter é: %c\nO 3º caracter é: %c", letras[0], letras[1], letras[2]);
}

char ler3Letras(char letras[])
{
    printf("Digite o 1º caracter: ");
    scanf("%c", &letras[0]);
    getchar();
    printf("Digite o 2º caracter: ");
    scanf("%c", &letras[1]);
    getchar();
    printf("Digite o 3º caracter: ");
    scanf("%c", &letras[2]);
}

//07. Crie um programa que tenha uma função ler3Palavras. Essa função deve ler três palavras do usuário e retornar as três palavras.
// A função main deve imprimir essas três palavras.

char ler3Palavras(char palavra1[], char palavra2[], char palavra3[]){
    printf("Digite a 1º palavra: ");
    fgets(palavra1, 21, stdin);
    getchar();
    printf("Digite a 2º palavra: ");
    fgets(palavra2, 21, stdin);
    getchar();
    printf("Digite a 3º palavra: ");
    fgets(palavra3, 21, stdin);
    getchar();

  
}

void main (){
    char palavra1[21];
    char palavra2[21];
    char palavra3[21];
    
    ler3Palavras(palavra1, palavra2, palavra3);

    printf("Primeira palavra: " );
    puts(palavra1);
    printf("Segunda palavra: " );
    puts(palavra2);
    printf("Terceira palavra: " );
    puts(palavra3);
}

/* 08. Crie um programa que tenha uma função cadastrarCliente. Essa função deve ler os dados do cliente (nome, dataNascimento, cpf, sexo) e 
retornar os dados do cliente. A função main deve imprimir os dados do cliente. */

char cadastrarCliente (char nome[], char dataNascimento[], char cpf[], char sexo[]){
  printf("============ CADASTRO CLIENTES ============ \n");
  printf("Digite o seu nome: \n");
  fgets(nome, 31, stdin);
  printf("Digite sua data de nascimento: \n");
  fgets(dataNascimento, 11, stdin);
  getchar();
  printf("Digite seu CPF: \n");
  fgets(cpf, 16, stdin);
  printf("Digite seu sexo: \n");
  fgets(sexo, 3, stdin);
  
}

void main (){
    char nome[31];
    char dataNascimento[11];
    char cpf[16];
    char sexo[3];
    
    cadastrarCliente(nome, dataNascimento, cpf, sexo);
    
    printf("============ CLIENTE CADASTRADO! ============ \n");
    printf("NOME: ");
    puts(nome);
    printf("DATA DE NASCIMENTO: ");
    puts(dataNascimento);
    printf("CPF: ");
    puts(cpf);
    printf("SEXO: ");
    puts(sexo);
}

#include <stdio.h>
// Evolua o programa que tem a função cadastrarCliente, para fazer as validações dos dados.
// Cada validação deve ser feita em uma função diferente, conforme lista abaixo.
// A função cadastrarCliente deve chamar cada uma dessas funções.
// A função main deve imprimir se o cadastro foi realizado com sucesso ou se houve erro, informando onde foi o erro:
//     • função validarNome: recebe o nome digitado, e valida se nome tem até 20 caracteres;
//     • função validarSexo: recebe o sexo digitado, e valida é um sexo válido (opções: m e M para masculino; f e F para feminino, o e O para outro).
//     • função validarCPF: recebe o cpf digitado, e valida é um cpf válido;
//     • função validarNacimento: recebe o data digitada, e valida é uma data válida.
#define VALIDO 1
#define INVALIDO 0

char cadastrarCliente (char nome[], char dataNascimento[], char cpf[], char sexo[]){
  printf("============ CADASTRO CLIENTES ============ \n");
  printf("Digite o seu nome: \n");
  fgets(nome, 31, stdin);
  validarNome(nome);
  
  printf("Digite sua data de nascimento: \n");
  fgets(dataNascimento, 11, stdin);
  getchar();
  validarNascimento(dataNascimento);
  
  printf("Digite seu CPF: \n");
  fgets(cpf, 16, stdin);
  validarCPF(cpf);
  
  printf("Digite seu sexo: \n");
  fgets(sexo, 3, stdin);
  validarSexo(sexo);
  
}

int validarNome(nome)
{
    int valor = INVALIDO;
    
    return valor;
}


int validarNascimento()
{
    int valor = INVALIDO;
    
    return valor;
}

int validarCPF()
{
    int valor = INVALIDO;
    
    return valor;
}

int validarSexo(dataNascimento)
{
    int valor = INVALIDO;
    
    return valor;
}

void main()
{
    int valorNome = validarNome(valorNome);
    imt valorIdade =  validarNascimento(valorIdade);
    int valorCPF = validarCPF(valorCPF);
    int valorSexo = validarSexo(valorSexo);
    
    if (valorNome == VALIDO && valorIdade == VALIDO && valorCPF == VALIDO && valorSexo == VALIDO ){
        printf("========= CLIENTE CADASTRADO! ========= \n");
    };
    if (valorNome == INVALIDO) printf("Cliente não cadastrado: Nome inválido! \n");
    if (valorIdade == INVALIDO) printf("Cliente não cadastrado: Idade inválida! \n");
    if (valorCPF == INVALIDO) printf("Cliente não cadastrado: CPF inválido! \n");
    if (valorSexo == INVALIDO) printf("Cliente não cadastrado: Sexo inválido! \n");
}

