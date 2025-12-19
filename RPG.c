/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int intelligence, stamina, charisma; 
    srand(time(0));
    
    
    int a = (rand() % 20) +1;
    int b = (rand() % 20 - a) +1;
    int c = 20 - a - b;
    
    intelligence = a;
    stamina = b;
    charisma = c;
    
    const char *class;
    
    if (intelligence >= stamina && charisma >= charisma){
        class = "mage";
    }
    else if (stamina >= intelligence && stamina >= charisma){
        class = "knight";
    }
    else{
        class = "thief";
    }
    
    printf("Class: %s\n", class);
    printf("stats:\n");
    printf("  intelligence: %d\n",intelligence);
    printf("  Stamina: %d\n",stamina);
    printf("  Charisma: %d\n",charisma);

    return 0;
}