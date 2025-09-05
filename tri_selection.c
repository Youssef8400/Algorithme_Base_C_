#include <stdio.h>

void afficher(int taille,int tab[]) {
    int i;
    for(i=0;i<taille;i++){
        printf("[%d]" , tab[i]);
    }


}
void tri_selection(int taille , int tab[]) {
    int i, j, imin, temp;

    for(i=0; i<taille; i++){         
        imin = i;                    
        for(j=i+1; j<taille; j++){    
            if(tab[j] < tab[imin]) {
                imin = j;               
            }
        }
        if(imin != i){
            temp = tab[i];
            tab[i] = tab[imin];
            tab[imin] = temp;
        }
    }
}
int main() {
    int tab[]={2,1,4,5,3,8,7,9};
    int taille = sizeof(tab) / sizeof(tab[0]);

    printf("Avant tri :\n");
    afficher(taille, tab);

    tri_selection(taille, tab);

    printf("Apres tri :\n");
    afficher(taille, tab);

    return 0;
}
