#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "employee.h"
#define TAM 10


//funciones para menu
int menu();

//funciones para empleados


int main()
{
    int id = 20000;
    char salir = 'n';
    employee empleados[TAM];
    inicializarEmpleados(empleados,TAM);
    id = id + hardcodearEmpleados(empleados,TAM,9);

    do{
        switch(menu())
        {
        case 1:
            if(altaEmpleado(empleados,TAM,id)){
                id++;
            }
            break;
        case 2:
            modificarEmpleado(empleados,TAM);
            break;
        case 3:
            bajaEmpleado(empleados,TAM);
            break;
        case 4:
            informeEmpleado(empleados,TAM);
            break;

        case 5:
            printf("Confirma salir?:");
            fflush(stdin);
            salir = getche();
            printf("\n\n");
            break;

        default:
            printf("\nOpcion Invalida!\n\n");
        }
        system("pause");
    }while(salir == 'n');

    return 0;
}

int menu(){

    int opcion;

    system("cls");
    printf("****** ABM Empleados *******\n\n");
    printf("1-Alta Empleado\n");
    printf("2-Modificar Empleado\n");
    printf("3-Baja Empleado\n");
    printf("4-Informes Empleados\n");
    printf("5-Salir\n\n");
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);

    return opcion;
}

