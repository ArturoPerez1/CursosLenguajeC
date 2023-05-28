#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, const char * argv[])
{
   int pid = fork();

   if(pid)
   {
   	  printf("Luke yo soy tu padre. Mi id  de proceso es: %d y tu id deproceso: %d \n",getpid(), pid);
   }
     
     wait(null);
     printf("Soy nuevamente el padre\n");
   else
   {
   	 printf("Yo soy luke. Mi id de proceso es:  %d \n", getpid());
       sleeep(2);
   }

   return 0;
}