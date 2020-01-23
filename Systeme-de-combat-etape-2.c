#include <stdio.h>

int main(){
	int attaque = 10; // Attaque du joueur
	int pvMonstre = 50; // PV du monstre
	
	// Boucle d'attaque tant que le monstre n'est pas mort
	while ( pvMonstre > 0 )
		{
			
		// Schéma d'une attaque
		printf("Le monstre a %d points de vie. \n ", pvMonstre );
	
		pvMonstre = pvMonstre - attaque;
	
		printf("Joueur lance attaque, le monstre subit %d points de degats. \n ", attaque );
	
		}
	
	printf("Le monstre a %d points de vie. \n ", pvMonstre );
	
	printf("Le monstre est mort, vous avez gagné !");
	
	return 0;
}