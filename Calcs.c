#include <stdio.h>
#include <stdbool.h>
#include <math.h>

//Projeto inicial de teste de algoritmos para uma calculadora simples em C.
float somaVal(float valX, int valY) {
    float result = valX + valY;
    return result;
    
}
float subVal(float valX, int valY) {
    float result = valX - valY;
    return result;
    
}
float multVal(float valX, int valY) {
    float result = valX * valY;
    return result;
    
}
float divVal(float valX, int valY) {
    float result = valX / valY;
    return result;
    
}

float exponencial(float base, float exp) {
    float resultado = 1.0; //Inicializa a variavel resultado com o valor 1, que será multiplicado pela base

    if (exp > 0) 
    {
        for (int i = 0; i < exp; ++i) 
        {
            resultado *= base;
        }
    }
    
    else if (exp < 0) 
    {
        for (int i = 0; i > exp; --i) {
            resultado /= base;
        }
    }

    return resultado;
}

float raizQuad(float valX) {
    if (valX >= 0) 
    {
        return sqrt(valX);
    } 
    
    else 
    {
        printf("Erro: não existem raízes reais para números negativos!\n");
        float result = sqrt(valX);
        printf("Alternativa em unidade imaginária: %fi\n", result);
        return 0.0;
    }
}

float logN(float valX) {
    if (valX > 0){
       return log(valX);
    } 

    else
    {
        printf("Erro: impossível calcular o logaritmo de um número não positivo!\n");
        return 0.0;
    }
    
}

float senx(float x) {
    return sin(x);
}

float cosx(float x) {
    return cos(x);
}

float tanx(float x) {
    return tan(x);
}

// Função para calcular fatorial
unsigned long long int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

double raizBase(double x, double n) {
    return pow(x, 1.0 / n);
}

int main() {
    int opcao;
    float valorX, resultado;
    int valorY;

    do {
        printf("\nSelecione uma operacao:\n");
        printf("1. Soma\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Exponencial\n");
        printf("6. Raiz Quadrada\n");
        printf("7. Logaritmo Natural\n");
        printf("8. Seno\n");
        printf("9. Cosseno\n");
        printf("10. Tangente\n");
        printf("11. Fatorial\n");
        printf("12. Raiz em base n\n");
        printf("0. Sair\n");

        printf("Digite sua escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite dois valores: ");
                scanf("%f %d", &valorX, &valorY);
                resultado = somaVal(valorX, valorY);
                printf("Resultado: %.6f\n", resultado);
                break;

            case 2:
                printf("Digite dois valores: ");
                scanf("%f %d", &valorX, &valorY);
                resultado = subVal(valorX, valorY);
                printf("Resultado: %.6f\n", resultado);
                break;

            case 3:
                printf("Digite dois valores: ");
                scanf("%f %d", &valorX, &valorY);
                resultado = multVal(valorX, valorY);
                printf("Resultado: %.6f\n", resultado);
                break;

            case 4:
                printf("Digite dois valores: ");
                scanf("%f %d", &valorX, &valorY);
                resultado = divVal(valorX, valorY);
                printf("Resultado: %.6f\n", resultado);
                break;

            case 5:
                printf("Digite a base e o expoente: ");
                scanf("%f %f", &valorX, &valorX);
                resultado = exponencial(valorX, valorX);
                printf("Resultado: %.6f\n", resultado);
                break;

            case 6:
                printf("Digite um valor: ");
                scanf("%f", &valorX);
                resultado = raizQuad(valorX);
                printf("Resultado: %.6f\n", resultado);
                break;

            case 7:
                printf("Digite um valor: ");
                scanf("%f", &valorX);
                resultado = logN(valorX);
                printf("Resultado: %.6f\n", resultado);
                break;

            case 8:
            case 9:
            case 10:
                printf("Digite um valor em radianos: ");
                scanf("%f", &valorX);

                switch (opcao) {
                    case 8:
                        resultado = senx(valorX);
                        break;
                    case 9:
                        resultado = cosx(valorX);
                        break;
                    case 10:
                        resultado = tanx(valorX);
                        break;
                }

                printf("Resultado: %.6f\n", resultado);
                break;

            case 11:
                printf("Digite um valor inteiro não negativo: ");
                scanf("%f", &valorX);
                resultado = fatorial((int)valorX);
                printf("Resultado: %llu\n", (unsigned long long int)resultado);
                break;

            case 12:
                printf("Digite um valor para a base: ");
                scanf("%lf", &valorX);
                printf("Digite um valor para o expoente: ");
                scanf("%lf", &valorY);
                resultado = raizBase(valorX, valorY);
                printf("Resultado: %.6f\n", resultado);
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;

}
