#include <stdio.h>
#include <stdlib.h>
#include <string.h>
enum{A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z};

int main()
{
    char aux, mot[30], arch[20], abc[30]= "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; int i, h; FILE *ap;
    printf("Introduzca nombre del archivo:\n");
    scanf("%s", arch);
    ap = fopen(arch,"r");
    if (ap == NULL) {printf("Error: No existe el archivo.\n"); exit(1);}
    while(!feof(ap)){
        fscanf(ap, " %s ", mot);
        for(i=0; i<19; i++){
            if( mot[i] == mot[i+1] ) {
                for(h=0; h<26; h++) if (mot[i+1] == abc[h]) abc[h] = '_';
            }
        }}
    printf("Las letras que no se repiten en el archivo son:\n %s", abc);
    fclose(ap);
    return 0;
}
