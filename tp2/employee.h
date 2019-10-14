#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

typedef struct
{
 int id;
 char name[51];
 char lastName[51];
 float salary;
 int sector;
 int isEmpty;
} employee;


#endif // EMPLOYEE_H_INCLUDED
void mostrarEmpleado(employee x);
void mostrarEmpleados(employee vec[], int tam);
void inicializarEmpleados(employee vec[], int tam);
int hardcodearEmpleados(employee vec[], int tam, int cantidad);
int buscarLibre(employee vec[], int tam);
employee newEmpleado(int id,char nombre[],char apellido[],float salario,int sector);
int altaEmpleado(employee vec[], int tam, int id);
int buscarEmpleado (int id, employee vec[], int tam);
int modificarEmpleado(employee empleado[], int tam);
int bajaEmpleado(employee vec[], int tam);
void ordenarEmpleados(employee empleados[],int tam);
void salarioPromedio(employee empleados[], int tam);
void informeEmpleado(employee empleados[],int tam);
