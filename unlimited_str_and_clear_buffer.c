#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char tempHolder[10], *fullStr = NULL;
    printf("Please enter a string.\n");
    do
    {
        fgets(tempHolder, 10, stdin);
        if (strchr(tempHolder, '\n'))
        {
            *(strchr(tempHolder, '\n')) = '\0';
        }
        fullStr = (char*) realloc(fullStr, strlen(fullStr ? fullStr : "") + strlen(tempHolder));
        strcat(fullStr, tempHolder);
        printf("test1: %s\n", fullStr);
    } while (strlen(tempHolder) == 9);
    
    printf("test2: %s\n", fullStr);
    free(fullStr);

    return 0;
}