#include <stdio.h>

void afficher(int taille,int tab[]) {
    int i;
    for(i=0;i<taille;i++){
        printf("[%d]" , tab[i]);
    }


}
int recherche(int taille,int tab[],int x){
    int i;
    for(i=0;i<taille;i++){
    if(tab[i]==x){
        return i;
        }
    }
    return -1;
}
int main() {
    int tab[]={2,1,4,5,3,8,7,9};
    int taille = sizeof(tab) / sizeof(tab[0]);
    int x;

    x=5;
    int position = recherche(taille,tab,x);
    if ( position != -1){
        printf("Le nombre %d est dans le tab a l'indice  = '%d' " , x , position);
    }
    else {
        printf("Le nombre %d n'est pas dans le tab" , x);
    }
    return 0;
}
