#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "eEmpleado.h"

int compareeEmpleado(void* pEmployeeA,void* pEmployeeB)
{

    if(strcmp(((eEmpleado*)pEmployeeA)->nombre,((eEmpleado*)pEmployeeB)->nombre)> 0)
    {
        return 1;
    }
    if(strcmp(((eEmpleado*)pEmployeeA)->nombre,((eEmpleado*)pEmployeeB)->nombre)< 0)
    {
        return 0;
    }
    return 0;


}


void m_empleado_sueldo(eEmpleado* lEmp)
{
    printf("\nNOMBRE\t\tDIRECCION\t\t\tID\t\tSUELDO\n\n");
    eEmpleado* aux;
    for (int i=0; i<al_len(lEmp); i++ )
                {
                    aux=(eEmpleado*)al_get(lEmp,i);
                    printeEmpleado_sueldo(aux);
                }
}

eEmpleado* neweEmpleado(void)
{
    eEmpleado* returnAux = NULL;
    eEmpleado* pEmployee = malloc(sizeof(eEmpleado));
    returnAux = pEmployee;
    return returnAux;

}

//SETTERS Y GETTERS

int set_Empleado_id(eEmpleado* p,int id)
{
    if (p!=NULL)
    {
        p->id = id;
        return 1;
    }
    return 0;
}

int set_Empleado_nombre(eEmpleado* p,char* n)
{
if (p!=NULL)
    {
        strcpy(p->nombre,n);
        return 1;
    }
    return 0;
}

int set_Empleado_domicilio(eEmpleado* p,char* d)
{
if (p!=NULL)
    {
        strcpy(p->direccion,d);
        return 1;
    }
    return 0;
}

int get_Empleado_id(eEmpleado* p)
{
    return p->id;
}

 void get_Empleado_nombre(eEmpleado* p,char* nombre)
{
    strcpy(nombre,p->nombre);
}

void get_Empleado_direccion(eEmpleado* p,char* direccion)
{
    strcpy(direccion,p->direccion);
}

void printeEmpleado_sueldo(eEmpleado* p)
{
    char d[51];
    char n[51];
    get_Empleado_nombre(p,n);
    get_Empleado_direccion(p,d);
    printf("%s\t\t%s\t\t\%d\t\t%d\n",n,d,get_Empleado_id(p),get_Empleado_sueldo(p));
}

int set_Empleado_hora(eEmpleado* p,int h)
{
    if (p!=NULL)
    {
        p->hora = h;
        return 1;
    }
    return 0;
}
int set_Empleado_sueldo(eEmpleado* p,int s)
{
    if (p!=NULL)
    {
        p->sueldo = s;
        return 1;
    }
    return 0;
}
//GETTERS

int get_Empleado_hora(eEmpleado* p)
{
    return p->hora;
}

int get_Empleado_sueldo(eEmpleado* p)
{
    return p->sueldo;
}

int calc_suel_Empleado(void* empleado)
{
    if(empleado!=NULL)
    {
        eEmpleado *tmp=(eEmpleado*) empleado;

        int horas=get_Empleado_hora(tmp);

        if(horas >79 && horas < 121)
        {
            set_Empleado_sueldo(tmp,180*horas);
        }

            else if(horas >120 && horas < 161)
            {
                set_Empleado_sueldo(tmp,240*horas);
            }
                else if(horas >160 && horas < 241)
                {
                    set_Empleado_sueldo(tmp,350*horas);
                }
    }
}

void m_empleado(eEmpleado* lEmp)
{
    printf("\nNOMBRE\t\tDIRECCION\t\t\tID\n\n");
    eEmpleado* aux;
    for (int i=0; i<al_len(lEmp); i++ )
                {
                    aux=(eEmpleado*)al_get(lEmp,i);
                    printeEmpleado(aux);
                }
}

void printeEmpleado(eEmpleado* p)
{
    char d[51];
    char n[51];
    get_Empleado_nombre(p,n);
    get_Empleado_direccion(p,d);
    printf("%s\t\t%s\t\t\%d\n",n,d,get_Empleado_id(p));
}
