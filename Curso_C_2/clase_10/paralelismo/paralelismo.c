#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>

int main(int argc, const char * argv[])
{

   int pid = fork();

   if(pid)
   {
   	  printf("Luke yo soy tu padre. Mi id  de proceso es: %d y tu id deproceso: %d \n",getpid(), pid);
   }

   else
   {
   	 printf("Yo soy luke. Mi id de proceso es:  %d \n", getpid());
   }

   while(1);

   return 0;
}