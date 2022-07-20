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
        if (strchr(tempHolder, '\n')) // if the string has a newline character
        {
            *(strchr(tempHolder, '\n')) = '\0'; // replace the newline character with a null terminator
        }
        fullStr = (char*) realloc(fullStr, strlen(fullStr ? fullStr : "") + strlen(tempHolder)); // add memory space to the dest string
        strcat(fullStr, tempHolder); // append the temp string to the dest string
        printf("test1: %s\n", fullStr);
    } while (strlen(tempHolder) == 9); // if the temp string is full, keep looping
    
    printf("test2: %s\n", fullStr);
    free(fullStr);
    fullStr = NULL;
    return 0;
}