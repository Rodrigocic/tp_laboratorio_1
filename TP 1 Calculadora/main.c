#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"


int main()
{
    char seguir='s';
    int op=0,opx=0,opy=0,flag1=0,flag2=0;

    do
    {
        system("cls");
        valFlag1(flag1,opx);
        valFlag2(flag2,opy);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n\n");

        op=getInt();
        op=valRango(op,1,9);
        system("cls");

        switch(op)
        {
            case 1:
                printf("Ingrese primer operando: ");
                opx=getInt();
                flag1=1;
                break;

            case 2:
                printf("Ingrese segundo operando: ");
                opy=getInt();
                flag2=1;
                break;

            case 3:
                suma(opx, opy, flag1, flag2);
                system("pause");
                break;

            case 4:
                resta(opx, opy, flag1, flag2);
                system("pause");
                break;

            case 5:
                dividision(opx, opy, flag1, flag2);
                system("pause");
             break;

            case 6:
                multiplicacion(opx, opy, flag1, flag2);
                system("pause");
                break;

            case 7:
                printf("El factorial de A es: %d\n",factorial(opx,flag1));
                system("pause");
             break;

            case 8:
                printf("Todas las operaciones\n");
                suma(opx, opy, flag1, flag2);
                resta(opx, opy, flag1, flag2);
                dividision(opx, opy, flag1, flag2);
                multiplicacion(opx, opy, flag1, flag2);
                printf("El factorial de A es: %d\n",factorial(opx,flag1));
                system("pause");
             break;

            case 9:
                seguir ='n';
                break;
        }//FIN SWITCH

    }while(seguir =='s');//FIN DO WHILE

    return 0;
}//FIN MAIN
