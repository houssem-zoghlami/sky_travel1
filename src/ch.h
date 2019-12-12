#include <gtk/gtk.h>

enum
{LOGIN=0,
PASSWORD,
ROLE,
COL
};
void afficher(GtkWidget *treeview1);
enum
{NOM=0,
PRENOM,
SEXE,
NUMERO_CIN,
NUMERO_TELEPHONE,
JOUR,
MOIS,
ANNEE,
NUM_COL
};
void afficheremploye(GtkWidget *treeview2);
int verifier (char login[20], char password[20]);
typedef struct emloye 
{
char nom[20];
char prenom [20];
char sexe [20];
char  num_tel [10];
char num_CIN [10] ;
char jour [20];
char mois[20];
char annee[20];

} employe ;
void ajouteremp(employe e);
void supprimeremp(char CIN[10] );
void modifieremp(char nom[20],char prenom[20],char sexe [20],char num_CIN[10],char num_tel[10],char jour[20],char mois[20],char annee[20] );
int nombreemploye();
void changer_pass(char ancien_password[20],char nouveau_password[20]);
void changer_login(char ancien_login[20],char nouveau_login[20]);
int verif_password(char old_password[], char new_password[], char message[]) ;
int verif_login(char old_login[], char new_login[], char message[]);



