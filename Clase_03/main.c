#include <stdio.h>
#include <stdlib.h>

int pedirEdad();
int validarEdad(int edad,int minimo,int maximo); //PROTOTIPO

int main()
{


}
int pedirEdad()

{
    int edad;
    int validarEdad();
    int minimo();
    int maximo();
    printf("Ingrese su edad: ");
    scanf("%d",&edad);
    if(edad<minimo || edad > maximo)
    {
        printf("Ingrese su edad: ");
        scanf("%d",&edad);
    }
}
int validarEdad()
{
    int esValidaLaEdad;
    do
    {
        pedirEdad();
        esValidaLaEdad=validarEdad(edad,1,100);
    }
    while (esValidaLaEdad!=1);
}

