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
    fp = fopen(file, "r");
    charactersRead = getline(&line, &bufferSize, fp);
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
    fclose(fp);
}


char* mysteryExplode(const char* str){
    char* final;
    final = (char*)malloc(99);
    for(int i = 0; str[i] != '\0'; i++){
        strncpy(final, str, i);
        return final;
    }
}