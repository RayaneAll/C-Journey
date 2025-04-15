/* Simulateur de caisse */
#include <stdio.h>

int main() {
    float prix, total = 0;
    int quantite;

    printf("--- Simulateur de caisse ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Entrez le prix de l'article %d: ", i+1);
        scanf("%f", &prix);
        printf("Quantité: ");
        scanf("%d", &quantite);
        total += prix * quantite;
    }
    printf("Total à payer: %.2f €\n", total);
    return 0;
}