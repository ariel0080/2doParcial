
#include <stdio.h>
#include <stdlib.h>
#include"string.h"
#include "ArrayList.h"
#include "Employee.h"

/////////////////////////////
int employee_compare(void* empleadoA,void* empleadoB)
{
    int retorno=0;
    if (strcmp(((Employee*)empleadoA)->name,((Employee*)empleadoB)->name)==1)
    {
      retorno=1;
    }
        if (strcmp(((Employee*)empleadoA)->name,((Employee*)empleadoB)->name)==-1)
    {
      retorno=-1;
    }

    return retorno;
}
/////////////////////////
int employee_compare2(void* empleadoA,void* empleadoB)
{
    int retorno=0;
    Employee* aux1= empleadoA;
    Employee* aux2= empleadoB;


    if (strcmp(aux1->name,aux2->name))
    {
      retorno=1;
    }

    return retorno;
}

////////////////////////

void employee_print(Employee* this)
{

 printf("\n%d\t %s\t %s", this->id, this->name, this->lastName);

}



Employee* employee_new(int id, char name[],char lastName[])
{
    Employee* returnAux = NULL;
    Employee* empleado = malloc(sizeof(Employee));

    if(empleado != NULL)
    {
        empleado->id = id;
        strcpy(empleado->name,name);
        strcpy(empleado->lastName,lastName);
        empleado->isEmpty = 0;
        returnAux = empleado;
    }

    return returnAux;

}







///////////////////////////
void employee_delete(Employee* this)
{
    this->isEmpty=0;
}


//////////////////////////////
int employee_setId(Employee* this, int id)
{
    int aux = 0;
    if(this!=NULL)
    {
        this->id = id;
        aux = 1;
    }

    return aux;
}


/////////////////////////
int employee_getId(Employee* this)
{
    int aux=0;
    if (this!=NULL)
    {
     aux=this->id;
    }

    return aux;

}


int employee_filterId100(void* item)
{
    int retorno=0;
    Employee*aux= item;
    if (aux->id >= 100)
    {
      retorno=1;
    }

    return retorno;
}
