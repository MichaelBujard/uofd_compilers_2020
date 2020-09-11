#include <stdio.h>
#include <stdlib.h>


void *readFile(char *filename) {

    FILE *fp = fopen(filename, "r");
    if (fp != NULL) {

        fseek(fp, 0, SEEK_END);
        int size = ftell(fp);
        fseek(fp, 0, SEEK_SET);

        void *buffer = malloc(size);
        fread(buffer, size, 1, fp);
        fflush(fp);
        fclose(fp);
        return buffer;
    }

    return NULL;

}

int main(int argc, char **argv) {

    if (argc != 2) {
        printf("usage: filereader <filename>\n");
        return -1;
    }

    void *ptr = readFile(argv[1]);
    printf("%s\n", ptr);
    free(ptr);

    return 0;
}
