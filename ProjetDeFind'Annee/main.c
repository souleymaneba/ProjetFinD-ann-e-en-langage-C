#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int arret,i13,k13,conExer13;
    int choixA,choixEx,choixC;//les variables des differentes menu;
    char c;//Le caractere anti-beug;
    do
	{
    	printf("\t\t\t****BIENVENU****");
	    printf("\n\n");

	    do
	    {
	    	printf("\t\t****Projet De Fin D'anne****");
	        printf("\n\n");
	        printf("MENU GENERAL\n");
	        printf("\n\n\n");
	        printf("1:EXERCICES ELEMENTAIRES\n");
	        printf("2:TABLE DE MULTIPLICATION\n");
	        printf("3:JEUX DES ALLUMETTES\n");
	        printf("0:SORTIR\n");
	        printf("CHOIX\n");
	        scanf("%d",&choixA);
	        switch(choixA)
	        {
	        case 1:


	                            do
	                            {
	                            	system("cls");
						            //debut des exercixes elementaires ;
						            printf("\t\t****EXERCICES ELEMENTAIRES****");
						            printf("\n\n");

	                                puts("1::Exercice:Calcule de prix hors taxe");
	                                puts("3::Exercice:Verification des letttres postaux");
	                                puts("4::Exercice:Date de paques");
	                                puts("7::Exercice:Premier multiples d'un entier ");
	                                puts("9.1::Exercice:Calcul de factoriel");
	                                puts("9.2::Exercice:Puissance");
	                                puts("10::Exercice:Teste des nombres premiers");
	                                puts("11::Exercice:Calcule de PGCD ET PPMC");
	                                puts("12::Exercice:Operation elementaire");
	                                puts("13::Exercice:Table de multiplication de 1 a 5");
	                                puts("14::Exercice:Afficher un triangle rectangle");
	                                puts("17::Exercice:Jeux de devinette de nombre");
	                                puts("20:SORTIR");
	                                puts("0:POUR ALLER AU MENU PRINCIPAL");

	                                scanf("%d",&choixEx);
	                                system("cls");

	                                switch(choixEx)
	                                {

	                                    case 1 :
	                                        system("cls");
	                                        puts("1::Exercice:Calcule de prix hors taxe");
	                                        getch();
	                                        break;
	                                     case 3 :
	                                        system("cls");
	                                        puts("3::Exercice:Verification des letttres postaux");
	                                        getch();
	                                        break;
	                                     case 4:
	                                        system("cls");
	                                        puts("4::Exercice:Date de paques");
	                                        getch();
	                                        break;
	                                     case 7:
	                                        system("cls");
	                                        puts("7::Exercice:Premier multiples d'un entier ");
	                                        getch();
	                                        break;
	                                     case 9:
	                                        system("cls");
	                                         puts("9.1::Exercice:Calcul de factoriel");
	                                        getch();
	                                        system("cls");
	                                        puts("9.2::Exercice:Puissance");
	                                        getch();
	                                        break;
	                                     case 10:
	                                        system("cls");
	                                        puts("10::Exercice:Teste des nombres premiers");
	                                        getch();
	                                        break;
	                                     case 11:
	                                        system("cls");
	                                        puts("11::Exercice:Calcule de PGCD ET PPMC");
	                                        getch();
	                                        break;
	                                     case 12:
	                                        system("cls");
	                                        puts("12::Exercice:Operation elementaire");
	                                        getch();
	                                        break;
	                                     case 13:

	                                        puts("13::Exercice:Table de multiplication de 1 a 5");
	                                        printf("Programme de la table de multiplication");
	                                        printf("\n\n");
	                                        //Table de multiplication;
	                                             do
	                                                {
	                                                    system("cls");
	                                                    system("color F5");
	                                                    for(i13=1;i13<6;i13++)
	                                                    {
	                                                        printf("Table de multiplication de :%d\n",i13);
	                                                        printf("\n");
	                                                        for(k13=1;k13<11;k13++)
	                                                        {
	                                                            printf("%d * %d = %d\n",i13,k13,i13*k13);
	                                                             printf("\n");
	                                                        }
	                                                         printf("\n");
	                                                    }
	                                                    printf("Voulez-vous afficher encore 1/0 ou 20 pour retourner au exerci\n");
	                                                    scanf("%d",&conExer13);


	                                                }while(conExer13!=0 && choixEx==20);


	                                                printf("Au revoir!!!\n");
	                                                system("cls");
	                                                printf("RETOUR AU MENU DES EXERCICES 20 ou O pour aller au menu principal\n");
	                                                scanf("%d",&choixEx);
	                                                system("cls");
	                                        break;
	                                     case 14:
	                                        system("cls");
	                                        puts("14::Exercice:Afficher un triangle rectangle");
	                                        getch();
	                                        break;
	                                     case 17:
	                                        system("cls");
	                                         puts("17::Exercice:Jeux de devinette de nombre");
	                                        getch();
	                                        break;
	                                     case 20 :
	                                        system("cls");
	                                        arret=1;
                                                choixEx=20;choixA=0;



	                                        break;
	                                    case 0 :
	                                        system("cls");
	                                        printf("0:RETOUR AU MENU PRINCIPAL\n");
	                                        scanf("%d",&choixA);
	                                        break;

	                                        break;
	                                     default :
	                                        printf("choix invalide");
	                                        getch();
	                                        break;



	                                }

	                            }while(choixEx!=20 || choixA!=0);

	            getch();
	            break;
	        case 2:
	            system("cls");
	            printf("TABLES DE MULTIPLICATION\n");
	            getch();
	            break;
	        case 3:
	            system("cls");
	            printf("JEUX DES ALLUMETTES\n");
	            getch();
	            break;
	        case 0:
	            system("cls");
	            printf("Au revoir !!! MERCI D'AVOIR UTILUSER CE PROGRAMME\n");
	            getch();
	            exit(0);
	            break;
	        default :
	            system("cls");
	            printf("choix invalid \n");
	            printf("Pour continu 0 OU x\n");
	            scanf("%d",&choixA);
	            scanf("%c",&c);
	            getch();
	            break;
	        }
	        system("cls");

	    }while( (choixA!=0)  || (( c=getchar()) !='x') || arret==1);
	}while(choixA!=0);
    getch();
    return 0;
}
