//EXO-1
#include <stdio.h>


int main() {
    int var1 = 1;
    int var2 = 2;
    int *Var1 = &var1;
    int *Var2 = &var2;

    var1 = *Var2;

    printf("%d\n", var1);

    return 0;
}




//EXO-2

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

//EXO-3

#include <stdio.h>
#include "stdlib.h"


typedef struct element element;
struct element{
    int val;
    struct element *nxt;
};

typedef element* liste_element;

liste_element ajouterEnFin(liste_element liste, int valeur){
    element* nouvelElement = malloc(sizeof(element));
    nouvelElement->val = valeur;
    nouvelElement->nxt = NULL;

    if(liste == NULL){
        return nouvelElement;
    }
    else{
        element* temp=liste;
        while(temp->nxt != NULL){
            temp = temp->nxt;
        }
        temp->nxt = nouvelElement;
        return liste;
    }
}

void afficherListe(liste_element liste){
    element *tmp = liste;
    while(tmp != NULL){
        printf("%d ", tmp->val);
        tmp = tmp->nxt;
    }
}
void supp_element(struct element* e){
    if(e->nxt){
        supp_element(e->nxt);
    }
    free(e);
}

int main() {
    int taille_liste;
    struct element* valeur_specifique;
    printf("Veuillez saisir la taille de votre liste\n");
    scanf("%d", &taille_liste);
    liste_element ma_liste = NULL;
    for (int i = 0; i < taille_liste; ++i) {
        ma_liste = ajouterEnFin(ma_liste,i);
    }
    afficherListe(ma_liste);
    supp_element(valeur_specifique);

    return 0;
}

//EXO-4

#include <stdio.h>
#include "stdlib.h"

struct Voiture{
    char marque[50];
    char modele[50];
    int annee;
}Voiture;

void create_voiture ( int *nb_voitures){
    printf("saisir le nombre de voiture :\n");
    scanf("%d", nb_voitures);

    for (int i = 0; i < *nb_voitures; ++i) {
        printf("Veuillez saisir une marque: \n");
        scanf("%s", Voiture.marque);
        printf("Veuillez saisir un modele: \n");
        scanf("%s", Voiture.modele);
        printf("Veuillez saisir de quelle annee est le vehicule: \n");
        scanf("%d", &Voiture.annee);
    }


}

int main() {
    int nb_voitures = 0;
    create_voiture(&nb_voitures);
    for (int i = 0; i < nb_voitures; ++i) {
        printf("Voici les donnees de : %s, %s, %d \n",Voiture.marque, Voiture.modele, Voiture.annee);
    }
    return 0;
}


