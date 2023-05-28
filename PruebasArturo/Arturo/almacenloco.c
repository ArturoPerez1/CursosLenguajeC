          if(aux->data == 1)
          {
             numero = aux->data;
             printf("El valor de numero es: %i \n",numero );
             system("pause");
             system("cls");
             for(i = numero; i > 0; i--){
                 if(numero %i == 0){
                  contador += 1;
                 }
              }

              if(contador == 2)
                {
                  contador = 0;
                  if(aux->next == NULL)
                    {
                      *Cabeza_ref = aux->next;
                      free(aux);
                      aux = *Cabeza_ref;
                    }
                  else
                    {
                      
                    }

                }
            }









// mandar al 2 a la mielda en cualquier caso
             if(aux->data == 2){
             if(aux->next == NULL){
                *Cabeza_ref = aux->next;
                free(aux);
                aux = *Cabeza_ref;

             }

          }
          if(aux->next->data == 2){
                 conector1 = aux->next->next; 
                 conector2 = aux->next;
                 free(conector2);
                 aux->next = conector1;
              }







                        /*if(aux->next->data %2 == 1)
          {
             numero = aux->data;
             for(i = numero; i > 0; i--){
                 if(numero %i == 0){
                  contador += 1;
                 }
              }

             if(contador == 2)
                {
                  contador = 0;
                  if(aux->next == NULL)
                  {
                    *Cabeza_ref = aux->next;
                    free(aux);
                    aux = *Cabeza_ref;
                  }
                  if(aux->next->next == NULL)
                  {
                    conector1 = aux->next->next;
                    conector2 = aux->next;
                    free(conector2);
                    aux->next = conector1;
                  }
                  if (aux->next->next != NULL)
                  {
                    conector1 = aux->next->next;
                    conector2 = aux->next;
                    free(conector2);
                    aux->next = conector1;
                  }
               }
            }*/



// mandar cualquier numero si cabeza es 1 a la mielda en cualquier caso

                      if(aux->data == 1)
          {
            if(aux->next != NULL)
            {
              if(aux->next->data %2 == 1)
                {
                  numero = aux->next->data;
                  for(i = numero; i > 0; i--)
                  {
                      if(numero %i == 0)
                      {
                        contador += 1;
                      }
                  }
                }  

              if(aux->next->data %2 == 0)
                {
                  numero = aux->next->data;
                  for(i = numero; i > 0; i--)
                  {
                      if(numero %i == 0)
                      {
                        contador += 1;
                      }
                  }
                }    


                  if(contador == 2)
                    {
                      contador = 0;
                      if(aux->next == NULL)
                        {
                          *Cabeza_ref = aux->next;
                          free(aux);
                          aux = *Cabeza_ref;
                        }
                      if(aux->next->next == NULL)
                        {
                          conector1 = aux->next->next;
                          conector2 = aux->next;
                          free(conector2);
                          aux->next = conector1;
                        }
                      if (aux->next->next != NULL)
                        {
                          conector1 = aux->next->next;
                          conector2 = aux->next;
                          free(conector2);
                          aux->next = conector1;
                        }
                    }//If contador
            }//if next != Null  
               
          }//if data == 1