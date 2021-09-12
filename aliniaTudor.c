/* Program care verifica daca pe un calculator trebe aliniate adresele.
 * Asta inseamna ca daca da, marimea unei structuri e mai mare ca
 * marimile membrilor adunate. Aliniare din cate inteleg e din cauza ca unele calculatoare cer ca adresele unor anumite structuri de date sa fie multiplu de un numar( 2 4 etc)*/

#include <stdio.h>

struct{
    int a;
    char b ;
} structuraDeTest;

int main(){
    printf("Marimea lui int este: %d bytes\n", sizeof(int));
    printf("Marimea lui char este: %d bytes\n", sizeof(char));
    printf("Marimea lui structuraDeTest este: %d bytes\n", sizeof(structuraDeTest));
    return 0;
}
