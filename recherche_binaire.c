#include <stdio.h>

void afficher(int taille,int tab[]) {
    int i;
    for(i=0;i<taille;i++){
        printf("[%d]" , tab[i]);
    }


}
int recherche(int tab[], int x, int inf, int sup) {
    while (inf <= sup) {
        int milieu = (inf + sup) / 2;

        if (tab[milieu] == x) {
            return milieu;
        }
        else if (tab[milieu] < x) {
            inf = milieu + 1;
        }
        else {
            sup = milieu - 1;
        }
    }
    return -1;
}

int main() {
    int tab[]={1,2,3,4,5,6,7,8,9};
    int taille = sizeof(tab) / sizeof(tab[0]);
    int x;

    x=1;
    int position = recherche(tab,x,0,taille-1);
    if ( position != -1){
        printf("Le nombre %d est dans le tab a l'indice  = '%d' " , x , position);
    }
    else {
        printf("Le nombre %d n'est pas dans le tab" , x);
    }
    return 0;
}
