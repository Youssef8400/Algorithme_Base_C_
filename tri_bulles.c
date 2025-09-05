#include <stdio.h>

void afficher(int taille,int tab[]) {
    int i;
    for(i=0;i<taille;i++){
        printf("[%d]" , tab[i]);
    }


}
void tri_bulles(int taille , int tab[]) {
    int i;
    int j;
    int temp;
    for(i=0;i<taille-1;i++){
        for(j=i+1;j<taille;j++){
            if(tab[j]<tab[j-1]){
                temp=tab[j];
                tab[j]=tab[j-1];
                tab[j-1]=temp;
            }
        }
    }


}
int main() {
    int tab[]={2,1,4,5,3,8,7,9};
    int taille = sizeof(tab) / sizeof(tab[0]);

    printf("Avant tri :\n");
    afficher(taille, tab);

    tri_bulles(taille, tab);

    printf("\n");

    printf("Apres tri :\n");
    afficher(taille, tab);

    return 0;
}
