#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
//a initial work

int main(void)
{
    
    string name = GetString();
    char space = ' ';
    
    for (int i = 0 , ls = strlen(name); i < ls; i++)
    {
        if( (i == 0) && (name[i] != space) )
        {
            name[i] = toupper(name[i]);
            printf("%c", name[i]);
        }
        
        
        
        if (((name[i] == space) && (name[i+1] != space)) && ( i+1 < ls)) 
        // i+1 < ls is very important! you can delete it the run check50 2016.initials.more initials.c then see what's up
        {
            name[i+1] = toupper(name[i+1]);
            printf("%c", name[i+1]);
        }
    }
    printf("\n");
    
}
