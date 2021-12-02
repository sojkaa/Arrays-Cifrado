#include <stdio.h>
#include <ctype.h>
#include <string.h>

int validar(int argc, char *argv[]);
char* cifrar(char *text, char *key);

int main(int argc, char *argv[]) {

    if (validar(argc, argv)) {
        return 1;
    }

    // TODO

    return 0;
}

int validar(int argc, char *argv[]) {
    
    // TODO

    int i=0;
    int z=i+1;

    if(argc <2){
        printf ("Falta la clave \n");
    }
    while (argv[1][i]) {
        if (!isalpha(argv[1][i])) {
            printf ("Solo se admiten letras \n");
    }
    i++;   
    }
        if (strlen(argv[1]) !=26){
            printf ("Sobran o faltan caracteres \n");
    }
    i=0;
    while(argv[1][i]>0){
        if (tolower (argv[1][z]) == tolower(argv[1][i]+1)){
            while (argv[1][z]>0)
            z++;
        }
    }
    i++;
    printf("No se aceptan letras repetidas \n");
    return 1;
    }
return o;
}

char* cifrar(char *text, char *key) {

    // TODO
}
