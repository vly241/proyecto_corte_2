
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


using namespace std;
struct Nodo{
 int dato;
 Nodo *siguiente;
};

//funciones colas
FILE *archivo;
void menucola();
void menugenerarcola(Nodo *&,Nodo*&);
void menuordencola();
void insert_cola(Nodo *&,Nodo *&,int);
bool colavacia(Nodo *&);
void listar_cola(Nodo *&,Nodo *&);
void colaaleatoria(Nodo *&,Nodo *&,int);
void salvar_cola(Nodo *&,Nodo *&);
void cargar_cola(Nodo *&);
void eliminarnodo_cola(Nodo *&,Nodo *&);
void eliminar_cola(Nodo *&,Nodo *&);
void estado_cola(Nodo *&);
void buscar_cola(Nodo *&,Nodo *&);
void editar_cola(Nodo *&,Nodo *&);
void burbuja_cola_may(Nodo *&);
void burbuja_cola_men(Nodo *&);

//funciones pilas
void menupila();
void menugenerarpila(Nodo *&);
void insert_pila();
void pilaaleatoria(Nodo *&,int);
void listar_pila(Nodo *&);
void cargar_pila(Nodo *&);
void salvar_pila(Nodo *&);
void buscar_pila(Nodo *&);
void menuordenpila();
void estado_pila(Nodo *&);
void eliminar_pila(Nodo *&);
void eliminarnodo_pila(Nodo *&);
void editar_pila(Nodo *&);
void burbuja_pila_may(Nodo *&);
void burbuja_pila_men(Nodo *&);

//cola
    Nodo *frente = NULL;
	Nodo *fin = NULL;
//pila

	Nodo *pila= NULL;
//variables

int op,i,num,n,j;



int main(){

    printf("\t\t\t|     --MENU PRINCIPAL--     |\n\n");
    printf("\t\t\t|     ---1.colas              |\n\n\t\t\t|     ---2.pilas             |\n\n\t\t\t|     -------------------    |\n");
    printf("\t\t\t|     -----------------      |\n\t\t\t|     -------------------    |\n\n");
    printf("Opcion: ");
    scanf("%i",&op);
    system("cls");
    switch (op) {
       case 0:
        fflush(stdin);
        printf("saliendo");
       break;
       case 1:
       menucola();
       break;
       case 2:
       menupila();
       break;

       default:
       printf("opcion incorrecta\n");
       system("pause");
       system("cls");
       main();
     }
    system("pause");

    return 0;

}

//colas

void menucola(){
    int ed,dato,b;

     printf("----------------------------------------------------------------------------------------------------------|\n\n");
    printf("\t\t\t\t\t--MENU COLAS--\n\n");
     printf("---------------------------------------------------------------------------------------------------------|\n\n");
    printf("\t--1.generar elementos--------------\t7.cargar-salvar elementos txt------------------------               |\n\n");
    printf("\t--2.listar elementos---------------\t8.eliminar elemento--------------------------            |\n\n");
    printf("\t--3.buscar elementos---------------\t9.editar elemento-----------------------------          |\n\n");
    printf("\t--4.ordenar elementos--------------\t0.salir----------------------------------------        |\n\n");
    printf("\t--5.estado de la cola--------------\--------------------------------------------------      |\n\n");
    printf("\t--6.vaciar la cola------------------------------------------------------------------------   |\n\n");
      printf("---------------------------------------------------------------------------------------------------------|\n\n");
    printf("Opcion: ");
    scanf("%i",&op);
    system("cls");
    switch (op) {
       case 0:
        fflush(stdin);
        main();
        printf("saliendo");
       break;
       case 1:
       menugenerarcola(frente,fin);
       break;
       case 2:
     listar_cola(frente,fin);
       menucola();
        break;
       case 3:
        buscar_cola(frente,fin);
         system("pause");
         system("cls");
         menucola();
        break;
       case 4:
           menuordencola();
           menucola();
        break;

       case 5:
        estado_cola(frente);
         menucola();
        break;

       case 6:
         while(frente != NULL){
                     eliminar_cola(frente,fin);

                     }
                     printf("\n\nBorrado correctamente...");
                     getch();
               menucola();
        break;
       case 7:
           salvar_cola(frente,fin);
         menucola();
            /*cargar_cola(frente);
            menucola();*/
        break;
       case 8:


 						eliminarnodo_cola(frente,fin);

 						menucola();

        break;
       case 9:

       editar_cola(frente,fin);
       menucola();
        break;

       default:
       printf("opcion incorrecta\n");
       system("pause");
       system("cls");
       main();
     }
    system("pause");


}


void menugenerarcola(Nodo *&frente,Nodo *&fin){
    int nu;
    while(n!=6){
         printf("\t\t\t|     --MENU GENERAR NUMEROS COLA--     |\n\n");
    printf("\t\t\t|     --1.100 NUMEROS              |\n\n\t\t\t|     --2.200 NUMEROS             |\n\n\t\t\t|     --3.300 NUMEROS.      |\n\n");
    printf("\t\t\t|    --4.400 NUMEROS       |\n\n\t\t\t|     --5.500 NUMEROS       |\n\n");
    printf("\t\t\t|    ------------------      |\n\n");
    printf("Opcion: ");
    scanf("%i",&n);
    system("cls");
    switch (n) {
       case 0:
        fflush(stdin);
        printf("saliendo");
       break;
       case 1:
         nu=100;
        colaaleatoria(frente,fin,nu);
        printf("100 datos ingresados a la cola.\n");
        system("pause");
        system("cls");
        menucola();


       break;
       case 2:
        nu=200;
        colaaleatoria(frente,fin,nu);
        printf("200 datos ingresados a la cola.\n");
        system("pause");
        system("cls");
        menucola();
       break;
       case 3:
        nu=300;
        colaaleatoria(frente,fin,nu);
        printf("300 datos ingresados a la cola.\n");
        system("pause");
        system("cls");
        menucola();
        break;
       case 4:
       nu=400;
        colaaleatoria(frente,fin,nu);
        printf("400 datos ingresados a la cola.\n");
        system("pause");
        system("cls");
        menucola();
        break;
       case 5:
        nu=500;
        colaaleatoria(frente,fin,nu);
        printf("500 datos ingresados a la cola.\n");
        system("pause");
        system("cls");
        menucola();
        break;
       default:
       printf("opcion incorrecta\n");
       system("pause");
       system("cls");
       main();
     }
    system("pause");
    }

}

void menuordencola(){
    int v;

     printf("\t\t\t|     --MENU ORDENAMIENTO COLA--     |\n\n");
    printf("\t\t\t|     --1.ORFDENAMIENTO POR BURBUJA            |\n\n\t\t\t|     ---2.ORDENAMIENTO RAPIDO()           |\n\n\t\t\t|         ---0.salir---        |\n");
    printf("\t\t\t|     -----------------      |\n\t\t\t|     -------------------    |\n\n");
    printf("Opcion: ");
    scanf("%i",&op);
    system("cls");
    switch (op) {
       case 0:
        fflush(stdin);
        menucola();
        printf("saliendo");
       break;
       case 1:
        printf("----------------------------------------------------------------------------\n");
        printf("como desea que sea el ordenamiento\n\n");
        printf("---1.de menor a mayor.(ascendente)---\n---2.de mayor a menor.(descendente)---\n\n");
        scanf("%i",&v);
        if(v==1){
            burbuja_cola_may(frente);
        }else if(v==2){
            burbuja_cola_men(frente);
        }else{
          printf("numero no valido!!\n");
        }
        menuordencola();
       break;
       case 2:

       break;

       default:
       printf("opcion incorrecta\n");
       system("pause");
       system("cls");
       main();
     }
    system("pause");
}

void colaaleatoria(Nodo *&frente,Nodo *&fin,int nu){

   srand(time(NULL));
       for(j=0;j<nu;j++){
       n=1+rand() % ((999999+1)-1);
       insert_cola(frente,fin,n);

        }
}

void insert_cola(Nodo *&frente,Nodo *&fin,int n){
    Nodo *n_nodo = new Nodo();

    n_nodo->dato = n;
    n_nodo->siguiente=NULL;
    if(colavacia(frente)){
        frente=n_nodo;
    }else{
        fin->siguiente=n_nodo;
    }
    fin= n_nodo;
}

bool colavacia(Nodo *&frente){
    return (frente==NULL)?true : false;
}

void listar_cola(Nodo *&frente,Nodo *&fin){
Nodo *n_cola = frente;


if(frente == NULL){
    printf("cola vacia");
}else if(n_cola != NULL){
    while(n_cola !=NULL){
        printf("dato:%d\n",n_cola->dato);
         n_cola=n_cola->siguiente;
    }


}else{
    printf("dato:%d\n",n_cola->dato);

}printf("\n");


}
void cargar_cola(Nodo *&frente){
    Nodo *p = frente;
    int dato;
    archivo = fopen("elementos_cola.txt","r");
    while(!feof(archivo)){
        fscanf(archivo,"%d\n",&dato);
        printf("dato desde archivo %d\n",dato);
    }printf("cargado exitosamente!\n");
    fclose(archivo);
}
void salvar_cola(Nodo *&frente,Nodo *&fin){
    Nodo *p = frente;
    int dato;

    archivo = fopen("elementos_cola.txt","w");
    while(p != NULL){
        dato = p->dato;
        fprintf(archivo, "%d\n",dato);
        p = p->siguiente;
    }
    fclose(archivo);
}

void eliminarnodo_cola(Nodo *&frente,Nodo *&fin){

   Nodo *actual = frente;
   Nodo *anterior = NULL;

    int nodoBuscado = 0, encontrado = 0;
    printf("\nINGRESE EL DATO DEL NODO A BUSCAR PARA ELIMINAR: ");
    scanf("%d", &nodoBuscado);
    if(frente != NULL){
        while(actual != NULL && encontrado != 1){
            if(actual->dato == nodoBuscado){
                if(actual == frente){
                    frente = frente -> siguiente;
                }else{
                    anterior -> siguiente = actual -> siguiente;
                }
                printf("\nEL NODO HA SIDO BORRADO CON EXITO\n");
                encontrado = 1;
            }
            anterior = actual;
            actual = actual -> siguiente;
        }
        if(encontrado == 0){
            printf("\nEL NODO NO HA SIDO ENCONTRADO\n");
        }else{
            free(anterior);
        }
    }else{
        printf("\nLA COLA SE ENCUENTRA VACIA\n");
    }
}

void eliminar_cola(Nodo *&frente,Nodo *&fin){
    Nodo *aux = frente;

    while (frente!=NULL) {
        if(frente == fin){
            frente = NULL;
            fin = NULL;
        }else{
            frente = frente -> siguiente;
        }
    }
  delete aux;

}

void estado_cola(Nodo *&frente){
Nodo *n_cola = frente;
if(frente==NULL){
printf("Vacia!\n");
}
else{
printf("Llena!\n");
}
}

void buscar_cola(Nodo *&frente,Nodo *&fin){
    Nodo *actual = frente;

    int nodoBuscado = 0, encontrado = 0;
    printf("\nINGRESE EL DATO DEL NODO A BUSCAR: ");
    scanf("%d", &nodoBuscado);
    if(frente != NULL){
        while(actual != NULL){
            if(actual->dato == nodoBuscado){
                printf("\nEL NODO CON EL DATO ( %d ) - ENCONTRADO\n", nodoBuscado);
                encontrado = 1;
            }
            actual = actual -> siguiente;
        }
        if(encontrado == 0){
            printf("\nEL NODO NO HA SIDO ENCONTRADO\n");
        }
    }else{
        printf("\nLA COLA SE ENCUENTRA VACIA\n");
    }
}

void editar_cola(Nodo *&frente,Nodo *&fin){
    Nodo *actual = frente;

    int nodoBuscado = 0, encontrado = 0;
    printf("\nINGRESE EL DATO DEL NODO A BUSCAR PARA MODIFICAR: ");
    scanf("%d", &nodoBuscado);
    if(frente != NULL){
        while(actual != NULL){
            if(actual->dato == nodoBuscado){
                printf("\nEL NODO CON EL DATO ( %d ) - ENCONTRADO", nodoBuscado);
                printf("\nINGRESE EL NUEVO DATO PARA EL NODO: ");
                scanf("%d", &actual->dato);
                printf("\nNODO MODIFICADO\n");
                encontrado = 1;
            }
            actual = actual -> siguiente;
        }
        if(encontrado == 0){
            printf("\nEL NODO NO HA SIDO ENCONTRADO\n");
        }
    }else{
        printf("\nLA COLA SE ENCUENTRA VACIA\n");
    }
}

void burbuja_cola_may(Nodo *&frente){
	Nodo *p=frente;
	Nodo *j;

	while(p != NULL){
		j=p->siguiente;

		while(j != NULL){
			if(p->dato > j->dato){
				int aux = j->dato;
				j->dato = p->dato;
				p->dato = aux;
			}
			j=j->siguiente;
		}
		p=p->siguiente;
	}
	printf("Los datos de la cola han sido ordenados exitosamente!\n");
}

void burbuja_cola_men(Nodo *&frente){

	Nodo *p=frente;
	Nodo *j;

	while(p != NULL){
		j=p->siguiente;

		while(j != NULL){
			if(p->dato < j->dato){
				int aux = j->dato;
				j->dato = p->dato;
				p->dato = aux;
			}
			j=j->siguiente;
		}
		p=p->siguiente;
	}
	printf("Los datos de la cola han sido ordenados exitosamente!\n");
}



//pilas

void menupila(){
     printf("----------------------------------------------------------------------------------------------------------|\n\n");
    printf("\t\t\t\t\t--MENU PILAS--\n\n");
     printf("---------------------------------------------------------------------------------------------------------|\n\n");
    printf("\t--1.generar elementos--------------\t7.cargar-salvar elementos txt------------------------               |\n\n");
    printf("\t--2.listar elementos---------------\t8.eliminar elemento--------------------------            |\n\n");
    printf("\t--3.buscar elementos---------------\t9.editar elemento-----------------------------          |\n\n");
    printf("\t--4.ordenar elementos--------------\t0.salir----------------------------------------        |\n\n");
    printf("\t--5.estado de la pila--------------\--------------------------------------------------      |\n\n");
    printf("\t--6.vaciar la pila------------------------------------------------------------------------   |\n\n");
      printf("---------------------------------------------------------------------------------------------------------|\n\n");
    printf("Opcion: ");
    scanf("%i",&op);
    system("cls");
    switch (op) {
       case 0:
        fflush(stdin);
        main();
        printf("saliendo");
       break;
       case 1:
      menugenerarpila(pila);
      menupila();
       break;
       case 2:
      listar_pila(pila);
      menupila();
       break;
       case 3:

       buscar_pila(pila);
       menupila();

        break;
       case 4:

       menuordenpila();
       menupila();
        break;
       case 5:

        estado_pila(pila);
        menupila();
        break;

       case 6:
       eliminar_pila(pila);
       printf("la pila a sido eliminada\n\n");
       menupila();
        break;
       case 7:
            salvar_pila(pila);
        menupila();
       /*cargar_pila(pila);
       menupila();*/
        break;
       case 8:
       eliminarnodo_pila(pila);
       menupila();
        break;
       case 9:

       editar_pila(pila);
       menupila();
        break;

       default:
       printf("opcion incorrecta\n");
       system("pause");
       system("cls");
       main();
     }
    system("pause");
}


void menugenerarpila(Nodo *&pila){
    int nu;
    while(op!=6){
         printf("\t\t\t|     --MENU GENERAR NUMEROS PILA--     |\n\n");
    printf("\t\t\t|     --1.100 NUMEROS              |\n\n\t\t\t|     --2.200 NUMEROS             |\n\n\t\t\t|     --3.300 NUMEROS.      |\n\n");
    printf("\t\t\t|    --4.400 NUMEROS       |\n\n\t\t\t|     --5.500 NUMEROS       |\n\n");
    printf("\t\t\t|    ------------------      |\n\n");
    printf("Opcion: ");
    scanf("%i",&op);
    system("cls");
    switch (op) {
       case 0:
        fflush(stdin);
        printf("saliendo");
       break;
       case 1:
        nu=100;
        pilaaleatoria(pila,nu);
        printf("100 datos ingresados a la pila.\n");
        system("pause");
        system("cls");
        menupila();
       break;
       case 2:
        nu=200;
        pilaaleatoria(pila,nu);
        printf("200 datos ingresados a la pila.\n");
        system("pause");
        system("cls");
        menupila();
       break;
       case 3:
        nu=300;
        pilaaleatoria(pila,nu);
        printf("300 datos ingresados a la pila.\n");
        system("pause");
        system("cls");
        menupila();
        break;
       case 4:
        nu=400;
        pilaaleatoria(pila,nu);
        printf("400 datos ingresados a la pila.\n");
        system("pause");
        system("cls");
        menupila();
        break;
       case 5:
        nu=500;
        pilaaleatoria(pila,nu);
        printf("500 datos ingresados a la pila.\n");
        system("pause");
        system("cls");
        menupila();
        break;
       default:
       printf("opcion incorrecta\n");
       system("pause");
       system("cls");
       main();
     }
    system("pause");
    }
}

void insert_pila(Nodo *&pila,int n){
    Nodo *nuevo_nodo= new Nodo();
    nuevo_nodo->dato=n;
    nuevo_nodo->siguiente=pila;
    pila=nuevo_nodo;

}


void listar_pila(Nodo *&pila){
 Nodo *Nueva_Pila = pila;
  if(pila==NULL){
   printf("La pila esta vacia!\n");
    }else if(Nueva_Pila != NULL){
  while(Nueva_Pila != NULL){
    printf("-%d\n",Nueva_Pila->dato);
    Nueva_Pila = Nueva_Pila->siguiente;
 }
 }else{
 printf("%d.",Nueva_Pila->dato);
 }printf("\n");

}

void pilaaleatoria(Nodo *&pila,int nu){
    srand(time(NULL));
       for(j=0;j<nu;j++){
       n=1+rand() % ((999999+1)-1);
       insert_pila(pila,n);

        }

}

void cargar_pila(Nodo *&pila){
     Nodo *polo = pila;
    int datop;
    archivo = fopen("elementos_pila.txt","r");
    while(!feof(archivo)){
        fscanf(archivo,"%d\n",&datop);
        printf("dato desde archivo %d\n",datop);
    }printf("cargado exitosamente!\n");
    fclose(archivo);
}

void salvar_pila(Nodo *&pila){
   Nodo *p = pila;
    int dato;

    archivo = fopen("elementos_pila.txt","w");
    while(p != NULL){
        dato = p->dato;
        fprintf(archivo, "%d\n",dato);
        p = p->siguiente;
    }
    fclose(archivo);

}

void buscar_pila(Nodo *&pila){

    Nodo *actual = frente;
    int buscar= 0, obtenido = 0;

    printf("\nINGRESE EL DATO A BUSCAR: ");
    scanf("%d", &buscar);
    if(frente != NULL){
        while(actual != NULL){
            if(actual->dato == buscar){
                printf("\n EL DATO ( %d ) SE ENCUENTA EN LA PILA (ENCONTRADO)\n", buscar);
                obtenido = 1;
            }
            actual = actual -> siguiente;
        }
        if(obtenido == NULL){
            printf("\nEL DATO NO HA SIDO ENCONTRADO\n");
        }
    }else{
        printf("\nLA PILA ESTA VACIA\n");
    }

}

void menuordenpila(){
    int v;

 printf("\t\t\t|     --MENU ORDENAMIENTO PILA--     |\n\n");
    printf("\t\t\t|     --1.ORFDENAMIENTO POR BURBUJA            |\n\n\t\t\t|     ---2.ORDENAMIENTO RAPIDO()           |\n\n\t\t\t|     -------------------    |\n");
    printf("\t\t\t|     -----------------      |\n\t\t\t|     -------------------    |\n\n");
    printf("Opcion: ");
    scanf("%i",&op);
    system("cls");
    switch (op) {
       case 0:
        fflush(stdin);
        printf("saliendo");
       break;
       case 1:
          printf("----------------------------------------------------------------------------\n");
        printf("como desea que sea el ordenamiento\n\n");
        printf("---1.de menor a mayor.(ascendente)---\n---2.de mayor a menor.(descendente)---\n\n");
        scanf("%i",&v);
        if(v==1){
            burbuja_pila_may(pila);
        }else if(v==2){
            burbuja_pila_men(pila);
        }else{
          printf("numero no valido!!\n");
        }
        menupila();
       break;
       case 2:

       break;

       default:
       printf("opcion incorrecta\n");
       system("pause");
       system("cls");
       main();
     }
    system("pause");
}

void estado_pila(Nodo *&pila){
Nodo *n_pila = pila;
if(pila==NULL){
printf(" Pila Vacia!\n");
}
else{
printf(" Pila Llena!\n");
}
}

void eliminar_pila(Nodo *&pila){
    Nodo *aux = pila;

    while (pila!=NULL) {
        if(pila == fin){
            pila = NULL;

        }else{
            pila = pila -> siguiente;
        }
    }
  delete aux;
}

void eliminarnodo_pila(Nodo *&pila){
    Nodo *actual = pila;
    Nodo *anterior =NULL;

    int nodoBuscado = 0, encontrado = 0;
    printf("\nINGRESE EL DATO DEL NODO A BUSCAR PARA ELIMINAR: ");
    scanf("%d", &nodoBuscado);
    if(pila != NULL){
        while(actual != NULL && encontrado != 1){
            if(actual->dato == nodoBuscado){
                if(actual == pila){
                    pila = pila -> siguiente;
                }else{
                    anterior -> siguiente = actual -> siguiente;
                }
                printf("\nEL NODO HA SIDO BORRADO CON EXITO\n");
                encontrado = 1;
            }
            anterior = actual;
            actual = actual -> siguiente;
        }
        if(encontrado == 0){
            printf("\nEL NODO NO HA SIDO ENCONTRADO\n");
        }else{
            free(anterior);
        }
    }else{
        printf("\nLA PILA SE ENCUENTRA VACIA\n");
    }
}

void editar_pila(Nodo *&pila){
    Nodo *actual = pila;
    int nodoBuscado = 0, encontrado = 0;
    printf("\nINGRESE EL DATO DEL NODO A BUSCAR PARA MODIFICAR: ");
    scanf("%d", &nodoBuscado);
    if(pila != NULL){
        while(actual != NULL){
            if(actual->dato == nodoBuscado){
                printf("\nEL NODO CON EL DATO ( %d ) - ENCONTRADO", nodoBuscado);
                printf("\nINGRESE EL NUEVO DATO PARA EL NODO: ");
                scanf("%d", &actual->dato);
                printf("\nNODO MODIFICADO\n");
                encontrado = 1;
            }
            actual = actual -> siguiente;
        }
        if(encontrado == 0){
            printf("\nEL NODO NO HA SIDO ENCONTRADO\n");
        }
    }else{
        printf("\nLA PILA SE ENCUENTRA VACIA\n");
    }
}

void burbuja_pila_may(Nodo *&pila){
Nodo *p=pila;
	Nodo *j;

	while(p != NULL){
		j=p->siguiente;

		while(j != NULL){
			if(p->dato > j->dato){
				int aux = j->dato;
				j->dato = p->dato;
				p->dato = aux;
			}
			j=j->siguiente;
		}
		p=p->siguiente;
	}
	printf("Los datos de la cola han sido ordenados exitosamente!\n");
}

void burbuja_pila_men(Nodo *&pila){
Nodo *p=pila;
	Nodo *j;

	while(p != NULL){
		j=p->siguiente;

		while(j != NULL){
			if(p->dato < j->dato){
				int aux = j->dato;
				j->dato = p->dato;
				p->dato = aux;
			}
			j=j->siguiente;
		}
		p=p->siguiente;
	}
	printf("Los datos de la cola han sido ordenados exitosamente!\n");
}

/*void ss(Nodo *&pila){

   Nodo *p=pila;
   nodo *i;
   nodo *d;
   int temp;

   while (i<d){
    while(i->dato > p->dato){
        d--;
    }
    while ((i))
   }


}*/
