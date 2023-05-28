#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

struct Persona
{
  char name[100];
  int edad;
};

void datosPersona(struct Persona * persona, const char * name, int edad)
{
     if( strlen (name)< 100)
   {
      strcpy( persona->name, name );
   } 

   persona->edad = edad;
}

int main(int argc, const char * argv[])
{
   struct Persona persona;

   if(argc < 3)
   {
   	 printf("Indique nombre y edad por favor \n");
   	 return 1;
   }
    
    datosPersona(&persona, argv[1], atoi(argv[2]));

   persona.edad = atoi(argv[2] );

   printf("name = %s, edad = %d\n", persona.name, persona.edad);

   return 0;

}