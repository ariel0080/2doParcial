#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "eEmpleado.h"
#include "funciones.h"

void guardarArchivo(ArrayList* empleados)

{
    FILE* miArchivo;
    miArchivo = fopen("sueldos.csv","w");
    char n[50];
    char d[50];

    fprintf(miArchivo,"NOMBRE,DIRECCION,ID,HORAS,SUELDO\n");
    for(int i=0;i<al_len(empleados);i++)
    {
        eEmpleado* tmp=al_get(empleados,i);
        get_Empleado_nombre(tmp,n);
        get_Empleado_direccion(tmp,d);
        fprintf(miArchivo,"%s,%s,%d,%d,%d\n",n,d,get_Empleado_id(tmp),get_Empleado_hora(tmp),get_Empleado_sueldo(tmp));
    }

    fclose(miArchivo);
}
