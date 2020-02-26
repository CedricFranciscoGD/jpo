#include <stdio.h>
// Bibliothèque permettant de générer des nombres aléatoire pour programmer le comportement du monstre
#include <stdlib.h>
#include <time.h>

struct question
{
    char question[1024];
};

typedef struct question question;

int main (){

    //Vars etc ____________
    int play;
    int i;
    
    int choixRep;
	int scoreJoueur;
	char nomJoueur;
    int nb_question;
    
    scoreJoueur = 0;
    nb_question = 11;
    
    
    question a_question[11];
    play = 1;
    
    question question1 = {"Si tu devais choisir un jeu en open world, tu choisirais :\n1-GTA \n2-Minecraft \n3-Assasin's Creed \n4-Skyrim\n"};
    question question2 = {"Si tu devais choisir un jeu FPS, tu choisirais :\n1-Halo \n2-Call Of Duty \n3-Counter Strike GO \n4-Rainbow 6 Siege\n"};
    question question3 = {"Si tu devais choisir un jeu de simulation sportive, tu choisirais :\n1-Fifa \n2-Wii Sport \n3-Just Dance \n4-NBA\n"};
    question question4 = {"Si tu devais choisir un jeu de course, tu choisirais :\n1-Forza \n2-Need For Speed \n3-Mario Kart \n4-Gran Turismo\n"};
    question question5 = {"Si tu devais choisir un jeu d'aventure, tu choisirais :\n1-Tomb Raider \n2-Zelda \n3-Uncharted GO \n4-God Of War\n"};
    question question6 = {"Si tu devais choisir un versus fighting, lequel serait-il ?\n1-Street Fighter\n2-Soul Calibur\n3-Tekken\n4-Mortal Kombat\n"};
    question question7 = {"Si tu devais choisir un jeu de strategie/gestion, lequel prendrais-tu ?\n1-Age of Empire\n2-Civilization\n3-Warcraft\n4-Les Sims\n"};
    question question8 = {"Si tu devais choisir un jeu mobile, ce serait lequel ?\n1-Candy Crush Saga\n2-DBZ Dokkan Battle\n3-Clash Royal\n4-Pokemon Go\n"};
    question question9 = {"Si tu devais choisir un paltformer, sur lequel sauterais-tu ? \n1-Mario\n2-Rayman\n3-Sonic\n4-Alex Kidd\n"};
    question question10 = {"Si tu devais choisir un survival horror, pour lequel frissonerais-tu ?\n1-Resident Evil\n2-Alone In The Dark\n3-The Evil Within\n4-Alien Isolation\n"};
    question question11 = {"Si tu devais choisir un jeu de rythme/musique, sur lequel t'ambiancerais-tu ?\n1-Osu\n2-Guitar Hero\n3-Piano Tiles\n4-Parapara the Rapper\n"};

    //INTRO
    printf("Veuillez entrer votre prenom:\n");
    scanf("%s", &nomJoueur);
    printf("Bonjour et bienvenue %s, vous souhaitez vous renseignez sur le metier de game designer \net plus generalement sur la formation de game design proposee par l'ETPA.\nVeuillez repondre aux 10 questions qui vont suivre. \nUn score vous sera attribue en fonction de vos reponses afin de jauger votre compatibilite avec la formation\n",&nomJoueur);
    
    while (play != 0){
    
        //display game
        for (i=0; i<11; i++){
        
            printf("%s", a_question[i].question);
                
            //scan reponse
            scanf("%d", &choixRep);
            while (choixRep!=1 && choixRep!=2 && choixRep!=3 && choixRep!=4)
            {
                printf("ATTENTION, '%d' n'est pas compris dans les choix disponible\n",choixRep );
                printf("Choisissez une reponse valide\n");
                scanf("%d",&choixRep);
            }
            
            //scoring
            if (i==1){
                if (choixRep==1){scoreJoueur ++;}
                if (choixRep==2){scoreJoueur ++;}
                if (choixRep==3){scoreJoueur --;}
                if (choixRep==4){scoreJoueur += 2;}   
            }

            if (i==2){
                if (choixRep==1){scoreJoueur ++;}
                if (choixRep==2){scoreJoueur --;}
                if (choixRep==3){scoreJoueur ++;}
                if (choixRep==4){scoreJoueur += 2;}   
            }

            if (i==3){
                if (choixRep==1){scoreJoueur --;}
                if (choixRep==2){scoreJoueur += 2;}
                if (choixRep==3){scoreJoueur ++;}
                if (choixRep==4){scoreJoueur ++;}   
            }

            if (i==4){
                if (choixRep==1){scoreJoueur += 2;}
                if (choixRep==2){scoreJoueur ++;}
                if (choixRep==3){scoreJoueur ++;}
                if (choixRep==4){scoreJoueur -= 1;}   
            }

            if (i==5){
                if (choixRep==1){scoreJoueur -= 1;}
                if (choixRep==2){scoreJoueur += 2;}
                if (choixRep==3){scoreJoueur ++;}
                if (choixRep==4){scoreJoueur ++;}   
            }

            if (i==6){
                if (choixRep==1){scoreJoueur +=2;}
                if (choixRep==2){scoreJoueur --;}
                if (choixRep==3){scoreJoueur ++;}
                if (choixRep==4){scoreJoueur ++;}   
            }

            if (i==7){
                if (choixRep==1){scoreJoueur +=2;}
                if (choixRep==2){scoreJoueur --;}
                if (choixRep==3){scoreJoueur ++;}
                if (choixRep==4){scoreJoueur ++;}   
            }

            if (i==8){
                if (choixRep==1){scoreJoueur --;}
                if (choixRep==2){ }
                if (choixRep==3){ }
                if (choixRep==4){ }   
            }

            if (i==9){
                if (choixRep==1){scoreJoueur +=2;}
                if (choixRep==2){scoreJoueur --;}
                if (choixRep==3){scoreJoueur ++;}
                if (choixRep==4){scoreJoueur ++;}   
            }

            if (i==10){
                if (choixRep==1){scoreJoueur +=2;}
                if (choixRep==2){scoreJoueur --;}
                if (choixRep==3){scoreJoueur ++;}
                if (choixRep==4){scoreJoueur ++;}   
            }

            if (i==11){
                if (choixRep==1){scoreJoueur +=2;}
                if (choixRep==2){scoreJoueur --;}
                if (choixRep==3){scoreJoueur ++;}
                if (choixRep==4){scoreJoueur ++;}   
            }
            
            if (i!=nb_question){printf("Score : %d.", scoreJoueur);}
        }
        
        if (i=11){play=0;}
    }
    
    printf("Votre score final est de : %d", scoreJoueur);
}