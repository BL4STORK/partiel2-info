#include <stdio.h>
#include "stdlib.h"

struct Personne{
    char nom[50];
    int age;
    int taille;
}Personne;

void createpersonne (struct Personne personne[], int *nb_personnes){
    printf("saisir le nombre de personnes :\n");
    scanf("%d", nb_personnes);

    for (int i = 0; i < *nb_personnes; ++i) {
        printf("Veuillez saisir un nom: \n");
        scanf("%s", personne[i].nom);
        printf("Veuillez saisir un age: \n");
        scanf("%d", &personne[i].age);
        printf("Veuillez saisir une taille en cm: \n");
        scanf("%d", &personne[i].taille);
    }


}

int main() {

    struct Personne personne[10];
    int nb_personnes = 0;
    int i;
    createpersonne(personne,&nb_personnes);
    for (int j = 0; j < nb_personnes; ++j) {
        printf("Voici les donnees de : %s, %d, %d \n",personne[i].nom ,personne[i].age, personne[i].taille);
    }

    return 0;
}
