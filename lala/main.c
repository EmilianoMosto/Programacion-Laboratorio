#include <stdio.h>
#include <stdlib.h>

int suma(int op1, int op2);//declarando esto, no aparece el warning.... PARAMETRO FORMAL
int main()
{
    int num1;
    int num2;
    int resultado;

    printf("numero 1: ");
    scanf("%d",&num1);
    printf("numero 2: ");
    scanf("%d",&num2);
    resultado = suma (num1,num2);//llamada del cuerpo
    printf("La suma es: %d", resultado);

    return 0;
}

    int suma(int op1, int op2)//cuerpo
    {
        int cuenta;
        cuenta = op1 + op2;
        return cuenta;//retorna el valor de la variable
    }
