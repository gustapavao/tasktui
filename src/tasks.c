#include "../include/tasks.h"
#include <stdio.h>

void write(const char *task_name) {
    FILE *fptr = fopen("data/tasks.txt", "a");
    if (fptr == NULL) {
        perror("Erro ao abrir o arquivo");
        return;
    }

    fprintf(fptr, "%s\n", task_name);
    fclose(fptr);
}

void read(){
    FILE *fptr = fopen("data/tasks.txt", "r");
    if (fptr == NULL) {
        perror("Erro ao abrir o arquivo");
        return;
    }

    char line[256];
    printf("Tarefas:\n");
    while (fgets(line, sizeof(line), fptr)) {
        printf("- %s", line);
    }

    fclose(fptr);
}
