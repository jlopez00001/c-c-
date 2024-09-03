#include <stdio.h>  
#include <conio.h>  
#include <math.h>  
#include <stdlib.h>  
#include <ctype.h>  
#define MENSAJE printf("\n\n<<<<PRESIONE UNA TECLA PARA VOLVER A MENU");getch();
#define SI printf("\n\n<<<<SI...ENTONCES PULSA [S]");
#define NO printf("\n\n<<<<NO...ENTONCES PULSA UNA TECLA PARA VOLVER AL MENU");
#define PI 3.1415
//Prototipos de funciones
double raiz(float a, float b);  
double valor_absoluto(float a, float b);  
int suma(int n); 
double areacir(float r);
      
     
/*FUNCION MENU: MUESTRA UN MENU EN PANTALLA*/
char menu()
        {
                    printf("\n\n\n\t\tBIENVENIDO/A\n\n");  
         printf("\n\n\t\tMENU DE OPCIONES\n\n");  
         printf("\n********************************************************\n");  
         printf("\n\t1-RAIZ CUADRADA DE DOS NUMEROS ENTEROS");  
         printf("\n\t2-VALOR ABSOLUTO DE DOS NUMEROS ENTEROS");  
         printf("\n\t3-SUMA DE LOS PRIMEROS NUMEROS ENTEROS");
         printf("\n\t4- AREA DE UN CIRCULO");
                     printf("\n\n\t5-SALIR");
                     printf("\n\n\tESCOJA UNA OPCION");
         printf("\n********************************************************\n");  
         }  
/*INICIO DEL PROGRAMA PRINCIPAL*/
main()  
{
       system("COLOR f1");       /*system pertenece a la libreria stdlib*/
       float a,b;           /*declaracion de variables globales*/
       int n;
       char c,resp;
        
    do
        {                   /*primer ciclo do while para salir o continuar*/  
            do
               {               /*segundo ciclo do while para el switch*/  
                 system("CLS()");           /*limpia pantalla*/  
                 menu();
                 c=getche();
                 getch();
                 switch(c)  
           {  
            case '1':system("CLS");    /*limpia pantalla*/  
                       printf("\n\t\tRAIZ CUADRADA DE DOS NUMEROS ENTEROS\n\n");  
                       printf("\nINGRESE EL VALOR DE A, POR FAVOR: ");  
                       scanf("%f", &a);  
                       printf("\nAHORA EL VALOR DE B: ");  
                       scanf("%f", &b);  
            printf("\nEL RESULTADO DE LA RAIZ CUADRADA DE: %.2f + %.2f  ES:%.2f\n\n",  
                       a,b,raiz(a,b));  
                       MENSAJE;
                       break;  
                
            case '2':system("CLS");    /*limpia pantalla*/   
                       printf("\n\t\tVALOR ABSOLUTO DE DOS NUMEROS ENTEROS\n\n");  
                       printf("\nINGRESE EL VALOR DE A, POR FAVOR: ");  
                       scanf("%f", &a);  
                       printf("\nAHORA EL VALOR DE B: ");  
                       scanf("%f", &b);  
                       printf("\nEL VALOR ABSOLUTO ENTRE:|%.2f-%.2f| ES IGUAL A: %.2f\n\n",  
                       a,b,valor_absoluto(a,b));  
                       MENSAJE;
                       break;  
                  
            case '3':system("CLS");    /*limpia pantalla*/   
            printf("\n\t\tSUMA DE LOS PRIMEROS NUMEROS ENTEROS \n\n");
            printf("\nENTRE EL VALOR DE N:  "  );
                        scanf("%d",&n);
                        printf("\nLA SUMA DE LOS %d  PRIMEROS NUMEROS ENTEROS ES: %d", n,       
                        suma(n));
                        MENSAJE;
                        
                       break; 
			case '4':system("CLS");    /*limpia pantalla*/   
            printf("\n\t\t AREA DE UN CIRCULO \n\n");
            printf("\n Ingrese el radio del circulo: r  "  );
                        float r;
                        scanf("%f",&r);
                        printf("\n EL AREA DEL CIRCULO  ES: %f",areacir(r));      
                        
                        MENSAJE;		    
                        break;
			  
                        case '5':system("CLS");    /*limpia pantalla*/
            default:printf("\n\n\n\n\tERROR<<<<<DEBES ELEGIR UNA OPCION VALIDA");  
                        break;
                      }
             } while(c!='5');         /*fin del segundo ciclo do while para el switch*/  
             printf("\n\nQUIERES SALIR DEL PROGRAMA?");
                 SI;
                 NO;
                 resp=toupper(getch());    /*INSTRUCCION QUE CONVIERTE A  
       MAYUSCULA [s->S]*/
                                   /*toupper pertenece a la libreria ctype*/
    } while(resp!='S');         /*fin del primer ciclo do while para salir o  
       continuar*/  
     return 0;
}            /*FIN DEL PROGRAMA PRINCIPAL*/
       
/*SUBPROGRAMAS DEL PROGRAMA PRINCIPAL*/
double raiz(float a, float b)  
   {  
    float x;                /*declaracion de variables locales*/
    double y;  
    x=a+b;  
    y=sqrt(x);              /*raiz cudrada pertenece a la libreria math*/
    return (y);             /*funcion que devuelve un valor*/  
    }  
double valor_absoluto(float a, float b)  
   {  
     float x;               /*declaracion de variables locales*/
     double y;              /*es un tipo de dato que maneja valores + y - */
     x=a-b;  
     y=fabs(x);             /*valor absoluto pertenece a la libreria math*/
     return (y);            /*funcion que devuelve un valor*/  
   }                                                                                                                                     
int suma(int n)  
  {
  int i,sum=0;             /*declaracion de variables locales*/
  for(i=1; i<=n; i++)
      sum+=i;
      return(sum);         /*funcion que devuelve un valor*/  
  
}   

double areacir(float r)
  {  float area;              //Declaracion de varibles locales
      area= PI*(r*r); 
     return(area);
  
  }
