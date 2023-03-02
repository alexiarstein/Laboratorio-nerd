// Autora: Alexia Rivera Steinberg <lachicadesistemas@gmail.com>
// Licencia: GNU GPL 3.0 
// Consegui ambos scripts en www.github.com/alexiarstein 
// Repo: Laboratorio Nerd
// ------------------------------------------------------------
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <texto>\n", argv[0]);
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("Error: no puedo leer: '%s'\n", argv[1]);
        return 1;
    }

    int c;
    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }

    fclose(fp);
    return 0;
}
