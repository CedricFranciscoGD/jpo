#include <stdio.h>
// Bibliothèque permettant de générer des nombres aléatoire pour programmer le comportement du monstre
#include <stdlib.h>
#include <time.h>



int main (){

	int choixRep;
	int scoreJoueur;
	char nomJoueur;

    scoreJoueur = 0;

	printf("Veuillez inserer votre prenom:\n");
	scanf("%s",&nomJoueur);
	printf("Bonjour et bienvenue %s vous souhaitez vous renseignez sur le metier de game designer et plus generalement sur la formation de game design proposee par l'ETPA\nVeuillez repondre aux 10 questions qui vont suivre, un score vous sera attribue en fonction de vos reponse afin de jauger votre compatibilite avec la formation.\n",&nomJoueur);
	
    //QUESTION 1 ______________________________
    printf("Si tu devais choisir un jeu en open world, tu choisirais :\n 1-GTA \n2-Minecraft \n3-Assasin's Creed \n4-Skyrim");
    scanf("%d",&choixRep);
    
    if (choixRep==1){
        
        scoreJoueur += 0;
    }
    
    if (choixRep==2){
        
        scoreJoueur += 0;
    }
    
    if (choixRep==3){
        
        scoreJoueur += -1;
    }
    
    if (choixRep==4){
        
        scoreJoueur += +1;
    }
    
    printf("Score : %d.", scoreJoueur);
    
    //QUESTION 2 ______________________________
    printf("Si tu devais choisir un jeu FPS, tu choisirais :\n 1-Halo \n2-Call Of Duty \n3-Counter Strike GO \n4-Rainbow 6 Siege");
    scanf("%d",&choixRep);
    
    if (choixRep==1){
        
        scoreJoueur += 0;
    }
    
    if (choixRep==2){
        
        scoreJoueur += -1;
    }
    
    if (choixRep==3){
        
        scoreJoueur += 0;
    }
    
    if (choixRep==4){
        
        scoreJoueur += +1;
    }
    
    printf("Score : %d.", scoreJoueur);
    
    //QUESTION 3 ______________________________
    printf("Si tu devais choisir un jeu de simulation sportive, tu choisirais :\n 1-Fifa \n2-Wii Sport \n3-Just Dance \n4-Rainbow 6 NBA");
    scanf("%d",&choixRep);
    
    if (choixRep==1){
        
        scoreJoueur += -1;
    }
    
    if (choixRep==2){
        
        scoreJoueur += +1;
    }
    
    if (choixRep==3){
        
        scoreJoueur += 0;
    }
    
    if (choixRep==4){
        
        scoreJoueur += 0;
    }
    
    printf("Score : %d.", scoreJoueur);
    
    //QUESTION 4 ______________________________
    printf("Si tu devais choisir un jeu de course, tu choisirais :\n 1-Forza \n2-Need For Speed \n3-Mario Kart \n4-Gran Turismo");
    scanf("%d",&choixRep);
    
    if (choixRep==1){
        
        scoreJoueur += +1;
    }
    
    if (choixRep==2){
        
        scoreJoueur += 0;
    }
    
    if (choixRep==3){
        
        scoreJoueur += 0;
    }
    
    if (choixRep==4){
        
        scoreJoueur += -1;
    }
    
    printf("Score : %d.", scoreJoueur);
    
    //QUESTION 5 ______________________________
    printf("Si tu devais choisir un jeu d'aventure, tu choisirais :\n 1-Tomb Raider \n2-Zelda \n3-Uncharted GO \n4-God Of War");
    scanf("%d",&choixRep);
    
    if (choixRep==1){
        
        scoreJoueur += -1;
    }
    
    if (choixRep==2){
        
        scoreJoueur += +1;
    }
    
    if (choixRep==3){
        
        scoreJoueur += 0;
    }
    
    if (choixRep==4){
        
        scoreJoueur += 0;
    }
    
    printf("Votre score est de %d", scoreJoueur);
	return 0;
}