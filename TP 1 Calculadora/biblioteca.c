void suma(int x, int y, int f1, int f2)
{
    if(f1==1 && f2==1)
    {
        printf("El resultado de la suma es: %d\n",x+y);
    }
    else
    {
        printf("Error, ingrese datos");
    }

}

void resta(int x, int y, int f1, int f2)
{
    if(f1==1 && f2==1)
    {
        printf("El resultado de la resta es: %d\n",x-y);
    }
    else
    {
        printf("Error, ingrese datos");
    }

}

void dividision(int x, int y, int f1, int f2)
{
    if(f1==1 && f2==1 && y!=0)
    {
        printf("El resultado de la division es: %.2f\n",(float)x/y);
    }
    else
    {
        printf("Error, ingrese datos\n");
    }

}

void multiplicacion(int x, int y, int f1, int f2)
{
    if(f1==1 && f2==1)
    {
        printf("El resultado de la multiplicacion es: %d\n",x*y);
    }
    else
    {
        printf("Error, ingrese datos\n");
    }

}

int factorial(int x, int f1)
{
    int resultado;

    if(f1==1)
    {
        if(x!=1)
        {
            resultado=x*factorial(x-1, f1);
        }
        else
        {
            resultado=1;
        }

    }

    else
    {
        printf("Error, ingrese datos\n");
    }

return resultado;

}

int valRango(int a, int b, int x)
{
    while(a<b || a>x)
    {
        printf("Error, reingrese valores entre %d y %d", b, x);
        printf("Ingrese un numero: ");
        scanf("%d",&a);
    }
    return a;
}

int getInt(void)
{
    int resultado;
    scanf("%d",&resultado);
    return resultado;
}

void valFlag1(int f1, int x)
{
    if(f1==0)
        {
            printf("1- Ingresar primer operando (A= sin asignar)\n");
        }

        else
        {
            printf("1- Primer operando (A= %d)\n",x);
        }
}

void valFlag2(int f2, int y)
{

    if(f2==0)
        {
            printf("2- Ingresar segundo operando (B= sin asignar)\n");
        }

        else
        {
            printf("2- Segundo operando (B= %d)\n",y);
        }
}
