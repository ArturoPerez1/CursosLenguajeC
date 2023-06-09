#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

#define MSGSIZE 16

int main(int argc, char  * argv[])
{
	FILE * in;
	int pid, p[2];

	if(pipe(p) < 0)
	  	{
		 	printf("No pude crear los pipes\n");
	     	return -2;
	  	}


	if(!(in = fopen(argv[1], "r")))
	  	{
		 	printf("No pude leer el archivo %s\n", argv[1]);
		 	return -1;
	  	}


	if(pid = fork())
	  	{
         	char buffer[MSGSIZE];
         	printf("++ SOY EL PADRE. Voy a leer desde %s\n", argv[1]);
         
         	while(fgets(buffer,MGSIZE,in))
              	{
        	 	  	printf("Lei %s. Dime %d: Cual es el caracter más grande\n", buffer, pid);
        		  	write(p[1], buffer, MSGSIZE);
        	  	}
        
    	 	close( p[1]);
    	 	printf("Esperando a mis hijos\n");
         	wait(NULL);
         	fclose(in);
	  	}

	else
	  	{
			close(p[1]);
			printf("Soy el hijo. Espero que aparezca algo en el pipe\n");
			char buffer[MSGSIZE],max;
		
			while(read(p[0],buffer,MSGSIZE) > 0 )
        	  	{
                	printf("Leí '%s'desde el pipe\n", buffer);
            		max = buffer[0];
            
                	for (int i = 0; i < MSGSIZE;  i++)
                    	{

            	       		if(buffer[i] > max)
            	         		{
                   					max = buffer[i];
            			 		}
                    	}
           
                	printf("Max: '%c'\n", max);
                }
	  	}
	
  return 0;
}