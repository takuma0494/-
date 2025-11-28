/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    
    // declaring and initializing a string
    char abcde[] = "yuuto itou";

    // printing the string
    int i;
    printf("The string '%s' is %lu characters long.\n",abcde,strlen(abcde));
    for (i = 0; i <= strlen(abcde); i++)
        printf("%d\n", i);

    return 0;
}