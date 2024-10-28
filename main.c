#include <stdio.h>
#include <string.h>

void texto_invalido() {
    printf("Mensagem inválida\n");
}

int main() {
    char resposta[10];

    puts("Possui filhos?");
    scanf("%s", resposta);

    if (strcmp(resposta, "sim") == 0) {
        puts("Mais de 3 filhos?");
        scanf("%s", resposta);

        if (strcmp(resposta, "sim") == 0) {
            puts("Sugestão: Minivan");
        } else if (strcmp(resposta, "não") == 0) {
            puts("Sugestão: SUV");
        } else {
            texto_invalido();
        }

    } else if (strcmp(resposta, "não") == 0) {
        puts("Assiste Formula 1?");
        scanf("%s", resposta);

        if (strcmp(resposta, "sim") == 0) {
            puts("Sugestão: Esportiva");
        } else if (strcmp(resposta, "não") == 0) {
            puts("Gosta de campo?");
            scanf("%s", resposta);

            if (strcmp(resposta, "sim") == 0) {
                puts("Sugestão: Offroad");
            } else if (strcmp(resposta, "não") == 0) {
                puts("Sugestão: Sedã");
            } else {
                texto_invalido();
            }
        } else {
            texto_invalido();
        }
    } else {
        texto_invalido();
    }

    return 0;
}
