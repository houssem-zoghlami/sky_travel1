#include <gtk/gtk.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ch.h"

int verifier (char login[20], char password[20]){
FILE *f ;
int test=0;
f=fopen("users.txt","r") ;
char login1[20]; char password1[20]; int role;
if (f!=NULL) {
while ((fscanf(f,"%s %s %d",login1,password1,&role)!=EOF)) {
if ((strcmp(login1,login)==0) && (strcmp(password1,password))==0){ 
test=role;
}}
fclose(f);
}
return test;
}

void afficher(GtkWidget *treeview1){

GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter   iter;
GtkListStore *store;
 

char Login[100];
char Password[100];
int role;


FILE *f ;
store=NULL;

store=gtk_tree_view_get_model(treeview1);
if (store==NULL)
{
		renderer=gtk_cell_renderer_text_new();
		column=gtk_tree_view_column_new_with_attributes("Login",renderer,"text",LOGIN,NULL);
		gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1),column);

		renderer=gtk_cell_renderer_text_new();
		column=gtk_tree_view_column_new_with_attributes("Password",renderer,"text",PASSWORD,NULL);
		gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1),column);

		renderer=gtk_cell_renderer_text_new();
		column=gtk_tree_view_column_new_with_attributes("Role",renderer,"text",ROLE,NULL);
		gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1),column);

}
	store=gtk_list_store_new(COL,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_UINT);

f=fopen("users.txt","r");
if(f==NULL) {
return;
}
else
{
while (fscanf(f," %s %s %d ",Login,Password,&role)!=EOF) {

	gtk_list_store_append (store, &iter);
        gtk_list_store_set (store, &iter,
                      LOGIN, Login,
                      PASSWORD, Password,ROLE,role,
                      -1);
  
}
fclose(f);
}
	gtk_tree_view_set_model(GTK_TREE_VIEW(treeview1),GTK_TREE_MODEL(store));
	g_object_unref(store);

}
void afficheremploye(GtkWidget *treeview2)
{
GtkCellRenderer *renderer ;
GtkTreeViewColumn *column ;
GtkTreeIter iter ;
GtkListStore *store ;
char nom [100];
char prenom[100] ;
char sexe [10];
char num_cin[10];
char num_tel [10];
char jour [10] ;
char mois [10] ;
char annee [10] ;
FILE *f ;
store =NULL ;
store=gtk_tree_view_get_model(treeview2);
if (store == NULL)
{
            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("nom",renderer,"text",NOM,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview2),column);

            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("prenom",renderer,"text",PRENOM,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview2),column);

            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("sexe",renderer,"text",SEXE,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview2),column);

            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("num_cin",renderer,"text",NUMERO_CIN,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview2),column);

             renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("num_tel",renderer,"text",NUMERO_TELEPHONE,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview2),column);

            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("Jour",renderer,"text",JOUR,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview2),column);
            
            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("mois",renderer,"text",MOIS,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview2),column);
            
            renderer=gtk_cell_renderer_text_new ();
            column=gtk_tree_view_column_new_with_attributes ("annee",renderer,"text",ANNEE,NULL);
            gtk_tree_view_append_column(GTK_TREE_VIEW(treeview2),column);
}
            store =gtk_list_store_new(NUM_COL,G_TYPE_STRING,G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING ,G_TYPE_STRING ,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
            f=fopen("employe.txt","r");
            if (f!=NULL){
while (fscanf(f,"%s %s %s %s %s %s %s %s",nom,prenom,sexe,num_cin,num_tel,jour,mois,annee)!=EOF) {
            gtk_list_store_append(store,&iter);
            gtk_list_store_set
            (store,&iter,NOM,nom,PRENOM,prenom,SEXE,sexe,NUMERO_CIN,num_cin,NUMERO_TELEPHONE,num_tel,JOUR,jour,MOIS,mois,ANNEE,annee,-1);
}
fclose(f);
}
            gtk_tree_view_set_model(GTK_TREE_VIEW(treeview2),GTK_TREE_MODEL(store));
            g_object_unref(store);
}

void ajouteremp(employe e) {
FILE * f; 

f=fopen("employe.txt","a+") ;
if(f!=NULL) {


fprintf(f,"%s %s %s %s %s %s %s %s\n ",e.nom,e.prenom,e.sexe,e.num_CIN,e.num_tel,e.jour,e.mois,e.annee );
}

fclose(f); 
}
void supprimeremp(char num_CIN[] ){
employe e;
FILE *f;
FILE *f1 ;
f1 =NULL;
f=fopen("employe.txt","r") ;
if (f!= NULL)
{

while (fscanf(f," %s %s %s %s %s %s %s %s ",e.nom,e.prenom,e.sexe,e.num_CIN,e.num_tel,e.jour,e.mois,e.annee)!=EOF) {
if (strcmp(num_CIN,e.num_CIN))
{
f1=fopen("employe1.txt","a");

fprintf(f1,"%s %s %s %s %s %s %s %s \n",e.nom,e.prenom,e.sexe ,e.num_CIN,e.num_tel,e.jour,e.mois,e.annee) ;
fclose(f1);
}
}
}


fclose(f);
remove("employe.txt");
rename("employe1.txt","employe.txt");

}
void modifieremp(char nom[20] ,char prenom[20],char sexe [20],char num_CIN[20],char num_tel[20] ,char jour[20],char mois[20],char annee[20] )
{
employe e;
FILE *f;
FILE *f1;
f1=NULL ;
f=fopen("employe.txt","r+");
f1=fopen("employe1.txt","w");
if (f!= NULL)
{
while (fscanf(f," %s %s %s %s %s %s %s %s ",e.nom,e.prenom,e.sexe ,e.num_CIN,e.num_tel,e.jour,e.mois,e.annee)!=EOF) {
if (strcmp(num_CIN ,e.num_CIN)==0)
{
fprintf(f1,"%s %s %s %s %s %s %s %s \n",nom,prenom,sexe,num_CIN,num_tel,jour,mois,annee) ;
}
else
fprintf(f1,"%s %s %s %s %s %s %s %s  \n",e.nom,e.prenom,e.sexe ,e.num_CIN,e.num_tel, e.jour,e.mois,e.annee) ;
}
fclose(f1);
fclose(f);
remove("employe.txt");
rename ("employe1.txt","employe.txt");
}
}

int nombreemploye()
{
  int i=0;
  employe e;
  FILE* f;
  f=fopen("employe.txt","r");

  if (f!=NULL)
   {
    while(fscanf(f,"%s %s %s %s %s %s %s %s\n",e.nom,e.prenom,e.sexe ,e.num_CIN,e.num_tel, e.jour,e.mois,e.annee)!=EOF)
          {
            i++;
          }
          fclose(f);
	}
        return i;
}
void changer_pass(char ancien_password[20],char nouveau_password[20]){

char login[20];
char pass[20];
  
FILE *f;
FILE *f1;
f1=NULL ;
f=fopen("users.txt","r+");
f1=fopen("users1.txt","w");
if (f!= NULL)
{
while (fscanf(f," %s %s \n ",login,pass)!=EOF) {
if (strcmp(ancien_password ,pass)==0)
{
fprintf(f1,"%s %s \n",login,nouveau_password) ;
}
else
fprintf(f1,"%s %s \n",login,pass) ;
}
fclose(f1);
fclose(f);
remove("users.txt");
rename ("users1.txt","users.txt");
}
}
		       


void changer_login(char ancien_login[20],char nouveau_login[20]){

char login[20];
char pass[20];
   
FILE *f;
FILE *f1;
f1=NULL ;
f=fopen("users.txt","r+");
f1=fopen("users1.txt","w");
if (f!= NULL)
{
while (fscanf(f," %s %s \n ",login,pass)!=EOF) {
if (strcmp(ancien_login ,login)==0)
{
fprintf(f1,"%s %s \n",nouveau_login,pass) ;
}
else
fprintf(f1,"%s %s \n",login,pass) ;
}
fclose(f1);
fclose(f);
remove("users.txt");
rename ("users1.txt","users.txt");
}
}

int verif_password(char old_password[], char new_password[], char message[])
{//cette fonction retourne 1 si la password est valider 0 si non
    int x,x2;
    FILE*f;
    char login1[20] ;
    char password1 [20] ;
    strcpy(message,"");
    if(strlen(new_password)<5  ||  strlen(new_password)>20)
    {
        x=2;
        strcpy(message,"new password invalid");
    }
    else
    {
       
        f=fopen("users.txt","r");
        if(f !=NULL)
        {
            while(fscanf(f,"%s %s \n",login1,password1)!=EOF)
            {
                
                x2=strcmp(password1,old_password);
                if( x2==0)
                {
                    x=1;
                    strcpy(message," password changed");

                }
                
            }

        }
    
    
}
return(x);
}
int verif_login(char old_login[], char new_login[], char message[])
{
    int x,x2;
    FILE*f;
    char login1[20] ;
    char password1 [20] ;
    strcpy(message,"");
    if(strlen(new_login)<5  ||  strlen(new_login)>20)
    {
        x=2;
        strcpy(message,"new login invalid");
    }
    else
    {
       
        f=fopen("users.txt","r");
        if(f !=NULL)
        {
            while(fscanf(f,"%s %s \n",login1,password1)!=EOF)
            {
                
                x2=strcmp(login1,old_login);
                if( x2==0)
                {
                    x=1;
                    strcpy(message," login changed");

                }
                
            }

        }
    
    
}
return(x);
}

