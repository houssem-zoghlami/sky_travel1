#include <gtk/gtk.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonction.h"
//etude vol
void ajoutervol(vol e) {
FILE * f; 

f=fopen("vol.txt","a+") ;

fprintf(f,"%s %s %s %s %s %s %s %s %s %s\n ",e.airports,e.aiporta,e.jours,e.moiss,e.annees,e.type,e.heureduvol,e.nombreadulte,e.prix,e.code );

fclose(f); 
}
void supprimervol(char code[] ){
vol e;
FILE *f;
FILE *f1 ;
f1 =NULL;
f=fopen("vol.txt","r") ;
if (f!= NULL)
{

while (fscanf(f,"%s %s %s %s %s %s %s %s %s %s\n ",e.airports,e.aiporta,e.jours,e.moiss,e.annees,e.type,e.heureduvol,e.nombreadulte,e.prix,e.code)!=EOF) {
if (strcmp(code,e.code))
{
f1=fopen("vol1.txt","a");

fprintf(f1,"%s %s %s %s %s %s %s %s %s %s\n ",e.airports,e.aiporta,e.jours,e.moiss,e.annees,e.type,e.heureduvol,e.nombreadulte,e.prix,e.code) ;
fclose(f1);
}
}
}
fclose(f);
remove("vol.txt");
rename("vol1.txt","vol.txt"); }


void modifiervol(char airports[100],char aiporta[100],char jours[20],char moiss[20],char annees[20],char heureduvol[20],
char nombreadulte[20],char type[20],char prix[20],char code[20])
{
vol e;
FILE *f;
FILE *f1;
f1=NULL ;
f=fopen("vol.txt","r+");
f1=fopen("vol1.txt","w");
if (f!= NULL)
{
while (fscanf(f,"%s %s %s %s %s %s %s %s %s %s\n ",e.airports,e.aiporta,e.jours,e.moiss,e.annees,e.type,e.heureduvol,e.nombreadulte,e.prix,e.code)!=EOF) {
if (strcmp(code ,e.code)==0)
{
fprintf(f1,"%s %s %s %s %s %s %s %s %s %s\n ",airports,aiporta,jours,moiss,annees,type,heureduvol,nombreadulte,prix,code) ;
}
else
fprintf(f1,"%s %s %s %s %s %s %s %s %s %s\n ",e.airports,e.aiporta,e.jours,e.moiss,e.annees,e.type,e.heureduvol,e.nombreadulte,e.prix,e.code) ;
}
fclose(f1);
fclose(f);
remove("vol.txt");
rename ("vol1.txt","vol.txt");
}
}
void affichervol(GtkWidget *treeview3)
{
GtkCellRenderer *renderer ;
GtkTreeViewColumn *column ;
GtkTreeIter iter ;
GtkListStore *store ;
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
FILE *f ;
store =NULL ;
store=gtk_tree_view_get_model(treeview3);
if (store == NULL)
{
            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("airports",renderer,"text",AIRPORTS,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview3),column);

            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("aiporta",renderer,"text",AIPORTA,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview3),column);

            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("jours",renderer,"text",JOURS,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview3),column);

             renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("moiss",renderer,"text",MOISS,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview3),column);

            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("annees",renderer,"text",ANNEES,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview3),column);
            

            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes("nombreadulte",renderer,"text",NOMBREADULTE,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview3),column);
            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes("type",renderer,"text",TYPE,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview3),column);
         
            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("heureduvol",renderer,"text",HEUREDUVOL,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview3),column);
            
            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes("prix",renderer,"text",PRIX,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview3),column);
            renderer=gtk_cell_renderer_text_new ();
            
            column=gtk_tree_view_column_new_with_attributes("code",renderer,"text",CODE,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview3),column);
}
            store =gtk_list_store_new(NUM_COL,G_TYPE_STRING,G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING ,G_TYPE_STRING ,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
            f=fopen("vol.txt","r");
            if (f!=NULL){
while (fscanf(f,"%s %s %s %s %s %s %s %s %s %s\n ",airports,aiporta,jours,moiss,annees,nombreadulte,type,heureduvol,prix,code)!=EOF) {
            gtk_list_store_append(store,&iter);
            gtk_list_store_set
            (store,&iter,AIRPORTS,airports,AIPORTA,aiporta,JOURS,jours,MOISS,moiss,ANNEES,annees,NOMBREADULTE,nombreadulte,TYPE,type,HEUREDUVOL,heureduvol,PRIX,prix,CODE,code,-1);
}
fclose(f);
}
            gtk_tree_view_set_model(GTK_TREE_VIEW(treeview3),GTK_TREE_MODEL(store));
            g_object_unref(store);

}
//hotel
void ajouterhotel(hotel e) {
FILE * f; 

f=fopen("hotel.txt","a+") ;

fprintf(f,"%s %s %s %s %s %s %s \n ",e.nomhotel,e.nombrenuit,e.jouraa,e.moisaa,e.anneeaa,e.codehotel,e.prixhotel);

fclose(f); 
}

void supprimerhotel(char codehotel[] ){
hotel e;
FILE *f;
FILE *f1 ;
f1 =NULL;
f=fopen("hotel.txt","r") ;
if (f!= NULL)
{

while (fscanf(f,"%s %s %s %s %s %s %s \n ",e.nomhotel,e.nombrenuit,e.jouraa,e.moisaa,e.anneeaa,e.codehotel,e.prixhotel)!=EOF) {
if (strcmp(codehotel,e.codehotel))
{
f1=fopen("hotel1.txt","a");

fprintf(f1,"%s %s %s %s %s %s %s \n ",e.nomhotel,e.nombrenuit,e.jouraa,e.moisaa,e.anneeaa,e.codehotel,e.prixhotel) ;
fclose(f1);
}
}
}
fclose(f);
remove("hotel.txt");
rename("hotel1.txt","hotel.txt"); }
void modifierhotel(char nomhotel[100], 
char nombrenuit[20],  
char jouraa[20],
char moisaa[20],
char anneeaa[20],
char codehotel[20],
char prixhotel[20])
{
hotel e;
FILE *f;
FILE *f1;
f1=NULL ;
f=fopen("hotel.txt","r+");
f1=fopen("hotel1.txt","w");
if (f!= NULL)
{
while (fscanf(f,"%s %s %s %s %s %s %s \n ",e.nomhotel,e.nombrenuit,e.jouraa,e.moisaa,e.anneeaa,e.codehotel,e.prixhotel)!=EOF) {
if (strcmp(codehotel ,e.codehotel)==0)
{
fprintf(f1,"%s %s %s %s %s %s %s \n ",nomhotel,nombrenuit,jouraa,moisaa,anneeaa,codehotel,prixhotel) ;
}
else
fprintf(f1,"%s %s %s %s %s %s %s \n ",e.nomhotel,e.nombrenuit,e.jouraa,e.moisaa,e.anneeaa,e.codehotel,e.prixhotel) ;
}
fclose(f1);
fclose(f);
remove("hotel.txt");
rename ("hotel1.txt","hotel.txt");
}
}
void afficherhotel(GtkWidget *treeview1)
{
GtkCellRenderer *renderer ;
GtkTreeViewColumn *column ;
GtkTreeIter iter ;
GtkListStore *store ;
char nomhotel[100]; 
char nombrenuit[20];  
char jouraa[20];
char moisaa[20];
char anneeaa[20];
char codehotel[20];
char prixhotel[20];
FILE *f ;
store =NULL ;
store=gtk_tree_view_get_model(treeview1);
if (store == NULL)
{
            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("nomhotel",renderer,"text",NOMHOTEL,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1),column);

            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("nombrenuit",renderer,"text",NOMBRENUIT,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1),column);

            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("jouraa",renderer,"text",JOURAA,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1),column);

             renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("moisaa",renderer,"text",MOISAA,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1),column);

            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("anneeaa",renderer,"text",ANNEEAA,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1),column);
           
            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes("codehotel",renderer,"text",CODEHOTEL,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1),column);
            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes("prixhotel",renderer,"text",PRIXHOTEL,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1),column);
  
}
            store =gtk_list_store_new(NUMM_COL,G_TYPE_STRING,G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING ,G_TYPE_STRING ,G_TYPE_STRING,G_TYPE_STRING);
            f=fopen("hotel.txt","r");
            if (f!=NULL){
while (fscanf(f,"%s %s %s %s %s %s %s \n ",nomhotel,nombrenuit,jouraa,moisaa,anneeaa,codehotel,prixhotel)!=EOF) {
            gtk_list_store_append(store,&iter);
            gtk_list_store_set
            (store,&iter,NOMHOTEL,nomhotel,NOMBRENUIT,nombrenuit,JOURAA,jouraa,MOISAA,moisaa,ANNEEAA,anneeaa,CODEHOTEL,codehotel,PRIXHOTEL,prixhotel,-1);
}
fclose(f);
}
            gtk_tree_view_set_model(GTK_TREE_VIEW(treeview1),GTK_TREE_MODEL(store));
            g_object_unref(store);

}

void ajoutervoiture(voiture e) {
FILE * f; 

f=fopen("voiture.txt","a+") ;

fprintf(f,"%s %s %s %s %s \n ",e.marque,e.couleur,e.type,e.prix,e.matricule);

fclose(f); 
}

void supprimervoiture(char matricule[] ){
voiture e;
FILE *f;
FILE *f1 ;
f1 =NULL;
f=fopen("voiture.txt","r") ;
if (f!= NULL)
{

while (fscanf(f,"%s %s %s %s %s \n ",e.marque,e.couleur,e.type,e.prix,e.matricule)!=EOF) {
if (strcmp(matricule,e.matricule))
{
f1=fopen("voiture1.txt","a");

fprintf(f1,"%s %s %s %s %s  \n ",e.marque,e.couleur,e.type,e.prix,e.matricule) ;
fclose(f1);
}
}
}
fclose(f);
remove("voiture.txt");
rename("voiture1.txt","voiture.txt"); }

void modifiervoiture(char marque[100], 
char couleur[20],  
char type[20],
char prix[20],
char matricule[20])
{
voiture e;
FILE *f;
FILE *f1;
f1=NULL ;
f=fopen("voiture.txt","r+");
f1=fopen("voiture1.txt","w");
if (f!= NULL)
{
while (fscanf(f,"%s %s %s %s %s  \n ",e.marque,e.couleur,e.type,e.prix,e.matricule)!=EOF) {
if (strcmp(matricule ,e.matricule)==0)
{
fprintf(f1,"%s %s %s %s %s  \n ",marque,couleur,type,prix,matricule) ;
}
else
fprintf(f1,"%s %s %s %s %s \n ",e.marque,e.couleur,e.type,e.prix,e.matricule) ;
}
fclose(f1);
fclose(f);
remove("voiture.txt");
rename ("voiture1.txt","voiture.txt");
}
}
void affichervoiture(GtkWidget *treeview2)
{
GtkCellRenderer *renderer ;
GtkTreeViewColumn *column ;
GtkTreeIter iter ;
GtkListStore *store ;
char marque[100]; 
char couleur[20];  
char type[20];
char prix[20];
char matricule[20];

FILE *f ;
store =NULL ;
store=gtk_tree_view_get_model(treeview2);
if (store == NULL)
{
            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("marque",renderer,"text",MARQUE,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview2),column);

            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("couleur",renderer,"text",COULEUR,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview2),column);

            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("type",renderer,"text",TYPPE,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview2),column);

             renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("prix",renderer,"text",PRIXX,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview2),column);

            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("matricule",renderer,"text",MATRICULE,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview2),column);
           
           
}
            store =gtk_list_store_new(NUMMM_COL,G_TYPE_STRING,G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING ,G_TYPE_STRING );
            f=fopen("voiture.txt","r");
            if (f!=NULL){
while (fscanf(f,"%s %s %s %s %s  \n ",marque,couleur,type,prix,matricule)!=EOF) {
            gtk_list_store_append(store,&iter);
            gtk_list_store_set
            (store,&iter,MARQUE,marque,COULEUR,couleur,TYPPE,type,PRIXX,prix,MATRICULE,matricule,-1);
}
fclose(f);
}
            gtk_tree_view_set_model(GTK_TREE_VIEW(treeview2),GTK_TREE_MODEL(store));
            g_object_unref(store);

}

FILE * f; 
void ajouterclient(client e) {

f=fopen("client.txt","a+") ;
if(f!=NULL) {


fprintf(f,"%s %s %s %s %s %s %s %s %s %s %s %s %s \n ",e.nom,e.prenom,e.Email,e.telephone,e.pays,e.ci,e.numpass,e.methpay,e.jourres,e.moisres,e.anneeres,e.donnee,e.prix );
}

fclose(f); 
}
void ajouterfacture(facture e) {

f=fopen("facture.txt","a+") ;
if(f!=NULL) {


fprintf(f,"%s %s %s %s \n ",e.user,e.ref,e.dpay,e.pri );
}

fclose(f); 
}
void ajouterstat(stat e) {

f=fopen("stat.txt","a+") ;
if(f!=NULL) {


fprintf(f,"%s %s %s %s \n ",e.totprix,e.nbcd,e.nbrec);
}

fclose(f); 
}

