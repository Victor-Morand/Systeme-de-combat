#include <stdio.h>

int main(){
	int attaque = 10; // Attaque du joueur
	int pvMonstre = 45; // PV du monstre
	
	// Schéma d'une attaque
	printf("Le monstre a %d points de vie. \n ", pvMonstre );
	
	pvMonstre = pvMonstre - attaque;
	
	printf("Joueur lance attaque, le monstre subit %d points de degats. \n ", attaque );
	
	printf("Le monstre a %d points de vie.", pvMonstre );
	
	return 0;
	
}