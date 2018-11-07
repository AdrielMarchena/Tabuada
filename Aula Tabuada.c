#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int cont = 0;
   int tab, r, y = 1, z ;
 
   
  printf("Digite a tabuada que deseja:\n");
                 scanf("%d", &tab);
         for(cont = 0;cont <= 10; cont++){         
                  
                  
                  
                  r = tab * cont;
                   printf("%d X %d = %d\n", tab, cont, r);
                    }
                    printf("Caso queira fazer outra tabuada digite:\n 1 - Sim\n 2 - Nao ");
                                 scanf("%b", &z);
                    
         
  system("PAUSE");	
  return 0;
}
