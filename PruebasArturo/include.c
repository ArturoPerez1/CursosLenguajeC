#include <stdio.h> 
#include <stdlib.h>


int main()
{
     int Cant,Num[100];
     int a[100];
     int b[100];
    
    //pregunta de cuantos numeros seran
	printf("Cuantos numeros introducira?\n");
    scanf("%d", &Cant);
    printf("La cantidad de numeros son: %i\n", Cant);


    for(int i = 1; i <= Cant; i++)
    	{
    		printf("Introduzca el [%i] número: ", i);
    		scanf("%d", &Num[i]);
    	}


    printf("\n");

    for (int i = 1; i <= Cant; ++i)
    	{
    		printf("Numero[%i] = %i\n", i, Num[i]);
    	
    	}

    if(Cant == 1)
    	{
      		printf("\nEl numero mayor es: %i \n", Num[1]);
    	}

    if(Cant == 2)
    	{
        	for(int i = 1; i < Cant; i++)
        		{
            		if(Num[i] > Num[i + 1])                                                                       
              			{
                			printf("\nEl numero mayor es: %i \n", Num[i]);
              			}
            		else
              			{
                			printf("\nEl numero mayor es: %i \n", Num[i + 1]);
              			}   
       
        		}     
   		}

    if(Cant == 3)
     	{
          	for(int i = 1; i < Cant; i++)
        		{
            		if(Num[i] > Num[i + 1])                                                                       
              			{
                			a[i] = Num[i];
              			}
            		else
              			{
                			a[i]= Num[i + 1];
              			}   
       
        		}



      		for (int i = 1; i < Cant - 1; ++i)
        		{
          			if(a[i] > a[i + 1])
            			{
              				printf("\nEl numero mayor es: %i \n", a[i]);
           	 			}
          			else
            			{
                			printf("\nEl numero mayor es: %i \n", a[i + 1]);
              			}
        		}


    	}

  

   if(Cant == 4)
    	{
    		for(int i = 1; i < Cant; i++)
    			{
      				if(Num[i] > Num[i + 1])                                                                       
       					{
       	 					a[i] = Num[i];
       					}	
       				else
        				{
        					a[i]= Num[i + 1];
        				}   
       
    			}



    		for (int i = 1; i < Cant - 1; ++i)
    	 		{
    				if(a[i] > a[i + 1])
    					{
    	 				 	b[i] = a[i];
    					}
    				else
    					{
    	  					b[i] = a[i + 1];
        				}
    			}



   		 	for (int i = 1; i < Cant - 2; ++i)
    			{
       				if(b[i] > b[i + 1])
       					{
       	 			 		printf("\nEl numero mayor es: %i \n", b[i]);
       					}	
       				else
       					{
          					printf("\nEl numero mayor es: %i \n", b[i + 1]);
       					}
    			}
    	}


    

  
  return 0;
}
