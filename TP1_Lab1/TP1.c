#include <stdio.h>
#include <stdlib.h>
#include "TP1.h"
/** \brief  Se utiliza para ingresar al menu de la calculadora.
 * \param -
 * \param -
 * \return -
 *
 */

void menu(void){
    float n1=0, n2=0;
    long factorialn1=0, factorialn2=0;
    int opc;
    char seguir ='s';
    do{
        printf("1. Ingrese el 1er operando.(A=%.1f)\n2. Ingrese el 2do operando.(B=%.1f)\n3. Calcular las operaciones\n4. Informar resultados.\n5. Salir.\nOpcion:",n1,n2);
        scanf("%d", &opc);
        factorialn1=factorizar((long)n1);
        factorialn2=factorizar((long)n2);
        switch (opc){
          case 1: printf("Ingrese el valor del primer operando:\n");
                  scanf("%f",&n1);
                  break;
          case 2: printf("Ingrese el valor del segundo operando:\n");
                  scanf("%f",&n2);
                  break;
          case 3: printf("\na)Calcular suma %.1f+%.1f=%.1f", n1,n2,sumar(n1,n2));
                printf("\nb)Calcular resta %.1f-%.1f=%.1f", n1,n2,restar(n1,n2));
                printf("\nc)Calcular multiplicacion %.1f+%.1f=%.1f", n1,n2,multiplicar(n1,n2));
                if(division(n1,n2) != 0){
                printf("\nd)Calcular division %.1f+%.1f=%.1f", n1,n2,division(n1,n2));
                }
                else{
                    printf("\nd)No se puede dividir por cero.");
                }
                printf("\ne)Calcular factoreo A=%1.f=%ld", n1,factorialn1);
                printf("\nf)Calcular factoreo B=%1.f=%ld\n\n", n2,factorialn2);
                system("pause");
                break;
          case 4: printf("\na) El resultado de %.1f+%.1f es:%.1f ", n1,n2,sumar(n1,n2));
                printf("\nb) El resultado de %.1f-%.1f es:%.1f", n1,n2,restar(n1,n2));
                printf("\nc) El resultado de %.1f*%.1f es:%.1f ", n1,n2,multiplicar(n1,n2));

                if(division(n1,n2) != 0){
                    printf("\nd) El resultado de %.1f/%.1f es:%.1f",n1,n2,division(n1,n2));
                    }

                else {
                    printf("\nd) No se puede dividir por cero.");
                }
                printf("\ne) El factorial de %.1f=%ld",n1,factorialn1);
                printf("\nf) El factorial de %.1f=%ld\n\n", n2,factorialn2);
                system("pause");
                break;
          case 5: printf("ADIOS!!!!!\n");
                system("pause");
                seguir='n';
                break;
        }


        system("cls");

}while(seguir == 's');

}

/** \brief Realiza la operacion sumar
 *
 * \param Ingresa el primer numero
 * \param Ingresa el segundo numero
 * \return La suma de los dos numeros
 *
 */

float sumar(float n1, float n2)
            {
    float suma;
    suma=n1 + n2;
    return suma;
}

/** \brief Realiza la operacion restar
 *
 * \param Ingresa el primer numero
 * \param Ingresa el segundo numero
 * \return La resta de los dos numeros
 *
 */


float restar(float n1, float n2)
{
    float resta;
    resta=n1-n2;
    return resta;
}
/** \brief Realiza la operacion sumar
 *
 * \param Ingresa el primer numero
 * \param Ingresa el segundo numero
 * \return La multiplicacion de los dos numeros
 *
 */

float multiplicar(float n1, float n2){
    float mult;
    mult=n1*n2;
    return mult;}

/** \brief Realiza la operacion sumar
 *
 * \param Ingresa el primer numero
 * \param Ingresa el segundo numero
 * \return div, cuando la operacion se realiza exitosamente
 * \return 0, cuando uno de los operandos tiene valor cero
 */

float division(float n1, float n2){
    float div;
    if(n1==0 || n2==0){
        return 0;
    }
    else{
    div=n1/n2;
    return div;}
}
/** \brief Realiza la operacion sumar
 *
 * \param Ingresa el numero que se quiere factorizar
 * \return 1, cuando el numero ingresado es igual o menor a 1
 * \return (n1*factorizar(n1-1)), cuando la factorizacion se realiza correctamente
 *
 */

long factorizar(long n1){
    if(n1<=1){
        return 1;
    }
    else {

        return (n1*factorizar(n1-1));
    }

}
