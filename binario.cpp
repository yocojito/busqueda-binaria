#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

int main(){

        

        int a[10]={1,2,3,4,5,6,7,8,9,10};

        int inf, sup,med, dato;

        char b='F';

        

        printf("Ingresa un numero a buscar en el arreglo: \n");

        scanf("%i",&dato);

        inf=0;

        sup=10;

        

        while (inf<=sup){

                med=(inf+sup)/2;

                

                if(a[med]==dato){

                        b='V';

                        break;

                }

                

                if(a[med]>dato){

                        sup=med;

                        med=(inf+sup)/2;

                }

                if(a[med]<dato){

                        inf=med;

                        med= (inf+sup)/2;

                }

        }        

        

        if(b=='F'){

                printf("El numero no esta dentro del arreglo");

        }

        else if(b=='V'){

                printf("El numero si existe y esta ubicado en la posicion: %i", med);

        }

        

        getch ();

        return 0;

}
