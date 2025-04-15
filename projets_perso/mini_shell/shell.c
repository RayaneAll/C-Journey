/* Mini Shell - Version simplifiée */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char commande[100];

    while (1) {
        printf("mini-shell> ");
        fgets(commande, sizeof(commande), stdin);
        if (strncmp(commande, "exit", 4) == 0) break;
        system(commande);
    }

    return 0;
}