#include <stdio.h>

void afficher(int taille,int tab[]) {
    int i;
    for(i=0;i<taille;i++){
        printf("[%d]" , tab[i]);
    }


}
void tri_insertion(int taille , int tab[]) {
    int i;
    int j;
    int temp;
    for(i=1;i<taille;i++){
        j=i;
        temp = tab[i];
        while(j>0 && tab[j]<tab[j-1]) {
            tab[j]=tab[j-1];
            j--;
        }
        tab[j]=temp;
    }

}
int main() {
    int tab[]={2,1,4,5,3,8,7,9};
    int taille = sizeof(tab) / sizeof(tab[0]);

    printf("Avant tri :\n");
    afficher(taille, tab);

    tri_insertion(taille, tab);

    printf("\n");

    printf("Apres tri :\n");
    afficher(taille, tab);

    return 0;
}
