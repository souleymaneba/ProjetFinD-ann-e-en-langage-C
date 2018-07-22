#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 int telechargement(int i)
 {
 	
 	for(i=1;i<=100;i++)
 	{
 		system("cls");
		 printf("\n\n\n\t\t\tChargement: %d %%",i);
 		Sleep(10);
 	}
 	return i;
 }
/* int triangle(int i)

{
	
    int base = 5;
    int n=1;
    int E;

    while(n<=base)
    {
        E=(base-n)/2;
        for(i=1;i<=E;i++)
        {
           printf("    ");
        }
        
        for(i=1;i<=n;i++)
        {
          printf("*   ");
        }
        
        printf("\n\n\n\t\t\t");
        n=n+2;
    }
	return i;
}*/
int main(int argc, char *argv[]) {
system("TITLE SOULEYMANE BA I1150037");
system("color 9B");

/*La declaration des variables*/

int choix0,i,choix1,choix2,choixapp,retour,repapp,base,E,n,couleur,accueil,gagn; 
float pht,pttc,NH,TH,NE,SB,RE,MRR,SN,SA,A,B;
const float tva=0.18;
float longueur,largeur;
double valpui,puissance,resultat;
long int factoriel,valfact,nombrepremier;
int a,b,c,d,e,f,g,h,t[50];
int x,note,som,coef,k,premier,min,max,mdp,nf,n50,n20,n10,nbr;
char rep,operateur;
long int diviseur,dividende,reste,C,D;
int nombremystere=0,nombreentrer=0;
const int MAX=100,MIN=1;
int nord1,nord2,recevoir,juste,NO,cpt,pourcentage,njour,na,nmax,choixtab,retourtab;
int tab[50],j,der,per,T[50],T1[50],T2[50],bsup,binf,val,mir,pal;
int matA[50][50],matB[50][50],matC[50][50],m,p,sym,diag;
char tab1[100],tab2[100];
char pass[100],s;
int essai=0;
char bonpass[]="souleymane";
double poids=0,taille=0;
			
			/*Fin de la declaration*/
		
			
			
			do
			{
				i=0;
				
				printf("\n\n\t\tP  R  O  J  E  T  D  E  F  I  N  D '  A  N  N  E  E \n\t\t");
					Sleep(50);
				
				printf("\n\n\t\t\t\t");
				for(j=0;j<20;j++)
				{
					printf("°");
				}
				printf("\n\n\n\t\t\tMot de pass : ");
					Sleep(15);
			
				do
				{
					s=getch();
					if(s=='\b')
					{
						if(i>0)
						{
							putchar('\b');
							putchar(' ');
							putchar('\b');
							i--;
						}
					}
					else if(s!='\r')
						{
							pass[i]=s;
							i++;
							putchar('*');
						}
				}
				while(s!='\r');
				pass[i]='\0';
				if(strcmp(pass,bonpass)!=0)
				{	
					printf("\t\tIncorrecte,reesayer");
					sleep(2);
					system("cls");
				}
				essai++;
			}
			while(essai<3 && strcmp(pass,bonpass)!=0);
if(strcmp(pass,bonpass)==0)
{

			
			system("cls");
			printf("\n\n\n\t\t");
			for(i=0;i<=35;i++)
			{
				printf("°");
			}
			printf("\n\n\t\t\tB I E N V E N U E !!!");Sleep(90);
			printf("\n\n\n\t\t");
			
			for(i=0;i<=35;i++)
			{
				printf("\3");
				
			}
			
			Sleep(900);
			
			
				system("cls");
				printf("\n\n\n\n\n\t\t\tPatientez un instant...");
				printf("\n\n\n\n\n\n\t\t\t\t");
				for(i=0;i<=5;i++)
					{
					printf("..");
					Sleep(500);
					}
			
			
				do
				{	
							system("cls");
							printf("\t\t\t");
							printf("\t\t\t");
						    printf("\n\n\t\t    \4 A C C U E I L \4\n\t\t");
						    printf("\n\n\t");
							for(i=0;i<41;i++)
							{
								printf("°");
							}
							printf("\n\t°\t\t\t\t\t°\n\t°\t\t\t\t\t°\n\t°\t1: Menu \t\t\t°");
							printf("\n\t°\t\t\t\t\t°\n\t°\t\t\t\t\t°\n\t°\t2: Parametres \t\t\t°");
							printf("\n\t°\t\t\t\t\t°\n\t°\t\t\t\t\t°\n\t°\t3: Mises a jour \t\t°");
							printf("\n\t°\t\t\t\t\t°\n\t°\t\t\t\t\t°\n\t°\t4: Instructions \t\t°");
							printf("\n\t°\t\t\t\t\t°\n\t°\t\t\t\t\t°\n\t°\t5: A propos \t\t\t°");
							printf("\n\t°\t\t\t\t\t°\n\t°\t\t\t\t\t°\n\t°\t0: Quitter \t\t\t°");
							printf("\n\t°\t\t\t\t\t°\n\t°\t\t\t\t\t°\n\t°\t\t\t\t\t°");
							printf("\n\t");
							for(i=0;i<41;i++)
							{
								printf("°");
							}
							printf("\n\n\n\t\t\t\t\tChoix ");
					     
						while(scanf("%d",&choix0)!=1)
						{
							
							system("cls");
							printf("\t\t\t");
							printf("\t\t\t");
						    printf("\n\n\t\t    \4 A C C U E I L \4\n\t\t");
						    printf("\n\n\t");
							for(i=0;i<41;i++)
							{
								printf("°");
							}
							printf("\n\t°\t\t\t\t\t°\n\t°\t\t\t\t\t°\n\t°\t1: Menu \t\t\t°");
							printf("\n\t°\t\t\t\t\t°\n\t°\t\t\t\t\t°\n\t°\t2: Parametres \t\t\t°");
							printf("\n\t°\t\t\t\t\t°\n\t°\t\t\t\t\t°\n\t°\t3: Mises a jour \t\t°");
							printf("\n\t°\t\t\t\t\t°\n\t°\t\t\t\t\t°\n\t°\t4: Instructions \t\t°");
							printf("\n\t°\t\t\t\t\t°\n\t°\t\t\t\t\t°\n\t°\t5: A propos \t\t\t°");
							printf("\n\t°\t\t\t\t\t°\n\t°\t\t\t\t\t°\n\t°\t0: Quitter \t\t\t°");
							printf("\n\t°\t\t\t\t\t°\n\t°\t\t\t\t\t°\n\t°\t\t\t\t\t°");
							printf("\n\t");
							for(i=0;i<41;i++)
							{
								printf("°");
							}
							printf("\n\n\n\t\t\t\t\tChoix ");
							getchar();
						}
					
					switch(choix0)
					{
					case 1:
							/*	system("cls");
								printf("\n\n\n\n\n\t\t\tPatientez un instant...");
								printf("\n\n\n\n\n\n\t\t\t\t");
								for(i=0;i<=5;i++)
								{
									printf("..");
									sleep(1);
								}*/
							do
							{	
								
								system("cls");
								printf("\n\n\n\t\t\4 M E N U G E N E R A L \4\n\n\t\t");
								printf("\n\t");
								for(i=0;i<41;i++)
									{
										printf("°");Sleep(15);
									}
								printf("\n\t°\t\t\t\t\t°\n\t°\t\t\t\t\t°\n\t°\t1: Exercices elementaires \t°");
								printf("\n\t°\t\t\t\t\t°\n\t°\t\t\t\t\t°\n\t°\t2: Jeux multiplication \t\t°");
								printf("\n\t°\t\t\t\t\t°\n\t°\t\t\t\t\t°\n\t°\t3: Jeux allumettes \t\t°");
								printf("\n\t°\t\t\t\t\t°\n\t°\t\t\t\t\t°\n\t°\t0: Retour \t\t\t°");
								printf("\n\t°\t\t\t\t\t°\n\t°\t\t\t\t\t°\n\t°\t\t\t\t\t°");
								printf("\n\t");
								for(i=0;i<41;i++)
									{
										printf("°");Sleep(15);
									}
								printf("\n\n\n\t\t\t\t\tChoix ");
								
								while(scanf("%d",&choix1)!=1)
								{
										system("cls");
										printf("\n\n\n\t\t\4 M E N U G E N E R A L \4\n\n\t\t");
										printf("\n\t");
										for(i=0;i<41;i++)
											{
												printf("°");Sleep(15);
											}
										printf("\n\t°\t\t\t\t\t°\n\t°\t\t\t\t\t°\n\t°\t1: Exercices elementaires \t°");
										printf("\n\t°\t\t\t\t\t°\n\t°\t\t\t\t\t°\n\t°\t2: Jeux multiplication \t\t°");
										printf("\n\t°\t\t\t\t\t°\n\t°\t\t\t\t\t°\n\t°\t3: Jeux allumettes \t\t°");
										printf("\n\t°\t\t\t\t\t°\n\t°\t\t\t\t\t°\n\t°\t0: Retour \t\t\t°");
										printf("\n\t°\t\t\t\t\t°\n\t°\t\t\t\t\t°\n\t°\t\t\t\t\t°");
										printf("\n\t");
										for(i=0;i<41;i++)
											{
												printf("°");Sleep(15);
											}
										printf("\n\n\n\t\t\t\t\tChoix ");
								}
								retour=0;
								accueil=0;
								switch(choix1)
								{
									
									case 1:
									
										//debut des exrecices elementaires
										
										do
										{	
												do
												{
													getchar();
													system("cls");
													                               printf("\n\n\n\t\t\4 E X E R C I C E S E L E M E N T A I R E S \4\n\n\n\t");
																		            for(i=0;i<65;i++)
																					{
																						printf("°");Sleep(15);
																					}
													printf("\n\t°\t\t\t\t\t\t\t\t°\n\t°\t\t\t\t\t\t\t\t°\n\t°\t1: Fature");						printf("\t\t\t11: PGCD & PPCM         °\n\t°\t\t\t\t\t\t\t\t°");
													printf("\n\t°\t\t\t\t\t\t\t\t°\n\t°\t\t\t\t\t\t\t\t°\n\t°\t2: Lettres Normalisees");		printf("\t\t12: Operations (+,*,-,/)°\n\t°\t\t\t\t\t\t\t\t°");
													printf("\n\t°\t\t\t\t\t\t\t\t°\n\t°\t\t\t\t\t\t\t\t°\n\t°\t3: Conversion Binaire");			printf("\t\t13: Table de X          °\n\t°\t\t\t\t\t\t\t\t°");
													printf("\n\t°\t\t\t\t\t\t\t\t°\n\t°\t\t\t\t\t\t\t\t°\n\t°\t4: Date de Paques");				printf("\t\t14: Triangle isocele    °\n\t°\t\t\t\t\t\t\t\t°");
													printf("\n\t°\t\t\t\t\t\t\t\t°\n\t°\t\t\t\t\t\t\t\t°\n\t°\t5: Gestionnaire");				printf("\t\t\t15: Nombre Parfait      °\n\t°\t\t\t\t\t\t\t\t°");
													printf("\n\t°\t\t\t\t\t\t\t\t°\n\t°\t\t\t\t\t\t\t\t°\n\t°\t6: Somme et Produit");           printf("\t\t16: Suite Reel          °\n\t°\t\t\t\t\t\t\t\t°");
													printf("\n\t°\t\t\t\t\t\t\t\t°\n\t°\t\t\t\t\t\t\t\t°\n\t°\t7: Premier multiple");           printf("\t\t17: Jeux de devinette   °\n\t°\t\t\t\t\t\t\t\t°");
													printf("\n\t°\t\t\t\t\t\t\t\t°\n\t°\t\t\t\t\t\t\t\t°\n\t°\t8: Moyenne General");            printf("\t\t18: Guichet Automatique °   \n\t°\t\t\t\t\t\t\t\t°");
													printf("\n\t°\t\t\t\t\t\t\t\t°\n\t°\t\t\t\t\t\t\t\t°\n\t°\t9: Factoriel et Puissance");     printf("\t19: Obesite             °\n\t°\t\t\t\t\t\t\t\t°");
													printf("\n\t°\t\t\t\t\t\t\t\t°\n\t°\t\t\t\t\t\t\t\t°\n\t°\t10: Nombre Premier");            printf("\t\t20: Tableaux            °\n\t°\t\t\t\t\t\t\t\t°");
													printf("\n\t");
																for(i=0;i<65;i++)
																{
																	printf("°");Sleep(15);
																}
													printf("\n\n\n\t\t0: Retour ");                                                 printf("\t\t\t30: Accueil\n");
																
													                                        printf("\n\n\t\t\t\tChoix ");
												}
												while(scanf("%d",&choixapp)!=1);
												retour=0;
												accueil=0;
												
												
												switch(choixapp)
												
												{
												case 1: 
												repapp=0;
												
														//debut de l'exercice 1
														telechargement(i);
														do
														{
															
															
															system("cls");
															printf("\n\n\tApplication 1: Facture\n\t\t");
															printf("\n\n\tEntrer le prix hors taxe  ");
															while(scanf("%f",&pht)!=1)
															{
																system("cls");
																printf("\n\n\tApplication 1: Facture\n\t\t");
																printf("\n\n\tEntrer le prix hors taxe\n\n\n\t");
																getchar();
															}
															
															    pttc=pht*(1+tva);
															    if(pttc>=5000)
															    {
															        pttc=pttc*(1-0.5);
															    }
															    else if(pttc>=2000)
															    {
															         pttc=pttc*(1-0.3);
															    }
															         else if(pttc>=1000)
															         {
															              pttc=pttc*(1-0.1);
															         }
															         else
															         {
															             pttc=pttc;
															         }
															
															    
															do
												            {	do
												            	{
												            		getchar();
																	system("cls");
																	printf("\n\n\tApplication 1: Facture\n\t\t");
																	printf("\n\n\tEntrer le prix hors taxe%5.0f",pht);
																	printf("\n\n\tLe prix toute taxe conquise est %5.1f FCFA\n\n\n\t\a",pttc);
												            		printf("\n\n\n\t\t1: Relancer \t\t20: Precedente \t\t0: Accueil \n\n\n\t\t\tChoix  ");
												            	}
												            	while(scanf("%d",&repapp)!=1);
												            		if((repapp!=1) && (repapp!=20) && (repapp!=0))
																		{
																			system("cls");
																			printf("\n\n\tApplication 1: Facture\n\t\t");
																			printf("\a\n\n\n\t\tIncorrecte");sleep(2);
																		}
												            }
												            while((repapp!=1) && (repapp!=20) && (repapp!=0));
												            if(repapp==0)
												            {
												            	repapp=50;
												            }
														}
														while(repapp==1);
														if(repapp==0)
															retour=20;
														else if(repapp==50)
														accueil=50;
													
												break;
													//fin de l'exercice 1
													
													//debut de l'exercice 2
												case 2:
														repapp=0;
														telechargement(i);
													do
														{
																		system("cls");
																		printf("\n\n\tApplication 2: Lettre\n\t\t");
																		printf("\n\n\tveuillez saisir la longueur ");
																		while(scanf("%f",&longueur)!=1)
																	{
																		system("cls");
																		printf("\n\n\tApplication 2: Lettre\n\n\n\t\t");
																		printf("\n\n\tveuillez saisir la longueur ");
																		getchar();
																	}
																	printf("\n\n\tveuillez saisir la largeur ");
																	while(scanf("%f",&largeur)!=1)
																	{
																		system("cls");
																		printf("\n\n\tApplication 2: Lettre\n\t\t");
																		printf("\n\n\tveuillez saisir la longueur   %10.1f",longueur);
																		printf("\n\n\tveuillez saisir la largeur ");
																		getchar();
																	}
																    if(((longueur>140)&&(longueur<235))&&((largeur>90)&&(largeur<120)))
																        printf("\n\n\tla lettre est normale\n\n");
																    else
																        {
																        printf("\n\n\tla lettre n'est pas normale\n\n");
																        }
																	
												           	do
														    {
														            	do
														            	{
														            		getchar();system("cls");
														            		printf("\n\n\tApplication 2: Lettre\n\t\t");
																			printf("\n\n\tveuillez saisir la longueur%5.0f",longueur);
																			printf("\n\n\tveuillez saisir la largeur%5.0f",largeur);
																			if(((longueur>140)&&(longueur<235))&&((largeur>90)&&(largeur<120)))
																	        printf("\n\n\tla lettre est normale\n\n");
																	    	else
																	        {
																	        printf("\n\n\tla lettre n'est pas normale\n\n");
																	        }
																			printf("\n\n\n\t\t1: Relancer \t\t20: Precedente \t\t0: Accueil \n\n\n\t\t\t\t\tChoix  ");
														            	
														            	}
																		while((scanf("%d",&repapp))!=1);
																		if((repapp!=1) && (repapp!=20) && (repapp!=0))
																		{
																			system("cls");
																			printf("\n\n\tApplication 2: Lettre\n\t\t");
																			printf("\a\n\n\n\t\tIncorrecte");sleep(2);
																		}
												            }
												            while((repapp!=1) && (repapp!=20) && (repapp!=0));
												            if(repapp==0)
												            {
												            	repapp=50;
												            }
														}
														while(repapp==1);
														if(repapp==0)
															retour=20;
														else if(repapp==50)
														accueil=50;
												break;
								
												
												//fin de l'exercice 2	
													case 3:
															//debute de l'exercice binaire
															telechargement(i);
																repapp=0;
													
														do
														{
												  			do
														    {
														       		 
														       	  do 
																   {
																   	getchar();
																	system("cls");
																	printf("\n\n\tApplication 3: Conversion binaire\n\t\t");
																	printf("\n\n\tSaisir un entier comprise entre 1 a 15 ");
																   }	 
														            while (scanf("%d",&n)!=1);
														        
														       
														    } while((n<1)  ||  (n>15));
														    a=n/2;    e=n%2;
														    b=a/2;    f=a%2;
														    c=b/2;    g=b%2;
														    d=c/2;    h=c%2;
														    		
															do
												            {
												            		
												            	do
												            	{
												            		getchar();
												            		system("cls");
																	printf("\n\n\tApplication 3: Conversion binaire\n\t\t");
																	printf("\n\n\tle nombre en binaire est: %d %d %d %d\n\n\n",h,g,f,e);
																	printf("\n\n\n\t\t1: Relancer \t\t20: Precedente \t\t0: Accueil \n\n\n\t\t\t\t\tChoix  ");
												            	}
												            	while(scanf("%d",&repapp)!=1);
												            	if((repapp!=1) && (repapp!=20) && (repapp!=0))
												            	{	
												            		system("cls");
												            		printf("\n\n\tApplication 3: Conversion binaire\n\n\n\t\t");
												            		printf("\a\n\n\tSaisi Incorrect,retapez svp!!!");
												            		sleep(2);
												            	}
												            
																
												            }
												            while((repapp!=1) && (repapp!=20) && (repapp!=0));
												            if(repapp==0)
												            {
												            	repapp=50;
												            }
														}
														while(repapp==1);
														if(repapp==0)
															retour=20;
														else if(repapp==50)
														accueil=50;
												  
												break;
												//fin de l'exercice binaire
													case 4:
														//debut de date de paques
														telechargement(i);
															repapp=0;
												       do
														{
															do
															{
															
																do
																{
																	getchar();
																	system("cls");
																	printf("\n\n\tApplication 5: Date de paques\n\t\t");
																	printf("\n\n\t\tEntrer une annee ");
																}
																while(scanf("%d",&x)!=1);
																if(x<1900 || x>2090)
																{
																	system("cls");
																	printf("\n\n\tApplication 5: Date de paques\n\t\t");
																	printf("\n\n\t\t\aSaisir une annee entre 1900 a 2090");
																	sleep(1);
																}
														    }while(x<1900 || x>2090);
														    a=x%19;
														    b=x%4;
														    c=x%7;
														    d=(19*a+24)%30;
														    e=(2*b+4*c+6*d+5)%7;
														    
															  do
												            {
												            	
												            	do
												            	{   getchar();
												            		system("cls");
																	printf("\n\n\tApplication 5: Date de paques\n\t\t");
																	printf("\n\n\t\tL'annee saisie est %d",x);
																	if(22+d+e>31)
																	{	
																		if(x==2015)
																		printf("\n\n\n\t\tla date de paques est le %d Avril %d\n\n",(22+d+e)-31,x);
																		else if(x>2015)
																		   printf("\n\n\n\t\tla date de paques sera le %d Avril %d\n\n",(22+d+e)-31,x);
																		   else if(x<2015)
																		   printf("\n\n\n\t\tla date de paques etait le %d Avril %d\n\n",(22+d+e)-31,x);
																	}
																	
														    		else
														        	{
														        		
														        		printf("\n\n\n\t\tla date de paques est le %d Mars %d\n\n",22+d+e,x);
														        	}
														        	printf("\n\n\n\t\t1: Relancer \t\t20: Precedente \t\t0: Accueil \n\n\n\t\t\t\t\tChoix  ");
												            	}
												            	while(scanf("%d",&repapp)!=1);
												            	if((repapp!=1) && (repapp!=20) && (repapp!=0))
																		{
																			system("cls");
																			printf("\n\n\tApplication 5: Date de paques\n\t\t");
																			printf("\a\n\n\n\t\tIncorrecte");sleep(2);
																		}
																
												            }
												            while((repapp!=1) && (repapp!=20) && (repapp!=0));
												            if(repapp==0)
												            {
												            	repapp=50;
												            }
														}
														while(repapp==1);
														if(repapp==0)
															retour=20;
														else if(repapp==50)
														accueil=50;
												break;
												//fin de date de paque
													
													case 5:
														//debut de lexo5
														telechargement(i);
														repapp=0;
														do
														{
														
														
																do
																{
																	getchar();
																	system("cls");
																	printf("\n\n\tApplication 5: Gestionnaire\n\t\t");
																	printf("\n\n\tSaisir le nombre d'heure ");
																}
																while(scanf("%f",&NH)!=1);
																if(NH<0)
																 {  system("cls");
																 	printf("\n\n\tIncorrecte");
																 	sleep(2);
																 	do
																	{
																		getchar();
																		system("cls");
																		printf("\n\n\tApplication 5: Gestionnaire\n\t\t");
																		printf("\n\n\tSaisir le nombre d'heure    ");
																	}
																	while(scanf("%f",&NH)!=1);
																 }
																do
																{
																	getchar();
																	system("cls");
																	printf("\n\n\tApplication 5: Gestionnaire\n\t\t");
																	printf("\n\n\tLe nombre d'heure saisi est %5.0f",NH);
																	printf("\n\n\tle taux horaire ");
																}
															    while(scanf("%f",&TH)!=1);
															    if(TH<0)
																 {  system("cls");
																	printf("\n\n\tApplication 5: Gestionnaire\n\t\t");
																 	printf("\n\n\tIncorrecte");
																 	sleep(2);
																 	do
																	{
																		getchar();
																		system("cls");
																		printf("\n\n\tApplication 5: Gestionnaire\n\t\t");
																		printf("\n\n\tLe nombre d'heure saisi est %5.0f",NH);
																		printf("\n\n\tSaisir le taux horaire  ");
																	}
																	while(scanf("%f",&TH)!=1);
																 }
															    do
															    {
															    	getchar();
																	system("cls");
																	printf("\n\n\tApplication 5: Gestionnaire\n\t\t");
																	printf("\n\n\tLe nombre d'heure saisi est %5.0f",NH);
																	printf("\n\n\tLe taux horaire saisi est %5.0f",TH);
																	printf("\n\n\tVeullez entrer le nombre d'enfant ");
																	
															    }
															    while(scanf("%f",&NE)!=1);
																
															    if(NE<0)
															    {  
															    	system("cls");
																    printf("\n\n\tIncorrecte");
															    
																do
															    {
															    	getchar();
																	system("cls");
																	printf("\n\n\tApplication 5: Gestionnaire\n\t\t");
																	printf("\n\n\tLe nombre d'heure saisi est %5.0f",NH);
																	printf("\n\n\tLe taux horaire saisi est %5.0f",TH);
																	printf("\n\n\tVeullez entrer le nombre d'enfant  ");
																	
															    }
															    while(scanf("%f",&NE)!=1);
																}
																	
												              do
												            {
												            	
												            	do
												            	{
												            		getchar();
																	system("cls");
																	printf("\n\n\tApplication 5: Gestionnaire\n\t\t");
																	printf("\n\n\tLe nombre d'heure saisi est %5.0f",NH);
																	printf("\n\n\tLe taux horaire saisi est %5.0f",TH);
																	printf("\n\n\tLe nombre d'enfant saisi est %5.0f",NE);
																	SB=NH*TH;
																    MRR=SB*0.04;
																    if(NE>4)
																    {
																        RE=SB*0.12;
																        SN=SB-(RE+MRR);
																    }
																    else if(NE>=1)
																    {
																        RE=SB*0.1;
																        SN=SB-(RE+MRR);
																    }
																    else
																    {printf("\a\n\n\tError le nombre d'enfant est null\n\n");}
																    if(NE>=1)
																    {
																        printf("\n\n\tLe salaire brute est %5.0f FCFA \n\n\t le salaire net est %5.0f FCFA\n\n ",SB,SN);
																    }
																        printf("\n\n\n\t\t1: Relancer \t\t20: Precedente \t\t0: Accueil \n\n\n\t\t\t\t\tChoix  ");
												            	}
												            	while(scanf("%d",&repapp)!=1);
											            	
										            			if((repapp!=1) && (repapp!=20) && (repapp!=0))
																{
																	system("cls");
																	printf("\n\n\tApplication 5: Gestionnaire\n\t\t");
																	printf("\a\n\n\n\t\tIncorrecte");sleep(2);
																}
															
												            }
												            while((repapp!=1) && (repapp!=20) && (repapp!=0));
												            if(repapp==0)
												            {
												            	repapp=50;
												            }
														}
														while(repapp==1);
														if(repapp==0)
															retour=20;
														else if(repapp==50)
														accueil=50;
												  
												break;
												//fin de l'exo5
													case 6:
														//debut de l'exercice 6
														telechargement(i);
														repapp=0;
												
														
														do
														{
															system("cls");
															printf("\n\n\tApplication 6: Somme et produit\n\t\t");
															a=0;
															b=1;
															
															for(i=1;i<=10;i++)
															{
																a = a + i;
																b = b * i;
															}
														
															do
												            {	do
												            	{
												            		getchar();
																	system("cls");
																	printf("\n\n\tApplication 6: Somme et produit\n\t\t");
																	printf("\n\n\t\t\t La somme des 10 premiers entiers est %d",a);
																	printf("\n\n\t\t\t Le produit des 10 premiers entiers est %d",b);
												            		printf("\n\n\n\t\t1: Relancer \t\t20: Precedente \t\t0: Accueil \n\n\n\t\t\t\t\tChoix  ");
												            	}
												            	while(scanf("%d",&repapp)!=1);
												            		if((repapp!=1) && (repapp!=20) && (repapp!=0))
																		{
																			system("cls");
																			printf("\n\n\tApplication 6: Somme et produit\n\t\t");
																			printf("\a\n\n\n\t\tIncorrecte");sleep(2);
																		}
												            }
												            while((repapp!=1) && (repapp!=20) && (repapp!=0));
												            if(repapp==0)
												            {
												            	repapp=50;
												            }
														}
														while(repapp==1);
														if(repapp==0)
															retour=20;
														else if(repapp==50)
														accueil=50;
												
												break;
													case 7:
														//DEBUT DE L4EXRECCE 7
													telechargement(i);
															repapp=0;
												  		do
														{
																			
															do
															{
																do
																{
																	getchar();
																	system("cls");
																	printf("\n\n\tApplication 7: Premiers Entiers Multiples\n\t\t");
																	printf("\n\n\tSaisir un entier ");
																}
																while(	scanf("%d",&n)!=1);
																
															
																if(n<0 || n>1000)
																{	
																	system("cls");
																	printf("\a\n\n\tSaisir une valeur entre 0 et 1000\n");
																	sleep(2);
															   	}
																
															} while( (n<0) || (n>1000) );
																	
												            do
												            {
												            				
												            	do
												            	{
												            		getchar();
												            		system("cls");
																	printf("\n\n\tApplication 7: Premiers Entiers Multiples\n\t\t");
																	printf("\n\n\tLe(s) premier(s) entier(s) multiple(s) de %d est ou sont : \n\n",n);
																	for(x=1;x<n;x++)
																	{
																		if( n%x==0 )
																		   printf("\n\n\t %d ",x);
																	}
																	printf("\n\n\n\t\t1: Relancer \t\t20: Precedente \t\t0: Accueil \n\n\n\t\t\t\t\tChoix  ");
												            		
												            	}
												            	while(scanf("%d",&repapp)!=1);
												      			if((repapp!=1) && (repapp!=20) && (repapp!=0))
																{
																	system("cls");
																	printf("\n\n\tApplication 7: Premiers Entiers Multiples\n\t\t");
																	printf("\a\n\n\n\t\tIncorrecte");
																	sleep(2);
																}
																
												            }
												            while((repapp!=1) && (repapp!=20) && (repapp!=0));
												            if(repapp==0)
												            {
												            	repapp=50;
												            }
														}
														while(repapp==1);
														if(repapp==0)
															retour=20;
														else if(repapp==50)
														accueil=50;
												  
												break;
												//fin de l'exrecice7
												break;
													case 8:
													//EXO8
													telechargement(i);
														repapp=0;
													do
													{			coef= 0; som = 0;
														do
														{
															do
															{
																	system("cls");
																	getchar();
																	printf("\n\n\tApplication 8: Moyenne General");
																	printf("\n\n\n\t\tEntrer le nombre de matieres  ");
															}
															while(scanf("%d",&n)!=1);
															if(n<=0)
															{
																printf("\n\n\t\tError !");sleep(2);
															}
														}
														while(n<=0);
														
														som=0;
														for(i=0;i<n;i++)
														{
															do
															{
																do
																{
																	getchar();
																	system("cls");
																	printf("\n\n\tApplication 8: Moyenne General");
																	printf("\n\n\n\t\tLe nombre de matieres est %d",n);
																	printf("\n\n\n\t\t\t Note [%d] ",i+1);
																}
																while(scanf("%d",&t[i])!=1);
																
																if(t[i]<0 || t[i]>20)
																{
																	printf("\n\n\t\t\t\t\tError !");
																	sleep(2);
																}
															}
															while( t[i]<0 || t[i]>20);
															som=t[i]+som;
															
												    	}
																	
															            	
														 do
											            {
											            				
											            	do
											            	{
									            				getchar();
																system("cls");
																printf("\n\n\tApplication 8: Moyenne General");
																printf("\n\n\n\t\tLe nombre de matieres est %d",n);
												            	printf("\n\n\n\t\tLa moyenne est  : %d",som/n);
												            	printf("\n\n\n\t\t1: Relancer \t\t20: Precedente \t\t0: Accueil \n\n\n\t\t\t\t\tChoix  ");
																
											            	}
											            	while(scanf("%d",&repapp)!=1);
											      			if((repapp!=1) && (repapp!=20) && (repapp!=0))
															{
																system("cls");
																printf("\n\n\tApplication 8: Moyenne General\n\t\t");
																printf("\a\n\n\n\t\tIncorrecte");
																sleep(2);
															}
															
											            }
											            while((repapp!=1) && (repapp!=20) && (repapp!=0));
											            if(repapp==0)
											            {
											            	repapp=50;
											            }
													}
													while(repapp==1);
													if(repapp==0)
														retour=20;
													else if(repapp==50)
													accueil=50;
										      	            	
												break;
													case 9:
														// debut de l'exo 9
													telechargement(i);
															repapp=0;
														do
														{			
															do
															{	getchar();
																system("cls");
																printf("\n\n\t 1:Factoriel\t\t\t 2: Puissance  ");
																printf("\n\n\t\t\t\tChoix ");
															}
															while(scanf("%d",&n)!=1);
															
															
															if(n==1)
															{	
																system("cls");
																printf("\n\n\tApplication 9: Factorieln\t\t");
																do
																{
																	do
																	{	
																	    getchar();
																		system("cls");
																		printf("\n\n\tApplication 9: Factoriel\n\t\t");
																		printf("\n\n\tSaisir une valeur ");	
																		
																	}
																	while(scanf("%d",&valfact)!=1);
																
																}while(valfact<0);
																
												               do
													            {
													            
													            	do
													            	{
													            	    getchar();
																		system("cls");
																		printf("\n\n\tApplication 9: Factoriel\n\t\t");
																		if(valfact==1 || valfact==0)
																		{
																		 	factoriel=1;
																		}
																		   else
																	    {
																			factoriel=1;
																			for(i=2;i<=valfact;i++)
																			{
																				factoriel = factoriel * i;
																			}
																			
																		}
																		printf("\n\n\t %d != %d",valfact,factoriel);
																		printf("\n\n\n\t\t1: Relancer \t\t20: Precedente \t\t0: Accueil \n\n\n\t\t\t\t\t\tChoix  ");
													            	}
													            	while(scanf("%d",&repapp)!=1);
													            		if((repapp!=1) && (repapp!=20) && (repapp!=0))
																		{
																			system("cls");
																			printf("\n\n\tApplication 9: Factoriel\n\t\t");
																			printf("\a\n\n\n\t\tIncorrecte");
																			sleep(2);
																		}
													            }while((repapp!=1) && (repapp!=20) && (repapp!=0));
													            if(repapp==0)
													            {
													            	repapp=50;
													            }
															}
															else if(n==2)
															{
																	
															    do
																{
																	do
																	{
																		system("cls");
															   			printf("\n\n\tApplication 9: Puissance\n\t\t");
															   			printf("\n\n\tSaisir une valeur ");
																	}
																	while(scanf("%lf",&valpui)!=1);
																}while(valpui<=0);
																do
																{
																	do
																	{
																		getchar();
																		system("cls");
															    		printf("\n\n\tApplication 9: Puissance\n\t\t");
																		printf("\n\n\tLa valeur saisie est %5.0lf",valpui);	
																		printf("\n\n\tSaisir une puissance  ");
																	}
																	while(scanf("%lf",&puissance)!=1);
																
																}while(puissance<0);
															
													            do
													            {
													            	
													            	do
													            	{
														            		getchar();
														            		system("cls");
														            		printf("\n\n\tApplication 9: Puissance\n\t\t");
													            			if(valpui==1 || valpui==0)
																			{
																			 	resultat=1;
																			}
																			else
																			{
																				resultat=1;
																				for(i=1;i<=puissance;i++)
																				resultat= resultat * valpui;
																			}	
																		    printf("\n\n\t%5.0f  puissance %5.0f = %5.0f",valpui,puissance,resultat);
																		    printf("\n\n\n\t\t1: Relancer \t\t20: Precedente \t\t0: Accueil \n\n\n\t\t\t\t\tChoix  ");
																
													            	}
													            	while(scanf("%d",&repapp)!=1);
														            if((repapp!=1) && (repapp!=20) && (repapp!=0))
																	{
																		system("cls");
																		printf("\n\n\tApplication 9: Puissance\n\t\t");
																		printf("\a\n\n\n\t\tIncorrecte");
																		sleep(2);
																	}
																	
													            }while((repapp!=1) && (repapp!=20) && (repapp!=0));
													            if(repapp==0)
													            {
													            	repapp=50;
													            }
												            
														   }
										            
														}
														while(repapp==1);
														if(repapp==0)
															retour=20;
														else if(repapp==50)
														accueil=50;
											
												break;
												//fin de l'exo 9;
													case 10:
														//deb ex 10
														telechargement(i);
															repapp=0;
														do
														{		
																	
															do
															{
																
																do
																{
																	getchar();
																	system("cls");
																	printf("\n\n\tApplication 10: Nombre Premier\n\t\t");
																	printf("\n\n\tSaisir un nombre ");
																}
																while(scanf("%d",&nombrepremier)!=1);
																
															}while(nombrepremier<=0);
															i=2;
															premier=1;
															while( ( i<=(nombrepremier/2) ) && (premier ==1) )
															{
																if(nombrepremier%i==0)
																{
																	premier=0;
																}
																i++;
															}
									         				 do
												            {
												            	
												            	do
												            	{
												            		getchar();
												            		system("cls");
																	printf("\n\n\tApplication 10: Nombre Premier\n\t\t");
																	printf("\n\n\tSaisir un nombre %d",nombrepremier);
																	if(premier==0)
																	printf("\n\n\t %d n'est pas premier",nombrepremier);
																	else
																	printf("\n\n\t %d est  premier",nombrepremier);
																	printf("\n\n\n\t\t1: Relancer \t\t20: Precedente \t\t0: Accueil \n\n\n\t\t\t\t\tChoix  ");
																	
												            	}
												            	while(scanf("%d",&repapp)!=1);
												            	if((repapp!=1) && (repapp!=20) && (repapp!=0))
												            	{	system("cls");
												            		printf("\n\n\tApplication 10: Nombre Premier\n\n\n\t\t");
												            		printf("\a\n\n\tIncorrecte!!!");
												            		sleep(2);
												            	}
												            	
												            	
												            }while((repapp!=1) && (repapp!=20) && (repapp!=0));
												            if(repapp==0)
												            {
												            	repapp=50;
												            }
											            
											  	   
														}
														while(repapp==1);
														if(repapp==0)
															retour=20;
														else if(repapp==50)
														accueil=50;
												break;
												//fin de l'exercice 10
													case 11:
													//debut de lexo 11;
													telechargement(i);
														repapp=0;
														do
														{			
																do
																{
																	system("cls");
																	printf("\n\n\t 1:PPCM\t\t\t 2: PGCM");
																	printf("\n\n\n\t\t\t\tChoix ");
																}
																while(scanf("%d",&n)!=1);
																if(n==1)
																{
																
																	do
															        {
															
															        	do
															        	{
															        		getchar();
															        		system("cls");
																	        printf("\n\n\tApplication 11: PPCM\n\t\t");
															        		printf("\n\n\tSaisie la premire valeur ");
															            	
															        	}
															            while(scanf("%f",&A)!=1);
																		do
																		{
																			getchar();
																			system("cls");
																	        printf("\n\n\tApplication 11: PPCM\n\t\t");
															        		printf("\n\n\tSaisie la premire valeur%5.0f",A);
															            	printf("\n\n\tSaisir la deuxieme valeur ");
																		
																		}
															            while( scanf("%f",&B)!=1);
															            
															           
															        }while( A<0 || B<0);
															     
																}
																
														        else if(n==2)
														        {
														        	
																	do
															        {
															            
															            do
																		{
																			getchar();
																			system("cls");
																	        printf("\n\n\tApplication 11: PGCD\n\n\n\t\t");
																	        printf("\n\n\tSaisie la premire valeur ");
															            }
															            while(scanf("%d",&dividende)!=1);
															            do
																		{
																			getchar();
																			system("cls");
																	        printf("\n\n\tApplication 11: PGCD\n\t\t");
																	        printf("\n\n\tSaisie la premire valeur%5.0",dividende);
																	        printf("\n\n\tSaisir la deuxieme valeur ");
															            }
															            while(scanf("%d",&diviseur)!=1);
															          
															        }while( dividende<0 || diviseur<0);
															        
															    }
																	
																
										           			  	 do
													            {
													            	
													            	do
																	{
																		getchar();
																		system("cls");
																		printf("\n\n\t 1:PPCM\t\t\t 2: PGCM");
																		if(n==1)
																		{
																			system("cls");
																			printf("\n\n\tApplication 11: PPCM\n\t\t");
																			printf("\n\n\tSaisie la premire valeur %10.0f",A);
																			printf("\n\n\tSaisie la premire valeur %10.0f",B);
																			SA=A;
																	        SB=B;
																	        while(SA!=SB)
																	        {
																	            if(SA<SB)
																	                SA = A + SA;
																	            else
																	                SB = SB + B;
																	        }
																			printf("\n\n\t Le PPCM   de   %10.0f  et  %10.0f est %10.0f \n",A,B,SA);
																			printf("\n\n\n\t\t1: Relancer \t\t20: Precedente \t\t0: Accueil \n\n\n\t\t\t\t\tChoix  ");
																		}
																		else if(n==2)
																		{
																			system("cls");
																	        printf("\n\n\tApplication 11: PGCD\n\t\t");
																	        printf("\n\n\tSaisie la premire valeur%5.0d",dividende);
																	        printf("\n\n\tSaisir la deuxieme valeur%5.0d",diviseur);
																			C=dividende;
																	        D=diviseur;
																	        reste = dividende % diviseur;
																	        while(reste!=0)
																	        {
																	        	dividende = diviseur;
																	        	diviseur = reste;
																	        	reste = dividende % diviseur;
																	        }
															        
															        		printf("\n\n\tLe PGCD  de  %6d  et  %6d est %6d ",C,D,diviseur);
																			printf("\n\n\n\t\t1: Relancer \t\t20: Precedente \t\t0: Accueil \n\n\n\t\t\t\t\tChoix  ");
																		}
													            	}
													            	while(scanf("%d",&repapp)!=1);
													            	if((repapp!=1) && (repapp!=20) && (repapp!=0))
															            	{	system("cls");
															            		printf("\n\n\tApplication 11: PPCM ET PGCD\n\t\t");
															            		printf("\a\n\n\tIncorrecte!!!");
															            		sleep(2);
															            	}
															            	
													            
													            }while((repapp!=1) && (repapp!=20) && (repapp!=0));
													            if(repapp==0)
													            {
													            	repapp=50;
													            }
												          
														}
														while(repapp==1);
														if(repapp==0)
															retour=20;
														else if(repapp==50)
														accueil=50;
												
												  
													break;
													//fin de l'exo11
													case 12:
														telechargement(i);
														//DEBUT DE LEXO12
															repapp=0;
														do
														{		
																system("cls");
																printf("\n\n\tApplication 12: 0peration Arithmethique\n\t\t");
																printf("\n\n\tSaisir une valeur ");
															while(scanf("%d",&a)!=1)
															{
																system("cls");
																printf("\n\n\tApplication 12: 0peration Arithmethique\n\t\t");
																printf("\n\n\tSaisir une valeur ");
																getchar();
															}
															printf("\n\n\tSaisir une deuxieme valeur ");
															while(scanf("%d",&b)!=1)
															{
																system("cls");
																printf("\n\n\tApplication 12: 0peration Arithmethique\n\t\t");
																printf("\n\n\tSaisir une valeur  %d",a);
																printf("\n\n\tSaisir une deuxieme valeur ");
																getchar();
															}
															printf("\n\n\tSaisir l'operateur ");
															scanf("%s",&operateur);
																					
									                       do
												            {
												            	
												            	do
																{
																	getchar(); 
																	system("cls");
												            		printf("\n\n\tApplication 12: 0peration Arithmetique\n\t\t");
												            		printf("\n\n\tSaisir une valeur  %d",a);
																	printf("\n\n\tSaisir une deuxieme valeur %d",b);
												            			printf("\n\n\tSaisir l'operateur %c",operateur);
																        
																		switch(operateur)
																		{
																			case '+':
																				printf("\n\n\tLa somme fait %d",a+b);
																				break;
																			case '-':
																				printf("\n\n\tLa difference fait %d",a-b);
																				break;
																			case '*':
																				printf("\n\n\tLe produit fait %d",a*b);
																				break;
																			case '/':
																				switch(b)
																				{
																					case 0:printf("\n\n\t L'operation impossible car %d est null",b);break;
																					default : printf("\n\n\tLe rapport est %d",a/b);break;
																				}
																				
																				break;
																			default : printf("erreur recommencer");break;
																	 	}
												            		printf("\n\n\n\t\t1: Relancer \t\t20: Precedente \t\t0: Accueil \n\n\n\t\t\t\t\tChoix  ");	
												            	}
												            	while(scanf("%d",&repapp)!=1);
												            		
																if((repapp!=1) && (repapp!=20) && (repapp!=0))
												            	{	system("cls");
												            		printf("\n\n\tApplication 12: 0peration Arithmethique\n\t\t");
												            		printf("\a\n\n\tIncorrecte!!!");
												            		sleep(2);
												            	}		
												            	
																
												            }while((repapp!=1) && (repapp!=20) && (repapp!=0));
												            if(repapp==0)
												            {
												            	repapp=50;
												            }
											            
												            
														}
														while(repapp==1);
														if(repapp==0)
															retour=20;
														else if(repapp==50)
														accueil=50;
												  
												break;
													case 13:
														telechargement(i);
														//dedut de l'exercice 13
															repapp=0;
														do
														{		
														
									             			do
												            {
												            	do
												            	{
												            		getchar();
												            		system("cls");
												            		printf("\n\n\tApplication 13: Table de multiplication");
												            		printf("\n\n\n");
												            		for(i=0;i<74;i++)
															        {
															        	printf("\4");
															        }
															        printf("\n\n\n");
																	for(i=1;i<11;i++)
															        {
															            
															            
															            for(k=1;k<6;k++)
															            {
															                printf("%d * %d = %d\t",i,k,i*k);
															           
															            }
															          printf("\n\n\n");
															        }
															        printf("\n\n\n");
															        for(i=0;i<74;i++)
															        {
															        	printf("\4");
															        }
															    
															        printf("\n\n\n");
															        	for(i=1;i<11;i++)
															        {
															            
															            
															            for(k=6;k<11;k++)
															            {
															                printf("%d * %d = %d\t",i,k,i*k);
															           
															            }
															          printf("\n\n\n");
															        }
															        printf("\n\n\n");
															        for(i=0;i<74;i++)
															        {
															        	printf("\4");
															        }
															    
															        printf("\n\n\n");
												            	
																	printf("\n\n\n\t\t1: Relancer \t\t20: Precedente \t\t0: Accueil \n\n\n\t\t\t\t\tChoix  ");
																			
												            	}
												            	while(scanf("%d",&repapp)!=1);
											            		if((repapp!=1) && (repapp!=20) && (repapp!=0))
											            		{	
																    system("cls");
												            		printf("\n\n\tApplication 13: Table de multiplication\n\t\t");
												            		printf("\a\n\n\tIncorrecte!!!");
												            		sleep(2);
											                 	}		
																
												            }while((repapp!=1) && (repapp!=20) && (repapp!=0));
											            
													  		 if(repapp==0)
												            {
												            	repapp=50;
												            }
												            
										            
														}
														while(repapp==1);
														if(repapp==0)
															retour=20;
														else if(repapp==50)
														accueil=50;
												
												break;
												//fin de exo13
													case 14:
														//DEBUT DE LEXO14
														telechargement(i);
															repapp=0;
													do
													{
														system("cls");
														printf("\n\n\tApplication 14: Triangle isocele\n\t\t");
														do
											            {	
															system("cls");
															printf("\n\n\tApplication 14: Triangle isocele\n\t\t");
											                printf("\n\n\tEntrer la base (nombre impair) ou Saisir une valeur >= 13 ");
											                while(scanf("%d",&base)!=1)
											                {
											                	system("cls");
																printf("\n\n\tApplication 14: Triangle isocele\n\t\t");
																printf("\n\n\tEntrer la base (nombre impair) ou Saisir une valeur >= 13 ");
																getchar();
											                }
											               
											            }
											            while((base%2==0)||(base>=13));
											            printf("\n\n\t\t\t");
											            n=1;
											
											            //le corps du programme;
											
											            while(n<=base)
											            {
											                E=(base-n)/2;
											                for(i=1;i<=E;i++)
											                {
											                   printf("    ");
											                }
											                
											                for(i=1;i<=n;i++)
											                {
											                  printf("*   ");
											                }
											                
											                printf("\n\n\n\t\t\t");
											                n=n+2;
											            }
							                           do 
											            {
											            	printf("\n\n\n\t\t1: Relancer \t\t20: Precedente \t\t0: Accueil \n\n\n\t\t\t\t\tChoix  ");
											            	while(scanf("%d",&repapp)!=1)
											            	{	system("cls");
											            		printf("\n\n\tApplication 14: Triangle isocele\n\t\t");
											            		printf("\n\n\n\t\t1: Relancer \t\t20: Precedente \t\t0: Accueil \n\n\n\t\t\t\t\tChoix  ");
																getchar();		
											            	}
											            	if((repapp!=1) && (repapp!=20) && (repapp!=0))
											            	{
											            		system("cls");
											            		printf("\n\n\tApplication 14: Triangle isocele\n\t\t");
											            		printf("\a\n\n\tIncorrecte!!!");
											            		sleep(2);
											            		
											            	}
															
											            }while((repapp!=1) && (repapp!=20) && (repapp!=0));
										            	if(repapp==0)
											            {
											            	repapp=50;
											            }
											              
												   }
													while(repapp==1);
													if(repapp==0)
													retour=20;
													else if(repapp==50)
													accueil=50;
													break;
													case 15:
														//debut de l'exercice 15
															repapp=0;
														do
														{
																	system("cls");
																	printf("\n\n\tApplication 15: Nombre Parfait\n\t\t");
															do
															{
																	printf("\n\n\tSaisir un nombre entre 1 et 50 ");
																while(scanf("%d",&n)!=1)
																{
																	system("cls");
																	printf("\n\n\tApplication 15: Nombre Parfait\n\t\t");
																	printf("\n\n\tSaisir un nombre entre 1 et 50 ");
																	getchar();
																}
																
															}while(n<1 || n>50);
																
												           	do
												            {
												            	
												            	do
												            	{
												            		getchar();	
												            		system("cls");
												            		printf("\n\n\tApplication 15: Nombre Parfait\n\t\t");
												            		som=0;
																	for(i=1;i<n;i++)
																	{
																		if(n%i==0)
																		{
																			som= som + i;
																		}
																	}
																	printf("\n\n\t %d",n);
																	if(som==n)
																	printf("\n\n\t est parfait\n");
																	else
																	{
																		printf("\n\n\t n'est pas parfait\n");
																	}
																	printf("\n\n\n\t\t1: Relancer \t\t20: Precedente \t\t0: Accueil \n\n\n\t\t\t\t\tChoix  ");
												            	}
												            	while(scanf("%d",&repapp)!=1);
												            		
																if((repapp!=1) && (repapp!=20) && (repapp!=0))
												            	{
												            		system("cls");
												            		printf("\n\n\tApplication 15: Nombre Parfait\n\t\t");
												            		printf("\a\n\n\tIncorrecte!!!");
												            		sleep(2);
												            		
												            	}		
											            	
												            }
												            while((repapp!=1) && (repapp!=20) && (repapp!=0));
									            			if(repapp==0)
												            {
												            	repapp=50;
												            }
														            
														}
														while(repapp==1);
														if(repapp==0)
															retour=20;
														else if(repapp==50)
														accueil=50;
														retour=0;
														
												break;
												//fin de l'ex15
												case 16:
														//debut de l'exercice 16
														telechargement(i);
															repapp=0;
														do
														{			
																	nbr=0;
																	system("cls");
																	printf("\n\n\tApplication 16: Suite reel ");
																	printf("\n\n\t\tL'arret de la suite est 0");
															do
															{
																printf("\n\n\t Saisir le reel ");
																while(scanf("%d",&n)!=1)
																{
																	system("cls");
																	printf("\n\n\tApplication 16: Suite reel ");
																	printf("\n\n\t\t\t\t\tSaisir le reel ");
																	getchar();
																}
																if(n==0)
																printf("\n\n\t\t\tSuite arrete\n");
																else
																nbr++;
																	if(nbr==1)
																	{
																		som= n;
																		min= n;
																		max= n;
																	}
																	else
																	if(n>0)
																	{
																		som = som + n;
																		if(min>n)
																		min = n;
																		else if(max<n)
																		max = n;
																	}
															}while(n!=0);
															if(nbr==1)
															printf("\n\n\t Pas de min pas de max moyenne est %d et\n\n\t le nombre de reel saisi est %d",n,nbr);
															else if(nbr!=0 && nbr!=1)
															printf("\n\n\t\t\tmin = %d\tmax = %d\n\n\t\t\tsom=%d\tmoy=%d\n\n\t\t\tnombre de reel=%d",min,max,som,som/nbr,nbr);
													
												           	do
												            {
												            	do
																{
												            		getchar();
												            		system("cls");
												            		printf("\n\n\tApplication 16: Suite reel\n\n\n\t\t");
												            		if(nbr==1)
																	printf("\n\n\t Pas de min pas de max moyenne est %d et\n\n\t le nombre de reel saisi est %d",n,nbr);
																	else if(nbr!=0 && nbr!=1)
																	printf("\n\n\t\t\tMinimum = %d\tMaximum = %d\n\n\t\t\tSomme = %d\tMoyenne = %d\n\n\t\t\tnombre de reel = %d",min,max,som,som/nbr,nbr);
												            		printf("\n\n\n\t\t1: Relancer \t\t20: Precedente \t\t0: Accueil \n\n\n\t\t\t\t\tChoix  ");
																	
																}while(scanf("%d",&repapp)!=1);	
												            	if((repapp!=1) && (repapp!=20) && (repapp!=0))
												            	{
												            		system("cls");
												            		printf("\n\n\tApplication 16: Suite reel\n\n\n\t\t");
												            		printf("\n\n\t\t\t\t\aSaisie incorrecte reessayer");
												            		sleep(2);
												            		
												            	}
																
												            }
												            while((repapp!=1) && (repapp!=20) && (repapp!=0));
									            			if(repapp==0)
												            {
												            	repapp=50;
												            }
														            
														}
														while(repapp==1);
														if(repapp==0)
															retour=20;
														else if(repapp==50)
														accueil=50;
														retour=0;
													
												break;
												case 17:
														//DEBUT DE L4EXRECCE 17
														telechargement(i);
															repapp=0;
															
												  		do
														{					
																	srand(time(NULL));
																	nombremystere = ( rand() % (MAX - MIN) ) + 	MIN;
																	system("cls");
																	printf("\n\n\tApplication 17: Jeux de Devinette\n\t\t");
																	printf("\n\n\t\tDevinez le nombre choisi par l'ordinateur ");
																	nbr=0;
															do
															{
																while(scanf("%d",&nombreentrer)!=1)
																{
																	
																	system("cls");
																	printf("\n\n\tApplication 17: Jeux de Devinette\n\t\t");
																	printf("\n\n\t\tDevinez le nombre choisi par l'ordinateur ");
																	getchar();
																}
																if(nombreentrer==0)
																	printf("\n\n\t\t\t\tJeux arret!!!");
																else
																{
																	nbr++;
																	if(nombreentrer>nombremystere)
																	printf("\n\n\t\t\t\tC'est moins ");
																	else if(nombreentrer<nombremystere)
																	printf("\n\n\t\t\t\tC'est plus ");
																}
																		
																
															}while( nombreentrer!=0	&& nombreentrer != nombremystere && nbr!=10 );
																
											
												            do
												            {
								            					
												              do	
														       {
													       			getchar();
																	system("cls");
													            	printf("\n\n\tApplication 17: Jeux devinette\n\n\n\t\t");
													            	if( nombreentrer != nombremystere && nbr==10)
																	{
																		printf("\n\n\t\tGAME OVER !!!\n");
																		printf("\n\n\t\tLe nombre choisit par l'ord est : %d",nombremystere);
																	}
																	else if( nombreentrer == nombremystere )
																	printf("\n\n\t\tBravo !!! \t vous avez devine le bon nombre en %d cout ",nbr);
													            	printf("\n\n\n\t\t1: Relancer \t\t20: Precedente \t\t0: Accueil \n\n\n\t\t\t\t\tChoix  ");
																				
												               }while(scanf("%d",&repapp)!=1);
												               if((repapp!=1) && (repapp!=20) && (repapp!=0))
												               {
													               	system("cls");
													               	printf("\n\n\tApplication 17: Jeux devinette\n\n\n\t\t");
													               	printf("\n\n\t\t\tSaisie incorrecte,reessayer!!!");
													               	sleep(2);
												               }
																				
												            }
												            while((repapp!=1) && (repapp!=20) && (repapp!=0));
												            if(repapp==0)
															{
															    repapp=50;
															}
														            
												            
														}
														while(repapp==1);
														if(repapp==0)
															retour=20;
														else if(repapp==50)
														accueil=50;	
												break;
												//fin de l'exercie 17
												case 18:
														//DEBUT DE L4EXRECCE 18
														telechargement(i);
															repapp=0;
															
												  		do
														{								
																						
															nf=0;
															do
															{
																do
																{
																	getchar();
																	system("cls");
																	printf("\n\n\tApplication 18: Guichet Automatique\n\t\t");
																	printf("\n\n\tSaisir le mot de passe  ");
																}
																while(scanf("%d",&mdp)!=1);
																
																nf++;
															}
															while(nf!=3 && mdp!=1452);
															if( mdp!=1452 && nf==3)
															{
																printf("\n\n\tCompte bloque Au revoir!!!\n");sleep(2);
															}
															else
															{
																 do
															   {
															   		printf("\n\n\tSaisir la somme ");
															   		while(scanf("%d",&som)!=1)
															   		{
																   			system("cls");
																			printf("\n\n\tApplication 18: Guichet Automatique\n\t\t");
																   			printf("\n\n\tSaisir la somme ");
																   			getchar();
															   		}
															   		if(som>1000)
															   		printf("\n\n\t Montant < 1000\n");
															   		if(som % 10 != 0 )
															   		printf("\n\n\tMontant divible par 10\n");
															   		if( som % 10 == 0 && som <= 1000)
															   		{
															   			n50 = som / 50; a = som % 50;
															   			n20 = a / 20;  b = a % 20;
															   			n10 = b / 10;
															   			
															   		}
															   	
															   }
															   while(som>1000 || (som % 10)!=0) ;
	
															}
																				  
												            do
												            {
									            							
								            					do
																{
																	getchar();
																	system("cls");
																	printf("\n\n\tApplication 18: Guichet Automatique\n\n\n\t\t");
																	printf("\n\n\tSaisir le mot de passe %d",mdp);
																	if(som%10==0 && som<=1000 && mdp==1452)
																		printf("\n\n\tSaisir la somme %d",som);
																	if(som%10==0 && som<=1000 && mdp==1452)
																			printf("\n\n\tVous avez  %d billets de 10 euros et %d billets de 20 euros \n\n\n\t\tet %d billets de 50 euros",n10,n20,n50);
																	printf("\n\n\n\t\t1: Relancer \t\t20: Precedente \t\t0: Accueil \n\n\n\t\t\t\t\tChoix  ");
								            					}
												            	while(scanf("%d",&repapp)!=1);
															    
									                       }
												            while((repapp!=1) && (repapp!=20) && (repapp!=0));
												            if(repapp==0)
															{
															    repapp=50;
															}
												            
														}
														while(repapp==1);
														if(repapp==0)
															retour=20;
														else if(repapp==50)
														accueil=50;	
														
												break;
												case 19:
														repapp=0;
														telechargement(i);
												
														//debut de l'exercice 19
														do
														{
														  	do
															{	
																getchar();
																system("cls");
																printf("\n\n\tApplication 19: Obesite\n\t\t");
																printf("\n\n\t\tSaisir le poids ");
														    
														    }while(scanf("%lf",&poids)!=1);
														    do
															{	
																getchar();
																system("cls");
																printf("\n\n\t\Application 19: Obesite\n\t\t");
																printf("\n\n\t\tSaisir le poids %10.0lf",poids);
																printf("\n\n\t\tSaisir la taille ");
														    
														    }while(scanf("%lf",&taille)!=1);
														    
														    	resultat=poids/ pow(taille,2);
														    
															do
												            {	do
												            	{
												            		getchar();
																	system("cls");
																	printf("\n\n\tApplication 19: Obesite\n\t\t");
																	printf("\n\n\t\tVotre poids est %10.0lf",poids);
																	printf("\n\n\t\tVotre taille est %10.0lf",taille);
																	if(resultat>25)
																    {
																        printf("\n\n\t\t\tVous etes en  surpoids ");
																    }
																    else if(resultat<25)
																    {
																        printf("\n\n\t\t\tVous n'etes pas en surpoids ");
																    }
												            		printf("\n\n\n\t\t1: Relancer \t\t20: Precedente \t\t0: Accueil \n\n\n\t\t\t\t\tChoix  ");
												            	}
												            	while(scanf("%d",&repapp)!=1);
											            		if((repapp!=1) && (repapp!=20) && (repapp!=0))
																{
																	system("cls");
																	printf("\n\n\tApplication 19: Obesite\n\t\t");
																	printf("\a\n\n\n\t\tIncorrecte");sleep(2);
																}
												            }
												            while((repapp!=1) && (repapp!=20) && (repapp!=0));
												            if(repapp==0)
												            {
												            	repapp=50;
												            }
														}
														while(repapp==1);
														if(repapp==0)
															retour=20;
														else if(repapp==50)
														accueil=50;
														
												break;
												case 20:
														/*debut des tableaux*/
														
														
													do
													{
														do
														{	getchar();
															system("cls");
																
															                         printf("\n\n\t\t\t\4 T A B L E A U X \4\n\n\t");
															                         for(i=0;i<60;i++)
																						{
																							printf("°");
																							Sleep(20);
																						}
														    printf("\n\n\n\tUNIDIMENSIONNELS"); 				printf("\t\t\tMULTIDIMENSIONNELS");
														   	printf("\n\n\n\t1: Suppression des zeros");	        printf("\t\t7: Produit matriciel");
														   	printf("\n\n\n\t2: Tri par Bulle");	                printf("\t\t\t8: Matrice symetrique");
														   	printf("\n\n\n\t3: Partition d'un tableau");	    printf("\t\t9: Matrice Diagonale");
														   	printf("\n\n\n\t4: Dichotomie");	                printf("\t\t\t\t10: Identite d'une matrice"); 
														   	printf("\n\n\n\t5: Miroir");	                    printf("\t\t\t\t11: Somme matricienne"); 
														   	printf("\n\n\n\t6: Palindrome");	                printf("\t\t\t\t12: Initialisation "); 
														   	printf("\n\n\n\t\t\t\t0: Retour\n\n\n\t");
														   								for(i=0;i<60;i++)
																						{
																							printf("°");
																							Sleep(20);
																						}
															                        printf("\n\n\n\t\t\t\tChoix ");	
															                        
														}while(scanf("%d",&choixtab)!=1);
														switch(choixtab)
														/*dedu swh tab*/
														{
															
															
															case 1:
																telechargement(i);
																do
																{	
																	do
																	{
																		getchar();
																		system("cls");
																		printf("\n\n\tApplication 1: Suppression des valeurs nulls");
																		printf("\n\n\t\tSaisir la taille effective du tableau ");
																	}while(scanf("%d",&n)!=1);
																		    
																		    cpt=0;
																		    //saisie les element du tableau
																		
																    for(i=0;i<n;i++)
																    {
																        
																        do
																        {	getchar();
																        	system("cls");
																        	printf("\n\n\tApplication 1: Suppression des valeurs nulls");
																			printf("\n\n\t\tSaisir la taille effective du tableau %d",n);
																        	printf("\n\n\t\t\tElements[%d] : ",i);
																        }while(scanf("%d",&tab[i])!=1);
																		
																        if(tab[i]==0)
																            cpt++;
																
																    }
																	do
																	{
																		    
																		do
																		{	getchar();
																			system("cls");
																			printf("\n\n\tApplication 1: Occurence d'un nombre ");
																			//Affichage du tableau avant suppression
																		    printf("\n\n\t\tAvant suppression\n\n\t\t\t");
																		    for(i=0;i<n;i++)
																		    {
																		    	printf("  %d ",tab[i]);
																		    }
																		    //Apres suppression
																		    for(i=0;i<n;i++)
																		    {
																		        while((tab[i]==0) && (i<=n))
																		        {
																		            for(j=i;j<=n;j++)
																		            {
																		                tab[j]=tab[j+1];
																		            }
																		            n--;
																		        }
																		
																		    }
																		
																		    
																		    printf("\n\n\t\tApres suppression des valeurs nulls\n\n\t\t\t");
																		    for(i=0;i<n;i++)
																		    {
																		        printf("  %d  ",tab[i]);
																		    }
																		    printf("\n\n\t\tOn a %d valeurs nulles\n\n",cpt);
																			printf("\n\n\t1:Relancer\t\t0:retour\t\t2: Menu exercice \n\n\n\t\t\t");
																			printf("\n\n\t\t\tChoix ");
																			
																		}
																		while(scanf("%d",&choixtab)!=1);
																		if(choixtab!=1 && choixtab!=0 && choixtab!=2)
																		{
																			system("cls");
																			printf("\n\n\tApplication 1: Occurence d'un nombre");
																			printf("\a\n\n\tincorrect reessayer");
																			sleep(2);
																			
																		}
																   }while(choixtab!=1 && choixtab!=0 && choixtab!=2);
																   if(choixtab==2)
																   {
																   	retourtab=10;
																   	retour=0;
																   }
																	
																	
																}while(choixtab==1);
																
															break;
															case 2: 
															telechargement(i);
															//debut de tri a bulle
																do
																{	
																	do
																    {	
																    	getchar();
																    	system("cls");
																    	printf("\n\n\tApplication 2: Tri par Bulle");
																        printf("\n\n\t\tSaisir la taille du tableau ");
																	    
																    }while(scanf("%d",&n)!=1);
																		
																	        //saisi des element du tableau
																	for(i=0;i<n;i++)
																	{	
																		
																		do
																		{
																			getchar();
																			system("cls");
																			printf("\n\n\tApplication 2: Tri par Bulle");
															        		printf("\n\n\t\tSaisir la taille du tableau %d",n);
																			printf("\n\n\t\tElenments [%d] : ",i);
																	
																	    }while(scanf("%d",&tab[i])!=1);
																	}
																	do
																	{
																		do
																		{	
																			getchar();
																			system("cls");
																			printf("\n\n\tApplication 2: Tri par Bulle");
																			printf("\n\n\t\tTableau avant tri\n\t\t\n\t\t");
																			for(i=0;i<n;i++)
																			{
																				printf("  %d  ",tab[i]);
																			}
																			
																			der=n;
																		
																			do
																		    {
																	            for(i=0;i<der;i++)
																	            {
															                        if(tab[i]>tab[i+1])
															                        {
															                            per=tab[i];
															                            tab[i]=tab[i+1];
															                            tab[i+1]=per;
															                        }
																	            }
																		            der=der-1;
																		    }while(der!=1);
																		
																			printf("\n\n\t\tApres  tri \n\t\t\n\t\t");
																			for(i=0;i<n;i++)
																			{
																				printf("  %d  ",tab[i]);
																			}
																			printf("\n\n\t1:Relancer\t\t0:retour\t\t2: Menu exercice n\n\t\t\t");
																			printf("\n\t\t\tChoix ");
																			
																		}
																		while(scanf("%d",&choixtab)!=1);
																		if(choixtab!=1 && choixtab!=0 && choixtab!=2)
																		{
																			system("cls");
																			printf("\n\n\tApplication 2: Tri par Bulle");
																			printf("\a\n\n\tincorrect reessayer");
																			sleep(2);
																			
																		}
																	
																	
																   }while(choixtab!=1 && choixtab!=0 && choixtab!=2);
																   if(choixtab==2)
																   {
																   	retourtab=10;
																   	retour=0;
																   }
																	
																	
																}while(choixtab==1);
															break;
															//fin de tri a bulle
															case 3:
															//debut de l'ap 3
															telechargement(i);
																do
																{	
																	do
																    {	
																    	getchar();
																    	system("cls");
																    	printf("\n\n\tApplication 3: Partition d'un tableau");
																    	printf("\n\n");
																        printf("\n\n\t\tSaisir la taille du tableau ");
																	    
																    }while(scanf("%d",&n)!=1);
																	for(i=0;i<=n-1;i++)
																    {
															    		do
															    		{
															    			getchar();
																			system("cls");
																			printf("\n\n\tApplication 3: Partition d'un tableau");
																			printf("\n\n");
																			printf("\n\n\t\tSaisir la taille du tableau %d",n);
																			printf("\n");
																			printf("\n\n\t\t\tElements [%d] :",i);
																				
															            }while(scanf("%d",&T[i])!=1);
																    }
																    j=0;k=0;
																    for(i=0;i<=n-1;i++)
																    {
																        if(T[i]%2==0)
																        {
																            j++;
																            T1[j]=T[i];
																        }
																        else
																        {
																            k++;
																            T2[k]=T[i];
																
																        }
																    }
																	do
																	{
																			    
																		do
																		{
																			getchar();
																		    system("cls");
																		    printf("\n\n\tApplication 3: Partition d'un tableau");
																		    printf("\n\n");
																		    printf("\n\n\t\t\tTableau pair\n\t\t\t\n\n");
																		    printf("\t\t\t");
																		    
																		    for(i=1;i<=j;i++)
																		    {
																		
																		        printf("  %d  ",T1[i]);
																		    }
																		    printf("\n\n");
																		    printf("\n\n\t\t\tTableau impair\n\t\t\t\n\n");
																		    printf("\t\t\t");
																		
																		    for(i=1;i<=k;i++)
																		    {
																		        printf("   %d  ",T2[i]);
																		    }
																	     
																			printf("\n\n");
																			printf("\n\n\t1:Relancer\t\t0:retour\t\t2: Menu exercice \n\t\t\t");
																			printf("\n\n\t\t\tChoix ");
																			
																		}
																		while(scanf("%d",&choixtab)!=1);
																		if(choixtab!=1 && choixtab!=0 && choixtab!=2)
																		{
																			system("cls");
																			printf("\n\n\tApplication 3: Partition d'un tableau");
																			printf("\a\n\n\tincorrect reessayer");
																			sleep(2);
																			
																		}
																	
																	
																   }while(choixtab!=1 && choixtab!=0 && choixtab!=2);
																   if(choixtab==2)
																   {
																   	retourtab=10;
																   	retour=0;
																   }
																	
																	
																}while(choixtab==1);
															break;
															//fin  d'ap3
															case 4:
															//debut de l'ap 4
															telechargement(i);
																do
																{	
																	do
																    {	
																    	getchar();
																    	system("cls");
																    	printf("\n\n\tApplication 4: Dichotomie");
																    	printf("\n\n");
																        printf("\n\n\t\tSaisir la taille du tableau ");
																	    
																    }while(scanf("%d",&n)!=1);
																	    
																	for(i=0;i<n;i++)
																	{		
																		do
																		{
																			getchar();
																			system("cls");
																			printf("\n\n\tApplication 4: Dichotomie");
																			printf("\n\n");
																			printf("\n\n\t\tSaisir la taille du tableau %d",n);
																			printf("\n\n\t\t\tElements [%d]",i);
																			
																	   }while(scanf("%d",&T[i])!=1);
																	}
															
																	do
																	{	
																		getchar();
																		system("cls");
																		printf("\n\n\tApplication 4: Dichotomie");
																		printf("\n\n\t\t\t");
																		for(i=0;i<n;i++)
																		{		
																				
																				printf(" %d ",T[i]);
																				
																		}
																	
																		printf("\n\n\t\t\tSaisir la valeur a cherche  ");
																	}while( scanf("%d",&val)!=1);
																	i=0;
																	binf = 0;
																	bsup = n - 1;
																	do
																	{
																		i=( binf + bsup)/2;
																		if(T[i]>val)
																			bsup = i - 1;
																		else if(T[i]<val);
																			binf = i + 1;
																		
																	} while((T[i]!=val) && (binf<=bsup));
																	do
																	{
																			
																		do
																		{
																				getchar();	
																				system("cls");
																				printf("\n\n\tApplication 4: Dichotomie");
																				printf("\n\n\t\t\tLa valeur a cherche est %d",val);
																			
																			if(T[i]==val)
																				printf("\n\n\t\t\tElle se trouve a l'emplacement %d \n\n",i);
																			else
																			{
																				printf("\n\n\t\t\tElle ne se figure pas sur le tableau\n\n");
																			}
																														
																				printf("\n\n\t1:Relancer\t\t0:retour\t\t2: Menu exercice \n\t\t\t");
																				printf("\n\n\t\t\t\tChoix ");
																			
																		}
																		while(scanf("%d",&choixtab)!=1);
																		if(choixtab!=1 && choixtab!=0 && choixtab!=2)
																		{
																				system("cls");
																				printf("\n\n\tApplication 4: Dichotomie");
																				printf("\a\n\n\tincorrect reessayer");
																				sleep(2);
																			
																		}
																	
																	
																   }while(choixtab!=1 && choixtab!=0 && choixtab!=2);
																   if(choixtab==2)
																   {
																   	retourtab=10;
																   	retour=0;
																   }
																	
																	
																}while(choixtab==1);
															break;
															//fin  d'ap4
															case 5:
															//debut de l'ap 5
															telechargement(i);
																do
																{	
																	do
																    {	
																    	getchar();
																    	system("cls");
																    	printf("\n\n\tApplication 5: Miroir");
																    	printf("\n\n");
																        printf("\n\n\t\tSaisir la taille du tableau ");
																	    
																    }while(scanf("%d",&n)!=1);
																	    
																		   printf("\n\n\t\tVeuillez saisir les elements du tableau 1");
																			sleep(2);
																for(i=0;i<n;i++)
																	{		
																			system("cls");
																			printf("\n\n\tApplication 5: Miroir");
																			printf("\n\n");
																			printf("\n\n\t\tSaisir la taille du tableau 1 %d",n);
																			printf("\n\n\t\t\tElements [%d] ",i);
																			fflush(stdin);
																			scanf("%c",&tab1[i]);
																	}
																	printf("\n\n\t\tVeuillez saisir les elements du tableau 2");
																	sleep(2);
																	for(i=0;i<n;i++)
																	{		
																			system("cls");
																			printf("\n\n\tApplication 5: Miroir");
																			printf("\n\n");
																			printf("\n\n\t\tSaisir la taille du tableau 2 %d",n);
																			printf("\n\n\t\t\tElements [%d] ",i);
																			fflush(stdin);
																			scanf("%c",&tab2[i]);
																	}
																
																	mir = 1;
																	i = 0;
																	while((i<n) && (mir == 1))
																	{
																		if(tab1[i] != tab2[n-i-1])
																		{
																			mir = 0;
																		}
																		i++;
																	}
																		if(mir == 1)
																	{		system("cls");
																			printf("\n\n\tApplication 5: Miroir");
																			printf("\n\n\t\tLes deux tableaux sont miroirs\n\n");
																			
																		for(i=0;i<=n;i++)
																		{	
																			printf("\t\t %c ",tab1[i]);
																		}
																			printf("\n\n");
																		for(i=0;i<=n;i++)
																		
																		{		
																			printf("\t\t %c ",tab2[i]);
																		}
																	}
																	else if( mir == 0)
																	{
																			system("cls");
																			printf("\n\n\tApplication 5: Miroir");
																			printf("\n\n\t\tLes deux tableaux  ne sont pas miroirs\n\n");
																		for(i=0;i<n;i++)
																		{		
																		
																			printf("\t\t %c ",tab1[i]);
																				
																		}
																		printf("\n\n");
																		
																		for(i=0;i<n;i++)
																		
																		{		
																		
																			printf("\t\t %c ",tab1[i]);
																			
																		}
																	}
																	do
																	{
																	
																		do
																		{
																			getchar();
																			system("cls");
																			if(mir == 1)
																			{		system("cls");
																					printf("\n\n\tApplication 5: Miroir");
																					printf("\n\n\t\tLes deux tableaux sont miroirs\n\n");
																					
																				for(i=0;i<=n;i++)
																				{	
																					printf("\t\t %c ",tab1[i]);
																				}
																				printf("\n\n");
																				for(i=0;i<=n;i++)
																				
																				{		
																					printf("\t\t %c ",tab2[i]);
																				}
																			}
																			else if( mir == 0)
																			{
																					system("cls");
																					printf("\n\n\tApplication 5: Miroir");
																					printf("\n\n\t\tLes deux tableaux  ne sont pas miroirs\n\n");
																				for(i=0;i<n;i++)
																				{	
																						printf("\t %c ",tab1[i]);
																						
																				}
																				printf("\n\n");
																				for(i=0;i<n;i++)
																				
																				{		
																				
																						printf("\t %c ",tab2[i]);
																					
																						
																				}
																			}
																		printf("\n\n\t1:Relancer\t\t0:retour\t\t2: Menu exercice \n\t\t\t");
																		printf("\n\n\t\t\t\tChoix ");
																		
																		}
																		while(scanf("%d",&choixtab)!=1);
																		if(choixtab!=1 && choixtab!=0 && choixtab!=2)
																		{
																			system("cls");
																			printf("\n\n\tApplication 5: Miroir");
																			printf("\a\n\n\tincorrect reessayer");
																			sleep(2);
																			
																		}
																	
																	
																   }while(choixtab!=1 && choixtab!=0 && choixtab!=2);
																   if(choixtab==2)
																   {
																   	retourtab=10;
																   	retour=0;
																   }
																	
																	
																}while(choixtab==1);
															break;
																//debut de l'ap 5
															case 6:
																telechargement(i);
																do
																{	
																	do
																    {	
																    	getchar();
																    	system("cls");
																    	printf("\n\n\tApplication 6: Palindrome");
																    	printf("\n\n");
																        printf("\n\n\t\tSaisir la taille du tableau ");
																	    
																    }while(scanf("%d",&n)!=1);
																	    
																		system("cls");
																		printf("\n\n\tApplication 6: Palindrome");
																		printf("\n\n");
																		printf("\n\n\t\tSaisir la taille du tableau %d",n);
																		   //Saisi des elements
																	for(i=0;i<n;i++)
																	{		
																		system("cls");
																		printf("\n\n\tApplication 6: Palindrome");
																		printf("\n\n");
																		printf("\n\n\t\tSaisir la taille du tableau 1 %d",n);
																		printf("\n\n\t\t\tElements [%d]",i);
																		fflush(stdin);
																		scanf("%c",&tab1[i]);
																	}
																	pal=1;
																	i = 0;
																	while(i<=n/2 && pal==1)
																	{
																		if(tab1[i]!=tab1[n-i-1])
																		{
																			pal=0;
																		}
																		i++;
																	}
																	do
																	{
																	
																		do
																		{
																			getchar();
																			system("cls");
																			if(pal==1)
																			{	
																				printf("\n\n\tApplication 6: Palindrome");
																				printf("\n\n\t\t Le mot est un palindrome\n\n");
																					
																				for(i=0;i<n;i++)
																				{	
																					printf("\t %c ",tab1[i]);
																				}
																				printf("\n\n");
																			
																			}
																			else
																			{
																			
																				printf("\n\n\tApplication 6: Palindrome");
																				printf("\n\n\t\tLe mot n'est pas un palindrome\n\n");
																				for(i=0;i<n;i++)
																				{		
																				
																						printf("\t %c ",tab1[i]);
																						
																				}
																				printf("\n\n");
																			
																			}
																			printf("\n\n\t1: Relancer\t\t0: Retour\t\t2: Menu exercice \n\n\n\t\t\t");
																			printf("\n\n\t\t\tChoix ");
																			
																		}
																		while(scanf("%d",&choixtab)!=1);
																		if(choixtab!=1 && choixtab!=0 && choixtab!=2)
																		{
																			system("cls");
																			printf("\n\n\tApplication 6: Palindrome");
																			printf("\a\n\n\tincorrect reessayer");
																			sleep(2);
																			
																		}
																	
																	
																   }while(choixtab!=1 && choixtab!=0 && choixtab!=2);
																   if(choixtab==2)
																   {
																   	retourtab=10;
																   	retour=0;
																   }
																	
																	
																}while(choixtab==1);
															break;
															case 7:
																//debut de produi
																	telechargement(i);
															do
																{	
																	do
																	{
																		getchar();
																		system("cls");
																		printf("\n\n\t\tApplication 7: Produit de deux matrices ");
																		printf("\n\n\t\t\tMATRICE A");
																	        // saisir de la premiere matrice;
																	        printf("\n\n\t\t\tSaisir le nombre de lignes A ");
																	}while(scanf("%d",&n)!=1);
																	do
																	{
																		getchar();
																		system("cls");
																		printf("\n\n\t\tApplication 7: Produits de deux matrices ");
																		printf("\n\n\t\t\tMATRICE A");
																	        // saisir de la premiere matrice;
																	        printf("\n\n\t\t\tSaisir le nombre de lignes %d",n);
																	        printf("\n\n\t\t\tSaisir le nombre de colonnes  ");
																	}while(scanf("%d",&m)!=1);
																    printf("\n\n\t\t\tSaisir les elements de la matrice A");
																    sleep(2);
																    for(i=0;i<n;i++)
																    {
																        for(j=0;j<m;j++)
																        {
																            do
																			{
																				getchar();
																				system("cls");
																				printf("\n\n\t\tApplication 7: Produit de deux matrices ");
																				printf("\n\n\t\t\tMATRICE A");
																        			// saisir de la premiere matrice;
																        		printf("\n\n\t\t\tSaisir le nombre de lignes %d",n);
																        		printf("\n\n\t\t\tSaisir le nombre de colonnes %d",m);
																				printf("\n\n\t\t\t\telements [%d][%d] : ",i,j);
																            	
																			}while(scanf("%d",&matA[i][j])!=1);
																        }
																
																    }
																		   //Saisie de la 2iem matrice
																	printf("\n\n\t\t\tSaisir les elements de la matrice B");
																    sleep(2);
																	do
																	{
																		getchar();
																		system("cls");
																		printf("\n\n\t\tApplication 7: Produit de deux matrices");
																		printf("\n\n\t\t\tMATRICE B");
																	        // saisir de la premiere matrice;
																        printf("\n\n\t\t\tLe nombre de lignes de A=B %d",m);
																        printf("\n\n\t\t\tSaisir le nombre de colonnes  ");
																	}while(scanf("%d",&p)!=1);
																	    
																    for(i=0;i<m;i++)
																    {
																        for(j=0;j<p;j++)
																        {
																            do
																			{
																				getchar();
																				system("cls");
																				printf("\n\n\t\t Application 7: Produit de deux matrices ");
																				printf("\n\n\t\tMATRICE B");
																        			// saisir de la premiere matrice;
																        		printf("\n\n\t\t\tSaisir le nombre de lignes %d",m);
																        		printf("\n\n\t\t\tSaisir le nombre de colonnes %d",p);
																				printf("\n\n\t\t\t\telements [%d][%d] : ",i,j);
																            	
																			}while(scanf("%d",&matB[i][j])!=1);
																        }
																
																    }
																
															        //matrice resultat
																    for(i=0;i<n;i++)
																    {
																    	
																        for(j=0;j<p;j++)
																        {
																        	matC[i][j]=0;
																           for(k=0;k<n;k++)
																		   {
																		   	matC[i][j] = matC[i][j] + matA[i][k] * matB[k][j];
																		   } 	
																        }
																
																    }
																	do
																	{
																	
																		do
																		{
																			getchar();
																			system("cls");
																			printf("\n\n\t\tApplication 7: Produit de deux matrices");
																			printf("\n\n\t\t\tMATRICE A");
																		        // saisir de la premiere matrice;
																	        printf("\n\n\t\t\tLe nombre de lignes de A est %d",n);
																	        printf("\n\n\t\t\tSaisirLe nombre de colonnes de A est %d",m);
																		    	   
																		    //AFFICHAGE DE LA PREMIERE MATRICE;
																		    printf("\n\n\t\t\tMATRICE A");
																		    printf("\n\n\n");
																		    
																		    for(i=0;i<n;i++)
																		    {
																		    	printf("\t\t\t");
																		        for(j=0;j<m;j++)
																		        {
																		            printf(" %d ",matA[i][j]);
																		
																		        }
																		        printf("\n\n");
																		
																		    }
																		    	printf("\n\n\t\t\tMATRICE B");
																		        // saisir de la premiere matrice;
																	        printf("\n\n\t\t\tLe nombre de lignes de B est %d",m);
																	        printf("\n\n\t\t\tSaisirLe nombre de colonnes de B est %d",p);
																		    	   
																		    //AFFICHAGE DE LA PREMIERE MATRICE;
																		    printf("\n\n\t\t\tMATRICE B");
																		    printf("\n\n\n");
																		    
																		    for(i=0;i<m;i++)
																		    {
																		    	printf("\t\t\t");
																		        for(j=0;j<p;j++)
																		        {
																		            printf(" %d ",matB[i][j]);
																		
																		        }
																		        printf("\n\n");
																		
																		    }
																		    printf("\n\n\t\t\tProduit matricien");
																		    printf("\n\n\n");
																		    
																		    for(i=0;i<n;i++)
																		    {
																		    	printf("\t\t\t");
																		        for(j=0;j<p;j++)
																		        {
																		            printf(" %d ",matC[i][j]);
																		
																		        }
																		        printf("\n\n");
																		
																		    }
																		    
																			
																			printf("\n\n\t1: Relancer\t\t0: Retour\t\t2: Menu exercice \n\t\t\t");
																			printf("\n\n\t\t\t\tChoix ");
																			
																		}
																		while(scanf("%d",&choixtab)!=1);
																		if(choixtab!=1 && choixtab!=0 && choixtab!=2)
																		{
																			system("cls");
																			printf("\n\n\tApplication 7: Produit de deux matrices ");
																			printf("\a\n\n\tincorrect reessayer");
																			sleep(2);
																			
																		}
																	
																	
																   }while(choixtab!=1 && choixtab!=0 && choixtab!=2);
																   if(choixtab==2)
																   {
																   	retourtab=10;
																   	retour=0;
																   }
																	
																	
																}while(choixtab==1);
																
																
													break;
															//fin  d'ap7
															case 8:
																//debut de l'xo 8
																telechargement(i);
															   do
																{	
																	do
																	{
																		getchar();
																		system("cls");
																		printf("\n\n\t\tApplication 8: Matrice symetrique\n");
																		printf("\n\n\t\t\tMATRICE ");
																	        // saisir de la premiere matrice;
																	        printf("\n\n\t\t\tSaisir le nombre de lignes ");
																	}while(scanf("%d",&n)!=1);
																	do
																	{
																		getchar();
																		system("cls");
																		printf("\n\n\t\tApplication 8: Matrice symetrique\n");
																		printf("\n\n\t\t\tMATRICE ");
																	        // saisir de la premiere matrice;
																	        printf("\n\n\t\t\tSaisir le nombre de lignes %d",n);
																	        printf("\n\n\t\t\tSaisir le nombre de colonnes  ");
																	}while(scanf("%d",&m)!=1);
																    
																    for(i=0;i<n;i++)
																    {
																        for(j=0;j<m;j++)
																        {
																            do
																			{
																				getchar();
																				system("cls");
																				printf("\n\n\t\tApplication 8: Matrice symetrique\n");
																				printf("\n\n\t\t\tMATRICE ");
																        			// saisir de la premiere matrice;
																        		printf("\n\n\t\t\tSaisir le nombre de lignes %d",n);
																        		printf("\n\n\t\t\tSaisir le nombre de colonnes %d",m);
																				printf("\n\n\t\t\t\telements [%d][%d] : ",i,j);
																            	
																			}while(scanf("%d",&matA[i][j])!=1);
																        }
																
																    }
																		   sym = 1;
																		   i = 1;
																	do
																	{
																	
																		do
																		{
																			getchar();
																			system("cls");
																			printf("\n\n\t\tApplication 8: Matrice symetrique\n");
																			printf("\n\n\t\t\tMATRICE A\n");
																		        // saisir de la premiere matrice;
																	        printf("\n\n\t\t\tSaisir le nombre de lignes %d",n);
																	        printf("\n\n\t\t\tSaisir le nombre de colonnes %d",m);
																		    	   
																		    //AFFICHAGE DE LA PREMIERE MATRICE;
																		    printf("\n\n\t\t\tMATRICE");
																		    printf("\n\n\n");
																		    
																		    for(i=0;i<n;i++)
																		    {
																		    	printf("\t\t\t");
																		        for(j=0;j<m;j++)
																		        {
																		            printf(" %d ",matA[i][j]);
																		
																		        }
																		        printf("\n\n");
																		
																		    }
																		    sym=1;i=0;
																		    while(sym==1 && i<n)
																		    {
																		    	j=0;
																		    	while(j<=m && sym==1)
																		    	{
																		    		if(j!=i && matA[i][j]!=matA[j][i])
																		    		{
																		    			sym=0;
																		    		}
																		    		j++;
																		    	}
																		    	i++;
																		    }
																		    if(sym==1)
																		    printf("\n\n\t\t\tLa matrice est symetrique");
																		    else
																		    {
																		    	printf("\n\n\t\t\tLa matrice n'est pas symetrique");
																		    }
																			
																			printf("\n\n\t1: Relancer\t\t0: Retour\t\t2: Menu exercice \n\t\t\t");
																			printf("\n\n\t\t\t\tChoix ");
																			
																		}
																		while(scanf("%d",&choixtab)!=1);
																		if(choixtab!=1 && choixtab!=0 && choixtab!=2)
																		{
																			system("cls");
																			printf("\n\n\tApplication 8: Matrice symetrique");
																			printf("\a\n\n\tincorrect reessayer");
																			sleep(2);
																			
																		}
																	
																	
																   }while(choixtab!=1 && choixtab!=0 && choixtab!=2);
																   if(choixtab==2)
																   {
																   	retourtab=10;
																   	retour=0;
																   }
																	
																	
																}while(choixtab==1);
															break;
															//fin  d'ap8
															
															case 9:
																//debut de l'xo 9
																telechargement(i);
															   do
																{	
																	do
																	{
																		getchar();
																		system("cls");
																		printf("\n\n\t\tApplication 9: Matrice diagonale\n");
																		printf("\n\n\t\t\tMATRICE ");
																	        // saisir de la premiere matrice;
																	        printf("\n\n\t\t\tSaisir le nombre de lignes ");
																	}while(scanf("%d",&n)!=1);
																	do
																	{
																		getchar();
																		system("cls");
																		printf("\n\n\t\tApplication 9: Matrice diagonale\n");
																		printf("\n\n\t\t\tMATRICE ");
																	        // saisir de la premiere matrice;
																        printf("\n\n\t\t\tSaisir le nombre de lignes %d",n);
																        printf("\n\n\t\t\tSaisir le nombre de colonnes  ");
																	}while(scanf("%d",&m)!=1);
																	    
																    for(i=0;i<n;i++)
																    {
																        for(j=0;j<m;j++)
																        {
																            do
																			{
																				getchar();
																				system("cls");
																				printf("\n\n\t\tApplication 9: Matrice diagonale\n");
																				printf("\n\n\t\t\tMATRICE ");
																        			// saisir de la premiere matrice;
																        		printf("\n\n\t\t\tSaisir le nombre de lignes %d",n);
																        		printf("\n\n\t\t\tSaisir le nombre de colonnes %d",m);
																				printf("\n\n\t\t\t\telements [%d][%d] : ",i,j);
																            	
																			}while(scanf("%d",&matA[i][j])!=1);
																        }
																
																    }
																   sym = 1;
																   i = 1;
																	do
																	{
																	
																		do
																		{
																			getchar();
																			system("cls");
																			printf("\n\n\t\tApplication 9: Matrice diagonale\n");
																			printf("\n\n\t\t\tMATRICE ");
																		        // saisir de la premiere matrice;
																	        printf("\n\n\t\t\tSaisir le nombre de lignes %d",n);
																	        printf("\n\n\t\t\tSaisir le nombre de colonnes %d",m);
																		    	   
																		    //AFFICHAGE DE LA PREMIERE MATRICE;
																		    printf("\n\n\t\t\tMATRICE");
																		    printf("\n\n\n");
																		    
																		    for(i=0;i<n;i++)
																		    {
																		    	printf("\t\t\t");
																		        for(j=0;j<m;j++)
																		        {
																		            printf(" %d ",matA[i][j]);
																		
																		        }
																		        printf("\n\n");
																		
																		    }
																		    diag=1;i=0;
																		    while(diag==1 && i<n)
																		    {
																		    	j=0;
																		    	while(j<=m && diag==1)
																		    	{
																		    		if(j!=i && matA[i][j]!=0)
																		    		{
																		    			diag=0;
																		    		}
																		    		j++;
																		    	}
																		    	i++;
																		    }
																		    if(diag==1)
																		    printf("\n\n\t\t\tLa matrice est diagonale");
																		    else
																		    {
																		    	printf("\n\n\t\t\tLa matrice n'est pas diagonale");
																		    }
																			
																			printf("\n\n\t1:Relancer\t\t0:retour\t\t2: Menu exercice \n\t\t\t");
																			printf("\n\n\t\t\t\tChoix ");
																			
																		}
																		while(scanf("%d",&choixtab)!=1);
																		if(choixtab!=1 && choixtab!=0 && choixtab!=2)
																		{
																			system("cls");
																			printf("\n\n\tApplication 9: Matrice diagonale");
																			printf("\a\n\n\tincorrect reessayer");
																			sleep(2);
																			
																		}
																	
																	
																   }while(choixtab!=1 && choixtab!=0 && choixtab!=2);
																   if(choixtab==2)
																   {
																   	retourtab=10;
																   	retour=0;
																   }
																	
																	
																}while(choixtab==1);
															break;
														
															//fin  d'ap9
															case 10 :
																telechargement(i);
															//identite d'une matrice
																do
																{	
																	do
																    {	
																    	getchar();
																    	system("cls");
																    	printf("\n\n\tApplication 10: Identite d'une matrice ");
																        printf("\n\n\t\tSaisir le nombre de lignes ");
																	    
																    }while(scanf("%d",&n)!=1);
																    do
																    {	
																    	getchar();
																    	system("cls");
																    	printf("\n\n\tApplication 10: Identite d'une matrice ");
																        printf("\n\n\t\tSaisir le nombre de lignes %d",n);
																	    printf("\n\n\t\tSaisir le nombre de colones ");
																    }while(scanf("%d",&m)!=1);
																		
																	do     
																	{
																		do
																		{	
																			getchar();
																			system("cls");
																			printf("\n\n\tApplication 10: Identite d'une matrice ");
																			printf("\n\n");
																			 for(i=0;i<n;i++)
																            {
																                for(j=0;j<m;j++)
																                {
																                          if(i==j)
																                            printf("    %d    ",matA[i][j]=1);
																                          else
																                            printf("    %d    ",matA[i][j]=0);
																                 }
																                 printf("\n\n");
																            }
																			printf("\n\n\t1: Relancer\t\t0: Retour\t\t2: Menu exercice \n\n\t\t\t");
																			printf("\n\t\t\t\tChoix ");
																			
																		}
																		while(scanf("%d",&choixtab)!=1);
																		if(choixtab!=1 && choixtab!=0 && choixtab!=2)
																		{
																			system("cls");
																			printf("\n\n\tApplication 10: Identite d'une matrice");
																			printf("\a\n\n\tincorrect reessayer");
																			sleep(2);
																			
																		}
																	
																	
																   }while(choixtab!=1 && choixtab!=0 && choixtab!=2);
																   if(choixtab==2)
																   {
																   	retourtab=10;
																   	retour=0;
																   }
																	
																	
																}while(choixtab==1);
															break;
															//identite  d'une matrice
															case 11 :
																//debut de somme
																	telechargement(i);
																do
																{	
																	do
																	{
																		getchar();
																		system("cls");
																		printf("\n\n\t\tApplication 11: Somme de deux matrices ");
																		printf("\n\n\t\t\tMATRICE A");
																	        // saisir de la premiere matrice;
																	        printf("\n\n\t\t\tSaisir le nombre de lignes A ");
																	}while(scanf("%d",&n)!=1);
																	do
																	{
																		getchar();
																		system("cls");
																		printf("\n\n\t\tApplication 11: Somme de deux matrices ");
																		printf("\n\n\t\t\tMATRICE A");
																	        // saisir de la premiere matrice;
																	        printf("\n\n\t\t\tSaisir le nombre de lignes %d",n);
																	        printf("\n\n\t\t\tSaisir le nombre de colonnes  ");
																	}while(scanf("%d",&m)!=1);
																    printf("\n\n\t\t\tSaisir les elements de la matrice A");
																    sleep(2);
																    for(i=0;i<n;i++)
																    {
																        for(j=0;j<m;j++)
																        {
																            do
																			{
																				getchar();
																				system("cls");
																				printf("\n\n\t\tApplication 11: Somme de deux matrices ");
																				printf("\n\n\t\t\tMATRICE A");
																        			// saisir de la premiere matrice;
																        		printf("\n\n\t\t\tSaisir le nombre de lignes %d",n);
																        		printf("\n\n\t\t\tSaisir le nombre de colonnes %d",m);
																				printf("\n\n\t\t\t\telements [%d][%d] : ",i,j);
																            	
																			}while(scanf("%d",&matA[i][j])!=1);
																        }
																
																    }
																	   //Saisie de la 2iem matrice
																	printf("\n\n\t\t\tSaisir les elements de la matrice B");
																    sleep(2);
																    do
																	{
																		getchar();
																		system("cls");
																		printf("\n\n\t\tApplication 11: Somme de deux matrices");
																		printf("\n\n\t\t\tMATRICE B");
																        printf("\n\n\t\t\tLe nombre de lignes de B ");
																        
																	}while(scanf("%d",&n)!=1);
																	do
																	{
																		getchar();
																		system("cls");
																		printf("\n\n\t\tApplication 11: Somme de deux matrices");
																		printf("\n\n\t\t\tMATRICE B");
																        printf("\n\n\t\t\tLe nombre de lignes de B %d",n);
																        printf("\n\n\t\t\tSaisir le nombre de colonnes  ");
																	}while(scanf("%d",&m)!=1);
																	    
																    for(i=0;i<n;i++)
																    {
																        for(j=0;j<m;j++)
																        {
																            do
																			{
																				getchar();
																				system("cls");
																				printf("\n\n\t\t Application 11: Somme de deux matrices ");
																				printf("\n\n\t\tMATRICE B");
																        			// saisir de la premiere matrice;
																        		printf("\n\n\t\t\tSaisir le nombre de lignes %d",n);
																        		printf("\n\n\t\t\tSaisir le nombre de colonnes %d",m);
																				printf("\n\n\t\t\t\telements [%d][%d] : ",i,j);
																            	
																			}while(scanf("%d",&matB[i][j])!=1);
																        }
																
																    }
																		
															       //matrice resultat
																    for(i=0;i<n;i++)
																    {
																    	matC[i][j]=0;
																        for(j=0;j<m;j++)
																        {
																        	
																		   	matC[i][j] = matA[i][j] + matB[i][j];
																		   	
																        }
																
																    }
																	do
																	{
																	
																		do
																		{
																			getchar();
																			system("cls");
																			printf("\n\n\t\tApplication 11: Produit de deux matrices");
																			printf("\n\n\t\t\tMATRICE A");
																		        // saisir de la premiere matrice;
																	        printf("\n\n\t\t\tLe nombre de lignes de A est %d",n);
																	        printf("\n\n\t\t\tSaisirLe nombre de colonnes de A est %d",m);
																		    	   
																		    //AFFICHAGE DE LA PREMIERE MATRICE;
																		    printf("\n\n\t\t\tMATRICE A");
																		    printf("\n\n\n");
																		    
																		    for(i=0;i<n;i++)
																		    {
																		    	printf("\t\t\t");
																		        for(j=0;j<m;j++)
																		        {
																		            printf(" %d ",matA[i][j]);
																		
																		        }
																		        printf("\n\n");
																		
																		    }
																		    	printf("\n\n\t\t\tMATRICE B");
																		        // saisir de la premiere matrice;
																	        printf("\n\n\t\t\tLe nombre de lignes de B est %d",m);
																	        printf("\n\n\t\t\tSaisirLe nombre de colonnes de B est %d",p);
																		    	   
																		    //AFFICHAGE DE LA PREMIERE MATRICE;
																		    printf("\n\n\t\t\tMATRICE B");
																		    printf("\n\n\n");
																		    
																		    for(i=0;i<n;i++)
																		    {
																		    	printf("\t\t\t");
																		        for(j=0;j<m;j++)
																		        {
																		            printf(" %d ",matB[i][j]);
																		
																		        }
																		        printf("\n\n");
																		
																		    }
																		    printf("\n\n\t\t\tSomme de deux matrices");
																		    printf("\n\n\n");
																		    
																		    for(i=0;i<n;i++)
																		    {
																		    	printf("\t\t\t");
																		        for(j=0;j<m;j++)
																		        {
																		            printf(" %d ",matC[i][j]);
																		
																		        }
																		        printf("\n\n");
																		
																		    }
																		    
																			
																			printf("\n\n\t1: Relancer\t\t0: Retour\t\t2: Menu exercice \n\t\t\t");
																			printf("\n\n\t\t\t\tChoix ");
																			
																		}
																		while(scanf("%d",&choixtab)!=1);
																		if(choixtab!=1 && choixtab!=0 && choixtab!=2)
																		{
																			system("cls");
																			printf("\n\n\tApplication 11: Somme de deux matrices ");
																			printf("\a\n\n\tincorrect reessayer");
																			sleep(2);
																			
																		}
																	
																	
																   }while(choixtab!=1 && choixtab!=0 && choixtab!=2);
																   if(choixtab==2)
																   {
																   	retourtab=10;
																   	retour=0;
																   }
																	
																	
																}while(choixtab==1);
																
																
													break;
															//fin  d'ap11
														case 12:
															//debut 12
																telechargement(i);
																do
																{	
																	do
																	{
																		getchar();
																		system("cls");
																		printf("\n\n\t\tApplication 12: Initialisation d'une matrice ");
																		printf("\n\n\t\t\tMATRICE ");
																	        // saisir de la premiere matrice;
																	        printf("\n\n\t\t\tSaisir le nombre de lignes ");
																	}while(scanf("%d",&n)!=1);
																	do
																	{
																		getchar();
																		system("cls");
																		printf("\n\n\t\tApplication 12: Initialisation d'une matrice ");
																		printf("\n\n\t\t\tMATRICE ");
																	        // saisir de la premiere matrice;
																	        printf("\n\n\t\t\tSaisir le nombre de lignes %d",n);
																	        printf("\n\n\t\t\tSaisir le nombre de colonnes  ");
																	}while(scanf("%d",&m)!=1);
																    
																    for(i=0;i<n;i++)
																    {
																        for(j=0;j<m;j++)
																        {
																            matA[i][j]=0;
																        }
																
																    }
																	  
																	do
																	{
																	
																		do
																		{
																			getchar();
																			system("cls");
																			printf("\n\n\t\tApplication 12: Initialisation d'une matrice ");
																			printf("\n\n\n\t\t\t\t");
																			for(i=0;i<n;i++)
																		    {
																		        for(j=0;j<m;j++)
																		        {
																		            printf("  %d  ",matA[i][j]);
																		        }
																				printf("\n\n\t\t\t\t");
																		    }
																			printf("\n\n\t1: Relancer\t\t0: Retour\t\t2: Menu exercice \n\t\t\t");
																			printf("\n\n\t\t\t\tChoix ");
																			
																		}
																		while(scanf("%d",&choixtab)!=1);
																		if(choixtab!=1 && choixtab!=0 && choixtab!=2)
																		{
																			system("cls");
																			printf("\n\n\tApplication 12: Initialisation d'une matrice ");
																			printf("\a\n\n\tincorrect reessayer");
																			sleep(2);
																			
																		}
																	
																	
																   }while(choixtab!=1 && choixtab!=0 && choixtab!=2);
																   if(choixtab==2)
																   {
																   	retourtab=10;
																   	retour=0;
																   }
																	
																	
																}while(choixtab==1);
																
																
															break;
															//fin 12
														case 0:
															retourtab=10;
															retour=0;
														break;
														default:
															printf("\n\n\t\t\tChoix non disponible");
															retourtab=1;
															break;
														
														}
														
													}while(retourtab!=10);
													
													
														
																	/*fin des swh tab*/
													
												break;
												//fin des tableaux
												case 0:system("cls");retour=20;break;
												case 30:system("cls");accueil=50;break;	
												}
																								
												
										}while((retour!=20) &&(accueil!=50));
										if(accueil==50)
										{
											retour=1;
										}
										else if(retour==20)
										retour=20;
									break;
/***************************************************************************fin des exercices  elementaire;*************************************************************/
									
									
/******************************************************************Debut du jeux de multiplication*********************************************************************/
									case 2:
										telechargement (i);
										repapp=0;
										max = 10;min = 1;
										
										
										do
										{   
											srand(time(NULL));
											nord1 = ( rand() % (max-min) )+ 1;
										    nord2 = ( rand() % (max - min)) + 1;
										}
										while( nord1==nord2 );
										
										
										do
										{	
											max = 10;min = 1;
											do
											{   
												srand(time(NULL));
												nord1 = ( rand() % (max-min) )+ 1;
											    nord2 = ( rand() % (max - min)) + 1;
											}
											while( nord1==nord2 );
											do
											{
												do
												{
													getchar();
													system("cls");
													printf("\n\n\tJeux de multiplcation\n\n");
													printf("\n\n\t\tSaisir le nombre d'operation ");
											    }while(scanf("%d",&NO)!=1);
											    if(NO<1 || NO>30)
											    {
											    	system("cls");
											    	printf("\n\n\tJeux de multiplcation\n\n");
											    	printf("\n\n\t\t\t\aSaisi incorrect,ressayer entre 1 a 30");
											    	sleep(1);
											    }
										    }while(NO<1 || NO>30);
											recevoir=NO;
											nbr=0;
											juste=0;
											cpt=0;
											
											do
											{		
											    do
												{
													getchar();
													system("cls");
													printf("\n\n\tJeux de multiplcation\n\n");
													printf("\n\n\t\tLe nombre d'operation restant est %d",NO);
												   	printf("\n\n\t\t %d * %d  =  ",nord1,nord2);
											    }while(scanf("%d",&a)!=1);
											
												if(  a !=( nord1 * nord2 ) )
												
												{	
													while( (a != (nord1 * nord2)) && (cpt != 3 ) )
													{   
														
														
														do
														{	
															getchar();
															printf("Reessayer ");sleep(1);
															system("cls");
															printf("\n\n\tJeux de multiplcation\n\n");
															printf("\n\n\t\tLe nombre d'operation restant est %d",NO);
															printf("\n");
															printf("\n\n\t\t %d * %d  =  ",nord1,nord2);
															
														}while(scanf("%d",&a)!=1);
														
														cpt++;
														if(nord1 * nord2==a)
														NO=NO;
														else
														NO--;
											   		}
											   			
											   }
										   	else if( a == nord1 * nord2)
												   { 
												   	
											   			do
														{
															srand(time(NULL));
															nord1 = ( rand() % (max-min) )+ 1;
														    nord2 = ( rand() % (max - min)) + 1;
														    juste++;
														}
														while( nord1==nord2 );
														NO--;
										  		  }
										  		  	
											    	
												
										    	
											}while(NO!=	0 && cpt!=3 );
											
											pourcentage = (juste * 100)/recevoir;
											
									      do   
											{
									           do
									           {
									           		getchar();
									           		system("cls");
													printf("\n\n\tJeux de multiplcation\n\n");
													printf("\n\n\t\tVous avez trouvez %d resultat(s) parmi %d et vous avez %d %%",juste,recevoir,pourcentage);
													printf("\n\n\n\t\t1: Relancer \t\t0: Accueil \t\t2: Precedente \n\n\t\t\tChoix  ");
									           }
												while(scanf("%d",&repapp)!=1);
												if((repapp!=1) && (repapp!=0) && (repapp!=2))
												{
													system("cls");
													printf("\n\n\tJeux de multiplcation\n\n");
													printf("\a\n\n\t\tIncorrecte!!!");
													sleep(2);
												}
																
										    }
										    while((repapp!=1) && (repapp!=0) && (repapp!=2));
								    		if(repapp==0)
											{
											    repapp=50;
											}
											
								            
													
										}while((repapp!=50) && repapp!=2);
										if(repapp==50)
										retour=1;
										else if(repapp==2)
										retour=2;
										
										break;

/******************************************************************Fin du jeux de multiplication*********************************************************************/
										
/******************************************************************Debut du jeux d'allumette*********************************************************************/
										
									case 3:
										repapp = 0;
										max = 10;
										min = 1;
									do
									{           nbr=0;
												system("cls");
												printf("\n\n\t\tJeu des allumettes\n\n\n\t");
												for(i=0;i<41;i++)
												{
													printf("\4");if(nbr==0) Sleep(30);
												}
												printf("\n\t\4\t\t\t\t\t\4\n\t\4\t\t\t\t\t\4\n\t\4\t1: Commencer\t\t\t\4");
												printf("\n\t\4\t\t\t\t\t\4\n\t\4\t\t\t\t\t\4\n\t\4\t2: Aide\t\t\t\t\4");
												printf("\n\t\4\t\t\t\t\t\4\n\t\4\t\t\t\t\t\4\n\t\4\t0: Quitter\t\t\t\4\n\t\4\t\t\t\t\t\4\n\t\4\t\t\t\t\t\4\n\t");
												for(i=0;i<41;i++)
												{
													printf("\4");
												}
												printf("\n\n\n\t\t\t\t\tChoix  ");nbr++;
									
												while((scanf("%d",&choixapp))!=1)
												{
													system("cls");
													printf("\n\n\t\tJeu des allumettes\n\n\n\t");
													for(i=0;i<41;i++)
													{
														printf("\4");
													}
													printf("\n\t\4\t\t\t\t\t\4\n\t\4\t\t\t\t\t\4\n\t\4\t1: Commencer\t\t\t\4");
													printf("\n\t\4\t\t\t\t\t\4\n\t\4\t\t\t\t\t\4\n\t\4\t2: Aide\t\t\t\t\4");
													printf("\n\t\4\t\t\t\t\t\4\n\t\4\t\t\t\t\t\4\n\t\4\t0: Quitter\t\t\t\4\n\t\4\t\t\t\t\t\4\n\t\4\t\t\t\t\t\4\n\t");
													for(i=0;i<41;i++)
													{
														printf("\4");
													}
													printf("\n\n\n\t\t\t\t\tChoix  ");
													getchar();
												}
											switch(choixapp)
											{
												case 1:
														
														//debut de jeux
														
													do
													{
														telechargement(i);
															do
														{
															do
															{
																getchar();
																system("cls");
																printf("\n\n\t\t\t Jeux des allumettes\n\n\n\t\t");
																for(i=0;i<40;i++)
																{
																	printf("\4");Sleep(30);
																}
																printf("\n\n\n\t\tEntrer le nombre total d'allumettes ");
															}
															while((scanf("%d",&na))!=1);
															if(na<=7)	
															{
																printf("\n\n\n\tLe nombre total d'allumette doit etre superieur a 7 ");sleep(2);
															}
														}
														while(na<=7);x=na;
														nmax=3;
														do
														{
															if(na>0)
															{	
																system("cls");
																printf("\n\n\t\t\t Jeux des allumettes\n\n\n\t\t");
																for(i=0;i<40;i++)
																{
																	printf("\4");
																}
																printf("\n\n\n\t\t\t\t\t\tTotal   : %d",x);
																if(na>0) 
																{
																	printf("\n\n\n\t\t\t\t\t\tRestant : %d\n\n\n\t\t",na);
																}
																for(i=0;i<na;i++)
																{
																	printf(" | ");
																}
																printf("\n\n\n\t\t\tL'ordinateur a deja retire !");sleep(1);
																do
																{
																	srand(time(NULL));
																	nord1=rand()%(max);
																	nord1+=1;
																	if(na==2)
																	{
																		nord1=1;
																	}
																	if(na==3)
																	{
																		nord1=2;
																	}
																}
																while(nord1>nmax || nord1<=0);
																na=na-nord1;
																	if(na<=0)
																	{
																		gagn=1;
																	}
															}
															
															if(na>0)
															{
																do
																{
																	do
																	{
																		system("cls");
																		getchar();
																		printf("\n\n\t\t\t Jeux des allumettes\n\n\n\t\t");
																		for(i=0;i<40;i++)
																		{
																			printf("\4");
																		}
																		printf("\n\n\n\t\t\t\t\t\tTotal   : %d",x);
																		if(na>0) 
																		{
																			printf("\n\n\n\t\t\t\t\t\tRestant : %d\n\n\n\t\t",na);
																		}
																		for(i=0;i<na;i++)
																		{
																			printf(" | ");
																		}
																		printf("\n\n\n\t\tFaites votre choix (1 ou 2 ou 3)  ");
																	}
																	while((scanf("%d",&njour))!=1);
																		if( njour>nmax)
																			{
																				printf("\n\n\t\tVous devez retirer au maximum %d allumettes,reessayez",nmax);
																				sleep(2);
																			}
																			else if( njour<=0)
																			{
																				printf("\n\n\t\tVous devez retirer au minimum une(1) allumette,reessayez");
																				sleep(2);
																			}
																}
																while(njour>nmax || njour<=0);
																na=na-njour;
																		
																if(na<=0)
																{
																	gagn=0;
																}
															}
															
														}
														while(na>0);nbr=0;
														do
														{
															do
															{
																getchar();
																system("cls");
																printf("\n\n\t\t\t Jeux des allumettes\n\n\n\t\t");
																for(i=0;i<40;i++)
																{
																	printf("\4");if(nbr==0) Sleep(30);
																}
																if(gagn==0)
																{
																	printf("\n\n\n\t\t\tVous avez perdu !");
																}
																else
																{
																	printf("\n\n\n\t\t\tVous avez gagne !");
																}
																
																	printf("\n\n\n\t\t1: Relancer \t\t0: Menu General \n\n\t\t\tChoix  ");nbr++;
												            }
															while(scanf("%d",&repapp)!=1);
															if((repapp!=1) && (repapp!=0))
															{
																system("cls");
																printf("\n\n\tJeux de multiplcation\n\n");
																printf("\a\n\n\t\tIncorrecte!!!");
															}
																			
													    }
													    while((repapp!=1) && (repapp!=0));
															    		if(repapp==0)
																		{
																		    repapp=50;
																		}	
													}while(repapp!=50);
												repapp=50;
												break;
												//fin du jeux
												case 2:
													
													//Aide
													
														system("cls");
														printf("\n\n\n\t\t\tJeu des allumettes\n\n\n\t");
														for(i=0;i<60;i++)
														{
															printf("\4");Sleep(10);
														}
														printf("\n\n\t\tLe jeu des allumettes consiste a definir au \n\n\t\t");
														printf("depart le nombre total d'allumettes disponibles\n\n\t\t");
														printf("Le nombre maximal d'allumettes a retirer est 3.\n\n\t\t");
														printf("Le joueur et l'ordinateur choisissent a tour\n\n\t\t");
														printf("de role . Celui qui retire en dernier\n\n\t\t");
														printf("sera le perdant . ");
														printf("\n\n\t\t\t\tMerci !\n\n\t");
														for(i=0;i<60;i++)
														{
															printf("\4");
														}
														printf("\n\n\n\t\t\t\tEntree");
														getch();
												
												repapp=1;
												break;
												case 0:
													
													repapp=50;
													
												break;
												default:
													
													printf("\n\n\t\t\t\tChoix invalide");
													sleep(2);
													repapp=1;
											}
											
							
										
								            
									}while(repapp!=50);
										break;
										
/******************************************************************Fin  du jeux d'allumette*********************************************************************/
									
									case 0: system("cls");retour=1;break;
									default : 
											printf("\n\n\t\tChoix non disponible");
											sleep(2);
									break;
								}
							}
							while(retour!=1);break;
       /**********************************************Debut  du jeux parametres des couleurs*************************************************/
					case 2: 
							retour=0;
							do
							{		//Parametres
								do
								{
									system("cls");
									printf("\n\n\n\t\t\4 P A R A M E T R E S D E S C O U L E U R S \4\n\n\t");				
																	for(i=0;i<65;i++)
																	{
																		printf("°");Sleep(5);
																	}		
																									
									printf("\n\t°\t\t\t\t\t\t\t\t°\n\t°\t\t\t\t\t\t\t\t°\n\t°\t1 :: Jaune-Bleu-fonce");						printf("\t\t5 :: Marron-Rose \t°\n\t°\t\t\t\t\t\t\t\t°");
									printf("\n\t°\t\t\t\t\t\t\t\t°\n\t°\t\t\t\t\t\t\t\t°\n\t°\t2 :: Gris-clair-Bleu-fonce");				printf("\t6 :: Kaki-Gris-clair \t°\n\t°\t\t\t\t\t\t\t\t°");
									printf("\n\t°\t\t\t\t\t\t\t\t°\n\t°\t\t\t\t\t\t\t\t°\n\t°\t3 :: Kaki-Blanc");							printf("\t\t\t7 :: Kaki-Blanc \t°\n\t°\t\t\t\t\t\t\t\t°");
									printf("\n\t°\t\t\t\t\t\t\t\t°\n\t°\t\t\t\t\t\t\t\t°\n\t°\t4 :: Blanc-Bleu-clair");						printf("\t\t8 :: Blanc-gris \t°\n\t°\t\t\t\t\t\t\t\t°");
								
																				printf("\n\t°\t\t\t\t\t\t\t\t°\n\t°\t\t\t\t\t\t\t\t°\n\t°\t\t\t0 :: Retour \t\t\t\t°\n\t°\t\t\t\t\t\t\t\t°\n\t°");
																				
																	
																	for(i=0;i<64;i++)
																	{
																		printf("°");Sleep(5);
																	}	
									
									
									printf("\n\n\t\t\t\t\t\t\t Choix ");
								}while(scanf("%d",&couleur)!=1);	
								
								
										
										switch(couleur)
										{
											case 1:system("color E1");break;
											case 2:system("color 1D");break;
											case 3:system("color 6F");break;	
											case 4:system("color F9");break;
											case 5:system("color 4D");break;
											case 6:system("color 67");break;
											case 7:system("color 6F");break;
											case 8:system("color F8");break;
											case 0:retour=1;break;
											default :system("color 9B");break;
										}
								
							}while(retour!=1);
							retour=1;
					break;
/**********************************************Fin  du paramtres des couleurs*************************************************/
					case 4:
						//instruction
						do
						{	
							do
							{
								getchar();
								system("cls");
								printf("\n\n\t\t\MENU DES INSTRUCTIONS");
								printf("\n\n\t\t\t1: Exercices elementaires ");
								printf("\n\n\t\t\t2: Jeux de multiplication ");
								printf("\n\n\t\t\t3: Jeux d'allumette ");
								printf("\n\n\t\t\t0: Retour ");
								printf("\n\n\t\t\t\tChoix ");
							}while(scanf("%d",&couleur)!=1);
							switch(couleur)
							{
								case 1:
									couleur=0;
									//Une indication pour les exercices elementaires
									do
									{
										do
										{
											getchar();
											system("cls");
											printf("\n\n\n\t\t\t\4 Exercices elementaires \4\n\n");
											printf("\n\n\t\tPour eviter de vous ennuyer je vous conseil\n\n\t\tde suivre les indications");
											printf("\n\n\t\ten dessous de chaque exercices,en cas \n\n\t\td'une erreur on vous orienterez  ");
											printf("\n\n\t\tJe vous rappelle encore une fois de plus que \n\n\t\tles incations sont les suivantes: ");
											printf("\n\n\t\t1: Relancer 20: Precedente 0: Accueil");
											printf("\n\n\t\t\t\tMerci !\n\n\t");
											printf("0: Precendente");
										}while(scanf("%d",&couleur)!=1);
								    }while(couleur!=0);
									retour=2;
									break;
									
								case 2:
									couleur=0;
									do
									{
										do
										{
											getchar();
											system("cls");
											printf("\n\n\n\t\t\t\4 Jeux de multiplication \4\n\n");
											printf("\n\n\t\tLe jeux  de multiplication consiste a saisir \n\n\t\tun certain nombre d'operation(NO) ");
											printf("\n\n\t\tque vous voullez effectuer . Ce pendant,\n\n\t\tle nombre d'operation est compris entre 1 et 10.");
											printf("\n\n\t\tApres le choix du NO,l'ordinateur vous\n\n\t\tpose une operation soit vous faussez ou soit");
											printf("\n\n\t\tvous trouvez . Si vous faussez vous \n\n\t\tavez 3 essais si toute fois vous n'avez pas ");
											printf("\n\n\t\tdonne une bonne reponse vous aurez \n\n\t\tle resultat final. Si le jeux vous semble ");
											printf("\n\n\t\tetre difficile vous avez une sens d'aller\n\n\t\treviser au niveau des applications elementaires");
											printf("\n\n\t\tla table de multiplication .");
											printf("\n\n\t\t\t\tMerci !\n\n\t");
											printf("0: Precendente");
										}while(scanf("%d",&couleur)!=1);
								    }while(couleur!=0);
									retour=2;
									
									break;
									
									
								case 3:
									couleur=0;
									do
									{
										do
										{
											getchar();
											system("cls");
											printf("\n\n\n\t\t\t\4 Jeux d'allumette \4\n\n");
											printf("\n\n\t\tLe jeu des allumettes consiste a definir au\n\n\t\t");
											printf("depart le nombre total d'allumettes disponibles\n\n\t\t");
											printf("Le nombre maximal d'allumettes a retirer est 3.\n\n\t\t");
											printf("Le joueur et l'ordinateur choisissent a tour\n\n\t\t");
											printf("de role . Celui qui retire en dernier\n\n\t\t");
											printf("sera le perdant . ");
											printf("\n\n\t\t\t\tMerci !\n\n\t");
											printf("0: Precendente");
											
										}while(scanf("%d",&couleur)!=1);
								    }while(couleur!=0);
									retour=2;
									break;
								case 0:
									retour = 1;
									break;
										
							}
						}while(retour!=1);
						retour=1;
						break;
					case 5:
						do
						{	do
							{
								getchar();
								system("cls");
								printf("\n\n\t\t\t\4 A propos \4\n");
								printf("\n\n\t\tCe programme a ete concu par Souleymane Ba;\n\n\t\tEtudiant en licence 1 genie Informatique");
								printf("\n\n\t\ta l'universite Dakar Bourguiba\n\n\t\t. Version 0.1.15 bientot\n\n\t\td'autres version seront en ligne");
								printf("\n\n\t\tPour toute information supplementaire,\n\n\t\tn'hesite pas m'envoyer un message a");
								printf("\n\n\t\tSouleymaneKaba@hotmail.fr");
								printf("\n\n\t\tAvant de terminer je remercie mon\n\n\t\tProfesseur d'algorithme et de langage C ");
								printf("\n\n\t\tMr.Fall qui nous a aide a realiser ce projet ");
								printf("\n\n\t\tpar son qualite d'enseignement\n\n\t\tet sa ponctualite dans les cours ");
								printf("\n\n\t\tpour une fois encore merci d'avantage Monsieur et bonne\n\n\t\tcontinuation a nous tous");
								printf("\n\n\t\tUn big dedicasse a tous mes camarades\n\n\t\t Que le Bon Dieu nous aide  ");
								printf("\n\n\t\ta reailiser nos reves Amine!!!");
								printf("\n\n\t\t\SALAM ALEYKOUM");
								printf("\n\n\t\t\t\t 1: Precedente");
						   }while(scanf("%d",&n)!=1);
						}while(retour!=1);
						retour=1;
					
						break;
					case 0:retour=0;
					break;
					case 3:
					do
					{
					
						a=0;
						b=100;
						do
						{
							
							
								do
								{
									srand(time(NULL));
									nord1=rand()%(b)+1;
								}
								while(nord1<=a);
							
							a=nord1;
							b=b+10;
							if(b>100)
							{
								b=100;
							}
							system("cls");
							printf("\n\n\t\t\tP A R A M E T R E S >>  A  J O U R \n\n\t\t");
							for(i=0;i<50;i++)
							{
								printf("°");
							}
							printf("\n\n\n\t\tVeuillez patientez,cela va durer quelques minutes");printf("\n\n\n\t\t\t\t  ");
							for(i=0;i<10;i++)
							{
								printf("°");
							}
							printf("\n\n\n\t\t\t\t     %d %%",nord1);
						
						}
						while(nord1!=100);
						retour=0;
				    }while(retour==1);
				    retour=1;
					break;
					default:
						
					printf("\n\n\t\tChoix non disponible");
					sleep(2);
					retour=1;
					 break;
				
				   }
				
				}
				while(retour==1);
}
				system("cls");
				printf("\n\n\n\n\n\tM E R C I \3 D 'A V O I R \3U T I L I S E R \3C E \3P R O G R A M M E \n\n\n\t\t\t\t A B I E N T O T");
				
				printf("\n\n\t\t\t\t    ");
			
			for(i=0;i<3;i++)
			{	
				printf("!");
				sleep(2);
				
			}
			sleep(2);
			system("cls");
			printf("\n\n\n\t\t\tFermeture du programme");
			printf("\n\n\n\t\t");
			for(i=0;i<45;i++)
			{
				printf("=");Sleep(50);
				if(i==23)
				{
					sleep(3);
				}
			}
			Sleep(5);
			system("cls");
			getch();
			return 0;
			}
