#include <stdio.h>
#include <string.h>

void texto_invalido() {
    printf("Mensagem inválida\n");
}

int compara_resposta(char *resposta) {
    return (strcmp(resposta, "sim") == 0) || (strcmp(resposta, "Sim") == 0) ||
           (strcmp(resposta, "não") == 0) || (strcmp(resposta, "nao") == 0) ||
           (strcmp(resposta, "Nao") == 0) || (strcmp(resposta, "Não") == 0);
}

int main() {
    char resposta[10];

    puts("Possui filhos?");
    scanf("%9s", resposta);

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
        scanf("%9s", resposta);

        if (strcmp(resposta, "sim") == 0) {
            puts("Sugestão: Esportiva");
        } else if (strcmp(resposta, "não") == 0) {
            puts("Gosta de campo?");
            scanf("%9s", resposta);

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