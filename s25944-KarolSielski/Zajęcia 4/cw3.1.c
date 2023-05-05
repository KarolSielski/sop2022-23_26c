#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    unsigned char buffer[16];
    int i, j, bytesRead;

    printf("Loading file:: ");
    scanf("%s", filename);

    file = fopen(filename, "rb");

    if (file == NULL) {
        printf("Nie udalo sie otworzyc pliku.\n");
        return 1;
    }

   /* printf("Offset(h)   ");
    for (i = 0; i < 16; i++) {
        printf("%02X ", i);
    }

    printf("  ASCII\n");

    printf("-------------------------------------------------------\n");*/

    i = 0;
    while ((bytesRead = fread(buffer, 1, 16, file)) > 0) {
        printf("%08X   ", i);

        for (j = 0; j < 16; j++) {
            if (j < bytesRead) {
                printf("%02X ", buffer[j]);
            } else {
                printf("   ");
            }

            if (j == 7) {
                printf(" ");
            }

            if (buffer[j] >= 32 && buffer[j] <= 126) {
                printf("%c", buffer[j]);
            } else {
                printf(".");
            }
        }

        printf("\n");
        i += 16;
    }

    fclose(file);

    return 0;
}