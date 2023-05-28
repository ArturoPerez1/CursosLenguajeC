#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int main(int argc, const char * argv[])
{
   struct
   {
   	  char name[100];
   	  char apellido[100];
   	  int edad;
   } persona;

   if(argc < 3)
   {
   	 printf("Indique nombre y edad por favor \n");
   	 return 1;
   }

   if( strlen(argv[1] ) < 100)
   {
      strcpy(persona.name, argv[1]);
   } 

   persona.edad = atoi(argv[3]);

   if(strlen(argv[3]) < 100)
   {
   	 strcpy(persona.apellido, argv[2]);
   }

   printf("name = %s, apellido = %s, edad = %d\n", persona.name, persona.apellido, persona.edad);
   return 0;
}