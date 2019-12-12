#include <gtk/gtk.h>
typedef struct clientt
{
char nom[20];
char prenom [20];
char sexe [20];
char num_tel [20];
char num_passport[20];
char adresse[40];
char email[40];
char num_CIN [20];
char jour [20];
char mois[20];
char annee[20];
} clientt;
void modifiercli(char nom[20] ,char prenom[20],char sexe [20],char num_CIN[20],char num_tel[20],char adresse[20] ,char jour[20],char mois[20],char annee[20],char num_passport[20],char email[40]);
