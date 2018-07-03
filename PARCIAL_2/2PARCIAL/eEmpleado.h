#ifndef __EMPLOYEE
#define __EMPLOYEE
struct
{
    int id;
    char nombre[51];
    char direccion[51];
    int hora;
    int sueldo;

}typedef eEmpleado;
#endif // __EMPLOYEE

//FUNCION COMPARA UTILIZADA DENTRO DEL SORT

int compareeEmpleado(void* pEmployeeA,void* pEmployeeB);

//FUNCIONES PARA IMPRIMIR DATOS

void printeEmpleado_sueldo(eEmpleado* p);
void m_empleado_sueldo(eEmpleado*);
void m_empleado(eEmpleado* lEmp);
void printeEmpleado(eEmpleado* p);

//CONTRUCTOR

eEmpleado* neweEmpleado();

//SETTERS 1 OK 0 NO SETEO

int set_Empleado_id(eEmpleado* p,int id);
int set_Empleado_nombre(eEmpleado* p,char* n);
int set_Empleado_domicilio(eEmpleado* p,char* d);
int set_Empleado_hora(eEmpleado* p,int h);
int set_Empleado_sueldo(eEmpleado* p,int s);

//GETTERS

int get_Empleado_id(eEmpleado*);
int get_Empleado_hora(eEmpleado*);
int get_Empleado_sueldo(eEmpleado*);
void get_Empleado_nombre(eEmpleado* ,char* );
void get_Empleado_direccion(eEmpleado*,char* );

//CALCULA SUELDO PARA FUNCION MAP

int calc_suel_Empleado(void* empleado);


