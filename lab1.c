/*
 * Implement your solution in thi file
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readString(FILE *file){
    char *line = NULL;
    size_t bufferSize = 0;
    size_t charactersRead;

    charactersRead = getline(&line, &bufferSize, file);

    if (charactersRead == -1){
        free(line);
        return NULL;
    }
    else {
        if (charactersRead > 0 && line[charactersRead - 1] == '\n'){
            line[charactersRead -1] = '\0';
        }
        return line;
    }
}


char* mysteryExplode(const char* str){
    char final[99];
    for(int i = 0; str[i] != '\0'; i++){
        strncpy(final, str, i);
        printf("%s\n", final);
    }
}