#include <gtk/gtk.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "client.h"


void modifiercli(char nom[20] ,char prenom[20],char sexe [20],char num_CIN[20],char num_tel[20],char adresse[20] ,char jour[20],char mois[20],char annee[20],char num_passport[20],char email[40])
{
clientt c;
FILE *f;
FILE *f1;
f1=NULL ;
f=fopen("clientt.txt","r+");
f1=fopen("clientt1.txt","w");
if (f!= NULL)
{
while (fscanf(f," %s %s %s %s %s %s %s %s %s %s %s ",c.nom,c.prenom,c.sexe ,c.num_CIN,c.num_passport,c.num_tel,c.adresse,c.jour,c.mois,c.annee,c.email)!=EOF) {
if (strcmp(num_CIN ,c.num_CIN)==0)
{
fprintf(f1,"%s %s %s %s %s %s %s %s %s %s %s \n",nom,prenom,sexe,num_CIN,num_passport,num_tel,adresse,jour,mois,annee,email) ;
}
else
fprintf(f1,"%s %s %s %s %s %s %s %s %s %s %s  \n",c.nom,c.prenom,c.sexe ,c.num_CIN,c.num_passport,c.num_tel,c.adresse,c.jour,c.mois,c.annee,c.email) ;
}
fclose(f1);
fclose(f);
remove("clientt.txt");
rename ("clientt1.txt","clientt.txt");
}
}
