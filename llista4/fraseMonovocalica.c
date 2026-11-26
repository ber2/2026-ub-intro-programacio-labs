#include <stdio.h>

#define MAX_FRASE 200

int esVocal(char c)
{
    char vocal[11] = "aeiouAEIOU";
    int i;

    for (i = 0; i < 10; i++) {
        if (c == vocal[i]) {
            return 1;
        }
    }
    return 0;
}

int main(void)
{
    char frase[MAX_FRASE + 1];
    char novaVocal;
    int i;

    printf("Escriu una frase (max. %d caracters): ", MAX_FRASE);
    gets(frase);

    printf("Escriu una vocal: ");
    scanf(" %c", &novaVocal);

    for (i = 0; frase[i] != '\0'; i++) {
        if (esVocal(frase[i])) {
            frase[i] = novaVocal;
        }
    }

    printf("%s\n", frase);
    return 0;
}
