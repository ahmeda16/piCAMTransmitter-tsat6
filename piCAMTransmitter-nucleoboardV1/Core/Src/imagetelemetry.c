#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE * fPointer = fopen("piCAMTELEMTRY.txt","r");
    char singleLine[255];

    while(!feof(fPointer)){
        fgets(singleLine, 150, fPointer);
        puts(singleLine);
    }
    fclose(fPointer);
    return 0;
}
