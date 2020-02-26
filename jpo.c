#include <stdio.h>
// Bibliothèque permettant de générer des nombres aléatoire pour programmer le comportement du monstre
#include <stdlib.h>
#include <time.h>



int main (){

	int choixRep;
	int scoreJoueur;
	char nomJoueur;


	scoreJoueur=0;

	printf("Veuillez inserer votre prenom:\n");
	scanf("%s",&nomJoueur);
	printf("Bonjour et bienvenue %s vous souhaitez vous renseignez sur le metier de game designer \net plus generalement sur la formation de game design proposee par l'ETPA.\nVeuillez repondre aux 11 questions qui vont suivre. \nUn score vous sera attribue en fonction de vos reponses afin de jauger votre compatibilite avec la formation\n",&nomJoueur);
	
	//QUESTION 1 ______________________________
    printf("Si tu devais choisir un jeu en open world, tu choisirais :\n1-GTA \n2-Minecraft \n3-Assasin's Creed \n4-Skyrim\n");
    scanf("%d",&choixRep);
    
    if (choixRep==1){
        
        scoreJoueur ++;
    }
    
    if (choixRep==2){
        
        scoreJoueur ++;
    }
    
    if (choixRep==3){
        
        scoreJoueur --;
    }
    
    if (choixRep==4){
        
        scoreJoueur += 2;
    }
    while(choixRep!=1 && choixRep!=2 && choixRep!=3 && choixRep!=4)
	{
		printf("ATTENTION, '%d' n'est pas compris dans les choix disponible\n",choixRep );
		printf("Choisissez une reponse valide\n");
		scanf("%d",&choixRep);
	}
    printf("Score : %d.\n", scoreJoueur);
    printf("\n");
    
    //QUESTION 2 ______________________________
    printf("Si tu devais choisir un jeu FPS, tu choisirais :\n1-Halo \n2-Call Of Duty \n3-Counter Strike GO \n4-Rainbow 6 Siege\n");
    scanf("%d",&choixRep);
    
    if (choixRep==1){
        
        scoreJoueur ++;
    }
    
    if (choixRep==2){
        
        scoreJoueur --;
    }
    
    if (choixRep==3){
        
        scoreJoueur ++;
    }
    
    if (choixRep==4){
        
        scoreJoueur += 2;
    }
    while(choixRep!=1 && choixRep!=2 && choixRep!=3 && choixRep!=4)
	{
		printf("ATTENTION, '%d' n'est pas compris dans les choix disponible\n",choixRep );
		printf("Choisissez une reponse valide\n");
		scanf("%d",&choixRep);
	}
    printf("Score : %d.\n", scoreJoueur);
    printf("\n");
    
    //QUESTION 3 ______________________________
    printf("Si tu devais choisir un jeu de simulation sportive, tu choisirais :\n1-Fifa \n2-Wii Sport \n3-Just Dance \n4-NBA\n");
    scanf("%d",&choixRep);
    
    if (choixRep==1){
        
        scoreJoueur --;
    }
    
    if (choixRep==2){
        
        scoreJoueur += 2;
    }
    
    if (choixRep==3){
        
        scoreJoueur ++;
    }
    
    if (choixRep==4){
        
        scoreJoueur ++;
    }
    while(choixRep!=1 && choixRep!=2 && choixRep!=3 && choixRep!=4)
	{
		printf("ATTENTION, '%d' n'est pas compris dans les choix disponible\n",choixRep );
		printf("Choisissez une reponse valide\n");
		scanf("%d",&choixRep);
	}
    printf("Score : %d.\n", scoreJoueur);
    printf("\n");
    
    //QUESTION 4 ______________________________
    printf("Si tu devais choisir un jeu de course, tu choisirais :\n1-Forza \n2-Need For Speed \n3-Mario Kart \n4-Gran Turismo\n");
    scanf("%d",&choixRep);
    
    if (choixRep==1){
        
        scoreJoueur += 2;
    }
    
    if (choixRep==2){
        
        scoreJoueur ++;
    }
    
    if (choixRep==3){
        
        scoreJoueur ++;
    }
    
    if (choixRep==4){
        
        scoreJoueur --;
    }
    while(choixRep!=1 && choixRep!=2 && choixRep!=3 && choixRep!=4)
	{
		printf("ATTENTION, '%d' n'est pas compris dans les choix disponible\n",choixRep );
		printf("Choisissez une reponse valide\n");
		scanf("%d",&choixRep);
	}
    printf("Score : %d.\n", scoreJoueur);
    printf("\n");
    
    //QUESTION 5 ______________________________
    printf("Si tu devais choisir un jeu d'aventure, tu choisirais :\n1-Tomb Raider \n2-Zelda \n3-Uncharted GO \n4-God Of War\n");
    scanf("%d",&choixRep);
    
    if (choixRep==1){
        
        scoreJoueur --;
    }
    
    if (choixRep==2){
        
        scoreJoueur += 2;
    }
    
    if (choixRep==3){
        
        scoreJoueur ++;
    }
    
    if (choixRep==4){
        
        scoreJoueur ++;
    }
    while(choixRep!=1 && choixRep!=2 && choixRep!=3 && choixRep!=4)
	{
		printf("ATTENTION, '%d' n'est pas compris dans les choix disponible\n",choixRep );
		printf("Choisissez une reponse valide\n");
		scanf("%d",&choixRep);
	}
    printf("Score : %d.\n", scoreJoueur);
    printf("\n");
    //QUESTION 6 ______________________________
	printf("6- Si tu devais choisir un versus fighting, lequel serait-il ? \n");
	printf("1-Street Fighter\n2-Soul Calibur\n3-Tekken\n4-Mortal Kombat\n");
	scanf("%d",&choixRep);
	if(choixRep==1)
	{
		scoreJoueur += 2;
	}
	else if(choixRep==2)
	{
		scoreJoueur--;
	}
	else if(choixRep==3)
	{
		scoreJoueur++;
	}
	else if(choixRep==4)
	{
		scoreJoueur++;
	}
	while(choixRep!=1 && choixRep!=2 && choixRep!=3 && choixRep!=4)
	{
		printf("ATTENTION, '%d' n'est pas compris dans les choix disponible\n",choixRep );
		printf("Choisissez une reponse valide\n");
		scanf("%d",&choixRep);
	}
	printf("Score : %d.\n", scoreJoueur);
	

	printf("\n");
	//QUESTION 7 ______________________________
	printf("7- Si tu devais choisir un jeu de strategie/gestion, lequel prendrais-tu ? \n");
	printf("1-Age of Empire\n2-Civilization\n3-Warcraft\n4-Les Sims\n");
	scanf("%d",&choixRep);
	if(choixRep==1)
	{
		scoreJoueur++;
	}
	else if(choixRep==2)
	{
		scoreJoueur +=2;
	}
	else if(choixRep==3)
	{
		scoreJoueur++;
	}
	else if(choixRep==4)
	{
		scoreJoueur--;
	}
	while(choixRep!=1 && choixRep!=2 && choixRep!=3 && choixRep!=4)
	{
		printf("ATTENTION, '%d' n'est pas compris dans les choix disponible\n",choixRep );
		printf("Choisissez une reponse valide\n");
		scanf("%d",&choixRep);
	}
	printf("Score : %d.\n", scoreJoueur);
	printf("\n");
	//QUESTION 8 ______________________________
	printf("8- Si tu devais choisir un jeu mobile, ce serait lequel ? \n");
	printf("1-Candy Crush Saga\n2-DBZ Dokkan Battle\n3-Clash Royal\n4-Pokemon Go\n");
	scanf("%d",&choixRep);
	if(choixRep==1)
	{
		scoreJoueur--;
	}
	else if(choixRep==2)
	{
		scoreJoueur+=0;
	}
	else if(choixRep==3)
	{
		scoreJoueur+=0;
	}
	else if(choixRep==4)
	{
		scoreJoueur+=0;
	}
	while(choixRep!=1 && choixRep!=2 && choixRep!=3 && choixRep!=4)
	{
		printf("ATTENTION, '%d' n'est pas compris dans les choix disponible\n",choixRep );
		printf("Choisissez une reponse valide\n");
		scanf("%d",&choixRep);
	}
	printf("Score : %d.\n", scoreJoueur);
	printf("\n");
	//QUESTION 9 ______________________________
	printf("9- Si tu devais choisir un paltformer, sur lequel sauterais-tu ? \n");
	printf("1-Mario\n2-Rayman\n3-Sonic\n4-Alex Kidd\n");
	scanf("%d",&choixRep);
	if(choixRep==1)
	{
		scoreJoueur +=2;
	}
	else if(choixRep==2)
	{
		scoreJoueur++;
	}
	else if(choixRep==3)
	{
		scoreJoueur--;
	}
	else if(choixRep==4)
	{
		scoreJoueur++;
	}
	while(choixRep!=1 && choixRep!=2 && choixRep!=3 && choixRep!=4)
	{
		printf("ATTENTION, '%d' n'est pas compris dans les choix disponible\n",choixRep );
		printf("Choisissez une reponse valide\n");
		scanf("%d",&choixRep);
	}
	printf("Score : %d.\n", scoreJoueur);
	printf("\n");
	//QUESTION 10 ______________________________
	printf("10- Si tu devais choisir un survival horror, pour lequel frissonerais-tu ? \n");
	printf("1-Resident Evil\n2-Alone In The Dark\n3-The Evil Within\n4-Alien Isolation\n");
	scanf("%d",&choixRep);
	if(choixRep==1)
	{
		scoreJoueur +=2;
	}
	else if(choixRep==2)
	{
		scoreJoueur--;
	}
	else if(choixRep==3)
	{
		scoreJoueur++;
	}
	else if(choixRep==4)
	{
		scoreJoueur++;
	}
	while(choixRep!=1 && choixRep!=2 && choixRep!=3 && choixRep!=4)
	{
		printf("ATTENTION, '%d' n'est pas compris dans les choix disponible\n",choixRep );
		printf("Choisissez une reponse valide\n");
		scanf("%d",&choixRep);
	}
	printf("Score : %d.\n", scoreJoueur);
	printf("\n");
	//QUESTION 11 ______________________________
	printf("11- Si tu devais choisir un jeu de rythme/musique, sur lequel t'ambiancerais-tu ?\n");
	printf("1-Osu\n2-Guitar Hero\n3-Piano Tiles\n4-Parapara the Rapper\n");
	scanf("%d",&choixRep);
	
	if(choixRep==1)
	{
		scoreJoueur++;
	}
	else if(choixRep==2)
	{
		scoreJoueur +=2;
	}
	else if(choixRep==3)
	{
		scoreJoueur--;
	}
	else if(choixRep==4)
	{
		scoreJoueur++;
	}
	while(choixRep!=1 && choixRep!=2 && choixRep!=3 && choixRep!=4)
	{
		printf("ATTENTION, '%d' n'est pas compris dans les choix disponible\n",choixRep );
		printf("Choisissez une reponse valide\n");
		scanf("%d",&choixRep);
	}
	printf("\n");
	printf("Score : %d.\n", scoreJoueur);
    
	
    

	return 0;
}