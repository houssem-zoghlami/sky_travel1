#include <gtk/gtk.h>
enum
{
AIRPORTS,
AIPORTA,
JOURS,
MOISS,
ANNEES,
NOMBREADULTE,
TYPE,
HEUREDUVOL,
PRIX,
CODE,
NUM_COL
};
typedef struct vol
{
char airports[100];   
char aiporta[100];
char jours[20];
char moiss[20];
char annees[20];
char heureduvol[20];
char nombreadulte[20];
char type[20];
char prix[20];
char code[20];

} vol;
void ajoutervol(vol e);
void supprimervol(char codevol[20]);
void modifiervol(char aiports[100],char aiporta[100],char jours[20],char moiss[20],char annees[20],char heureduvol[20],
char nombreadulte[20],char type[20],char prix[20],char code[20]);
void affichervol(GtkWidget *treeview3);
enum
{
NOMHOTEL,
NOMBRENUIT,
JOURAA,
MOISAA,
ANNEEAA,
CODEHOTEL,
PRIXHOTEL,
NUMM_COL
};
typedef struct hotel
{
char nomhotel[100]; 
char nombrenuit[20];  
char jouraa[20];
char moisaa[20];
char anneeaa[20];
char codehotel[20];
char prixhotel[20];


} hotel;
void ajouterhotel(hotel e);
void supprimerhotel(char codeh[] );
void modifierhotel(char nomhotel[100], 
char nombrenuit[20],  
char jouraa[20],
char moisaa[20],
char anneeaa[20],
char codehotel[20],
char prixhotel[20]);
void afficherhotel(GtkWidget *treeview1);



enum
{
MARQUE,
COULEUR,
TYPPE,
PRIXX,
MATRICULE,
NUMMM_COL
};
typedef struct voiture
{
char marque[100]; 
char couleur[20];  
char type[20];
char prix[20];
char matricule[20];


} voiture;
void ajoutervoiture(voiture e);
void supprimervoiture(char mat[] );
void modifiervoiture(char marque[100], 
char couleur[20],  
char type[20],
char prix[20],
char matricule[20]);
void affichervoiture(GtkWidget *treeview2);

typedef struct client
{
char nom[40];
char prenom[20];   
char Email[20];
char telephone[20];
char pays[20];
char ci[20];
char numpass[20];
char methpay[20];
char jourres[20];
char moisres[20];
char anneeres[20];
char donnee[20];
char prix[20];
} client;
void ajouterclient(client e);

typedef struct facture
{
char user[100]; 
char ref[20];  
char dpay[20];
char pri[20];



} facture;
void ajouterfacture(facture e);

typedef struct stat
{
char totprix[100]; 
char nbcd[20];  
char nbrec[20];




} stat;
void ajouterstat(stat e);













/*
enum
{NOMM=0,
NBPERSONNE,
CHAMBRE,
JOURA,
MOISA,
ANNEEA,
JOURRS,
MOIISS,
ANNNEES,
CODEHOT,
NUMM_COL
};



void supprimerhotel(char codehot[20]);
void afficherhotel(GtkWidget *treeview1);
void modifierhotel(char nom[40]);
typedef struct hotel
{
char nom[20];
char nbpersonne[20];
char chambre[20];
char joura[20];
char moisa[20];
char anneea[20];
char jours[20];
char moiss[20];
char annees[20];
char codehot[20];
}hotel;
void ajouterhotel(hotel h);
typedef struct client
{
char nom[40];
char prenom[20];   
char Email[20];
char telephone[20];
char pays[20];
char ci[20];
char numpass[20];
char methpay[20];
char jourres[20];
char moisres[20];
char anneeres[20];
char donnee[20];
char prix[20];
} client;
void ajouterclient(client e);

enum
{MARQUE=0,
COLEUR,
TYPE,
PRIX,
MATRICULE,
COLUMNS

};
typedef struct voiture
{
char Marque[40];
char coleur[20];
char type[20];
char prix[20];
char Matricule[20];
} voiture;
void ajoutervoiture(voiture e);
void afficher_voiture(GtkWidget *liste);
void supprimervoiture(char matricule1[]);
void modifiervoiture(char Marque[40]);
*/


