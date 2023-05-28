#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, const char * argv[])
{
   int shared = 2;
   int pid = fork();

   if(pid)
   {
      shared = 1;
   	  printf("Luke yo soy tu padre. Mi id  de proceso es: %d y tu id deproceso: %d shared = %d\n",getpid(), pid, shared);
   }
     
     wait(null);
     printf("Soy nuevamente el padre. shared = %d\n", shared);
   else
   {
    shared = 0
   	printf("Yo soy luke. Mi id de proceso es:  %d. shared = %d \n", getpid(), shared);
    sleeep(2);
   }

   return 0;
}