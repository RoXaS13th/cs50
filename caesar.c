#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>//a function in this lib called atoi() can change string to int
//check50 2016.caesar caesar.c

int main(int argc, string argv[])
{
    if (  ( argc > 2 ) || ( argc == 1 ) )
    {
        printf("Usage: /home/cs50/pset2/caesar <key>\n");
    }
    
    else
    {
        int step = atoi(argv[1]);
        
        while( step >=26 )
        {
            step -= 26;
        }
        
        printf("plaintext: ");
        
        string text = GetString();
        int alpha_index = 0;
        
        printf("ciphertext: ");
    
        for (int i = 0, n = strlen(text); i < n; i++)
        {
            
            if ( isalpha(text[i]) )
            {
                if( isupper(text[i]) )
                {
                    alpha_index = (int)(text[i]) - 65;
                    alpha_index = (alpha_index + step) % 26;
                    printf("%c",(char)(alpha_index + 65));
                }
                if( islower(text[i]) )
                {
                    alpha_index = (int)(text[i]) - 97;
                    alpha_index = (alpha_index + step) % 26;
                    printf("%c",(char)(alpha_index + 97));
                }
    
            }
            else
            printf("%c", text[i]);
        }
        printf("\n");
       
    }
    
    
}
