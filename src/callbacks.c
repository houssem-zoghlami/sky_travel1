#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "ch.h"
#include "fonction.h"
#include "client.h"

void
on_login_clicked                       (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{


  GtkWidget *input1;  
  GtkWidget *input2;
  GtkWidget *output;
  GtkWidget *acceuil; 
  GtkWidget *espaceadmin;
  GtkWidget *espaceemploye;
  GtkWidget *espaceclient;
  char login[20];
  char password[20];
  int logg;
  
  input1=lookup_widget(objet_graphique,"entry1");
  strcpy(login,gtk_entry_get_text(GTK_ENTRY(input1)));

  input2=lookup_widget(objet_graphique,"entry2"); 
  strcpy(password,gtk_entry_get_text(GTK_ENTRY(input2)));

  output=lookup_widget(objet_graphique,"labeler"); 
  logg=verifier(login,password);

switch(logg)
{
	case 1://pour afficher(espace admin)
		espaceadmin= create_espaceadmin();
		gtk_widget_show (espaceadmin);
		acceuil =lookup_widget(objet_graphique,"acceuil");
		gtk_widget_hide(acceuil);
		break;
case 2://pour afficher(espace employe)
		espaceemploye= create_espaceemploye();
		gtk_widget_show (espaceemploye);
		acceuil =lookup_widget(objet_graphique,"acceuil");
		gtk_widget_hide(acceuil);
		break;
case 3://pour afficher(espace client)
		espaceclient= create_espaceclient();
		gtk_widget_show (espaceclient);
		acceuil =lookup_widget(objet_graphique,"acceuil");
		gtk_widget_hide(acceuil);
		break;
	default :
gtk_label_set_text(GTK_LABEL(output),"Verifier vos paramètres !!");
}


}

void
on_afficheradmin_clicked               (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
  GtkWidget *espaceadmin;
  GtkWidget *treeview1;
  espaceadmin=lookup_widget(objet_graphique,"espaceadmin");
  treeview1=lookup_widget(espaceadmin,"treeview1");
  afficher(treeview1);

}
void
on_deconnexion_clicked                  (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{

  GtkWidget *espaceadmin;
   GtkWidget *acceuil;
  espaceadmin=create_espaceadmin();
  espaceadmin=lookup_widget(objet_graphique,"espaceadmin");
   gtk_widget_hide(espaceadmin);
  acceuil = create_acceuil();
  gtk_widget_show (acceuil);
}


void
on_afficheremp_clicked                 (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{

GtkWidget *espaceadmin;
  GtkWidget *treeview2;
  espaceadmin=lookup_widget(objet_graphique,"espaceadmin");
  treeview2=lookup_widget(espaceadmin,"treeview2");
  afficheremploye(treeview2);
}



void
on_ajouteremp_clicked                  (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
  employe e;  
  GtkWidget *input1;  
  GtkWidget *input2; 
  GtkWidget *input3;  
  GtkWidget *input4;  
  GtkWidget *input5;  
  GtkWidget *input6;  
  GtkWidget *input7;  
  GtkWidget *input8; 
  GtkWidget *input9;
  GtkWidget *radiobutton1;
  GtkWidget *radiobutton2;

  input1=lookup_widget(objet_graphique,"entry8"); 
  input2=lookup_widget(objet_graphique,"entry9"); 
  radiobutton1=lookup_widget(objet_graphique,"radiobutton1"); 
  radiobutton2=lookup_widget(objet_graphique,"radiobutton2"); 
  input5=lookup_widget(objet_graphique,"spinbutton1"); 
  input6=lookup_widget(objet_graphique,"spinbutton2"); 
  input7=lookup_widget(objet_graphique,"spinbutton3"); 
  input8=lookup_widget(objet_graphique,"spinbutton4");
  input9=lookup_widget(objet_graphique,"spinbutton5"); 
  if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(radiobutton1))==TRUE)
  {strcpy(e.sexe,"Homme");;}
  else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(radiobutton2))==TRUE)
  {strcpy(e.sexe,"Femme");;}
  strcpy(e.nom,gtk_entry_get_text(GTK_ENTRY(input1)));
  strcpy(e.prenom,gtk_entry_get_text(GTK_ENTRY(input2)));
  strcpy(e.num_CIN,gtk_entry_get_text(GTK_ENTRY(input5)));
  strcpy(e.num_tel,gtk_entry_get_text(GTK_ENTRY(input6)));
  strcpy(e.jour,gtk_entry_get_text(GTK_ENTRY(input7)));
  strcpy(e.mois,gtk_entry_get_text(GTK_ENTRY(input8)));
  strcpy(e.annee,gtk_entry_get_text(GTK_ENTRY(input9)));
  ajouteremp(e);
}

void
on_modifieremp_clicked                  (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
char nom[20] ;char prenom[20];char sexe [20];char num_CIN[20];char num_tel[20]; char jour[20];char mois[20];char annee[20];
 employe e;
  GtkWidget *input1;  
  GtkWidget *input2; 
  GtkWidget *input3;  
  GtkWidget *input4;  
  GtkWidget *input5;  
  GtkWidget *input6;  
  GtkWidget *input7;  
  GtkWidget *input8; 
  GtkWidget *input9;
  GtkWidget *radiobutton3;
  GtkWidget *radiobutton4;

  input1=lookup_widget(objet_graphique,"entry11"); 
  input2=lookup_widget(objet_graphique,"entry12"); 
  radiobutton3=lookup_widget(objet_graphique,"radiobutton3"); 
  radiobutton4=lookup_widget(objet_graphique,"radiobutton4"); 
  input5=lookup_widget(objet_graphique,"spinbutton6"); 
  input6=lookup_widget(objet_graphique,"spinbutton7"); 
  input7=lookup_widget(objet_graphique,"spinbutton8"); 
  input8=lookup_widget(objet_graphique,"spinbutton9");
  input9=lookup_widget(objet_graphique,"spinbutton10"); 
  if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(radiobutton3))==TRUE)
  {strcpy(e.sexe,"Homme");;}
  else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(radiobutton4))==TRUE)
  {strcpy(e.sexe,"Femme");;}
  strcpy(e.nom,gtk_entry_get_text(GTK_ENTRY(input1)));
  strcpy(e.prenom,gtk_entry_get_text(GTK_ENTRY(input2)));
  strcpy(e.num_CIN,gtk_entry_get_text(GTK_ENTRY(input5)));
  strcpy(e.num_tel,gtk_entry_get_text(GTK_ENTRY(input6)));
  strcpy(e.jour,gtk_entry_get_text(GTK_ENTRY(input7)));
  strcpy(e.mois,gtk_entry_get_text(GTK_ENTRY(input8)));
  strcpy(e.annee,gtk_entry_get_text(GTK_ENTRY(input9)));
  modifieremp(e.nom,e.prenom,e.sexe,e.num_CIN,e.num_tel,e.jour,e.mois,e.annee);
}


void
on_supprimeremp_clicked                (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{ 
  char cin[20];
  GtkWidget *input1;
  input1=lookup_widget(objet_graphique,"entry10"); 
  strcpy(cin,gtk_entry_get_text(GTK_ENTRY(input1)));
  supprimeremp(cin);

}

void
on_button7_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

system("vlc cam.mp4");
}



void
on_afficherlesstatistiques_clicked     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
    GtkWidget *output1;
    output1= lookup_widget(objet_graphique,"label65");
    char outstat1[20]="";
    int stt1=nombreemploye();
    sprintf(outstat1,"%d",stt1);
    gtk_label_set_text(GTK_LABEL(output1),outstat1);

}



void
on_changerlogin_clicked                (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *input1;  
  GtkWidget *input2;
  GtkWidget *output;  
  char message[70]="";
  char ancien_login[30];
  char nouveau_login[30];
  output=lookup_widget(objet_graphique,"errorl");
  input1=lookup_widget(objet_graphique,"entry3");
  strcpy(ancien_login,gtk_entry_get_text(GTK_ENTRY(input1))); 
  input2=lookup_widget(objet_graphique,"entry4"); 
  strcpy(nouveau_login,gtk_entry_get_text(GTK_ENTRY(input2)));
 
switch(verif_login(ancien_login,nouveau_login,message)){
case 0: {
gtk_label_set_text(GTK_LABEL(output),message);
break;
}
case 1 :

 {
changer_login(ancien_login,nouveau_login);
strcpy(message,"Login changed");
gtk_label_set_text(GTK_LABEL(output),message);
break;
}
case 2 : 
{
strcpy(message,"new Login invalid");
gtk_label_set_text(GTK_LABEL(output),message);
break;

}

}

}


void
on_changerpass_clicked                 (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *input1;  
  GtkWidget *input2;  
  GtkWidget *output; 
  char message[70]="";
  char ancien_password[20];
  char nouveau_password[20];
  char login[20];
  char password1 [20] ;
  char loginactuel [20] ;
  char login1[20] ;
  
  output=lookup_widget(objet_graphique,"errorp");
  input1=lookup_widget(objet_graphique,"entry5"); 
  strcpy(ancien_password,gtk_entry_get_text(GTK_ENTRY(input1))); 
  input2=lookup_widget(objet_graphique,"entry6"); 
  strcpy(nouveau_password,gtk_entry_get_text(GTK_ENTRY(input2))); 

switch(verif_password(ancien_password,nouveau_password,message)){
case 0: {
gtk_label_set_text(GTK_LABEL(output),message);
break;
}
case 1 :

 {
changer_pass(ancien_password,nouveau_password) ;
strcpy(message,"password changed");
gtk_label_set_text(GTK_LABEL(output),message);
break;
}
case 2 : 
{
strcpy(message,"new password invalid");
gtk_label_set_text(GTK_LABEL(output),message);
break;

}

}

}
////////////////////////////////////////////////////////////////////
void
on_lesfactures_clicked                 (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *gestionfinanciere;
   GtkWidget *lesfactures;
  gestionfinanciere=create_gestionfinanciere();
  gestionfinanciere=lookup_widget(objet_graphique,"gestionfinanciere");
   gtk_widget_hide(gestionfinanciere);
  lesfactures = create_lesfactures ();
  gtk_widget_show (lesfactures);
}



void
on_statistique_clicked                 (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *gestionfinanciere;
   GtkWidget *statistique;
  gestionfinanciere=create_gestionfinanciere();
  gestionfinanciere=lookup_widget(objet_graphique,"gestionfinanciere");
   gtk_widget_hide(gestionfinanciere);
  statistique = create_statistique ();
  gtk_widget_show (statistique);
}


void
on_gestpres_clicked                    (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *espaceemploye;
   GtkWidget *prestation;
  espaceemploye=create_espaceemploye();
  espaceemploye=lookup_widget(objet_graphique,"espaceemploye");
   gtk_widget_hide(espaceemploye);
  prestation = create_prestation ();
  gtk_widget_show (prestation);
}


void
on_gestfin_clicked                     (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *espaceemploye;
   GtkWidget *gestionfinanciere;
  espaceemploye=create_espaceemploye();
  espaceemploye=lookup_widget(objet_graphique,"espaceemploye");
   gtk_widget_hide(espaceemploye);
  gestionfinanciere = create_gestionfinanciere ();
  gtk_widget_show (gestionfinanciere);
}


void
on_donclient_clicked                   (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *espaceemploye;
   GtkWidget *donneclient;
  espaceemploye=create_espaceemploye();
  espaceemploye=lookup_widget(objet_graphique,"espaceemploye");
   gtk_widget_hide(espaceemploye);
  donneclient = create_donneclient ();
  gtk_widget_show (donneclient);
}
void
on_sauvegardervol_clicked              (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
  vol e;  
  GtkWidget *input1;  
  GtkWidget *input2; 
  GtkWidget *input3;  
  GtkWidget *input4;  
  GtkWidget *input5;  
  GtkWidget *input6;  
  GtkWidget *input7;  
  GtkWidget *input8; 
  GtkWidget *input9;
  GtkWidget *input10;

  input1=lookup_widget(objet_graphique,"a"); 
  input2=lookup_widget(objet_graphique,"b");  
  input3=lookup_widget(objet_graphique,"c"); 
  input4=lookup_widget(objet_graphique,"d"); 
  input5=lookup_widget(objet_graphique,"e"); 
  input6=lookup_widget(objet_graphique,"f");  
  input7=lookup_widget(objet_graphique,"g"); 
  input8=lookup_widget(objet_graphique,"h");
  input9=lookup_widget(objet_graphique,"i");
  input10=lookup_widget(objet_graphique,"j");
  strcpy(e.airports,gtk_combo_box_get_active_text(GTK_ENTRY(input1)));
  strcpy(e.aiporta,gtk_combo_box_get_active_text(GTK_ENTRY(input2)));
  strcpy(e.jours,gtk_entry_get_text(GTK_ENTRY(input3)));
  strcpy(e.moiss,gtk_entry_get_text(GTK_ENTRY(input4)));
  strcpy(e.annees,gtk_entry_get_text(GTK_ENTRY(input5)));
  strcpy(e.type,gtk_combo_box_get_active_text(GTK_ENTRY(input6)));
  strcpy(e.heureduvol,gtk_entry_get_text(GTK_ENTRY(input7)));
  strcpy(e.nombreadulte,gtk_entry_get_text(GTK_ENTRY(input8)));
  strcpy(e.prix,gtk_entry_get_text(GTK_ENTRY(input9)));
  strcpy(e.code,gtk_entry_get_text(GTK_ENTRY(input10)));
  ajoutervol(e);
}


void
on_supprimervol_clicked                (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
char codevol[20];
  GtkWidget *input1;
  input1=lookup_widget(objet_graphique,"entrysupprimevol"); 
  strcpy(codevol,gtk_entry_get_text(GTK_ENTRY(input1)));
  supprimervol(codevol);
}

void
on_modifiervol_clicked                 (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
char airports[20];   
char aiporta[20];
char jours[20];
char moiss[20];
char annees[20];
char heureduvol[20];
char nombreadulte[20];
char type[20];
char prix[20];
char code[20];
vol e;
  GtkWidget *input1;  
  GtkWidget *input2; 
  GtkWidget *input3;  
  GtkWidget *input4;  
  GtkWidget *input5;  
  GtkWidget *input6;  
  GtkWidget *input7;  
  GtkWidget *input8; 
  GtkWidget *input9;
GtkWidget *input10;

  input1=lookup_widget(objet_graphique,"aa"); 
  input2=lookup_widget(objet_graphique,"bb");  
  input3=lookup_widget(objet_graphique,"cc"); 
  input4=lookup_widget(objet_graphique,"dd"); 
  input5=lookup_widget(objet_graphique,"ee"); 
  input6=lookup_widget(objet_graphique,"ff");  
  input7=lookup_widget(objet_graphique,"gg"); 
  input8=lookup_widget(objet_graphique,"hh");
  input9=lookup_widget(objet_graphique,"ii");
  input10=lookup_widget(objet_graphique,"jj");
  strcpy(e.airports,gtk_combo_box_get_active_text(GTK_ENTRY(input1)));
  strcpy(e.aiporta,gtk_combo_box_get_active_text(GTK_ENTRY(input2)));
  strcpy(e.jours,gtk_entry_get_text(GTK_ENTRY(input3)));
  strcpy(e.moiss,gtk_entry_get_text(GTK_ENTRY(input4)));
  strcpy(e.annees,gtk_entry_get_text(GTK_ENTRY(input5)));
  strcpy(e.type,gtk_combo_box_get_active_text(GTK_ENTRY(input6)));
  strcpy(e.heureduvol,gtk_entry_get_text(GTK_ENTRY(input7)));
  strcpy(e.nombreadulte,gtk_entry_get_text(GTK_ENTRY(input8)));
  strcpy(e.prix,gtk_entry_get_text(GTK_ENTRY(input9)));
  strcpy(e.code,gtk_entry_get_text(GTK_ENTRY(input10)));
modifiervol(e.airports,e.aiporta,e.jours,e.moiss,e.annees,e.type,e.heureduvol,e.nombreadulte,e.prix,e.code);
}



void
on_affichervol_clicked                 (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
  GtkWidget *prestation;
  GtkWidget *treeview3;
  prestation=lookup_widget(objet_graphique,"prestation");
  treeview3=lookup_widget(prestation,"treeview3");
  affichervol(treeview3);
}


void
on_sauvegarderhotel_clicked            (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
  
{
hotel e;  
  GtkWidget *input1;  
  GtkWidget *input2; 
  GtkWidget *input3;  
  GtkWidget *input4;  
  GtkWidget *input5;  
  GtkWidget *input6;  
  GtkWidget *input7; 

  input1=lookup_widget(objet_graphique,"comboh"); 
  input2=lookup_widget(objet_graphique,"spin2");  
  input3=lookup_widget(objet_graphique,"spin3"); 
  input4=lookup_widget(objet_graphique,"spin4"); 
  input5=lookup_widget(objet_graphique,"spin5"); 
  input6=lookup_widget(objet_graphique,"ww");  
  input7=lookup_widget(objet_graphique,"xx"); 
  strcpy(e.nomhotel,gtk_combo_box_get_active_text(GTK_ENTRY(input1)));
   strcpy(e.nombrenuit,gtk_entry_get_text(GTK_ENTRY(input2)));
   strcpy(e.jouraa,gtk_entry_get_text(GTK_ENTRY(input3)));
   strcpy(e.moisaa,gtk_entry_get_text(GTK_ENTRY(input4)));
   strcpy(e.anneeaa,gtk_entry_get_text(GTK_ENTRY(input5)));
   strcpy(e.codehotel,gtk_entry_get_text(GTK_ENTRY(input6)));
   strcpy(e.prixhotel,gtk_entry_get_text(GTK_ENTRY(input7)));

  ajouterhotel(e);
}
void
on_supprimerhotel_clicked                (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
char codeh[20];
  GtkWidget *input1;
  input1=lookup_widget(objet_graphique,"entry37"); 
  strcpy(codeh,gtk_entry_get_text(GTK_ENTRY(input1)));
  supprimerhotel(codeh);
}
void
on_modifierhotel_clicked                 (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
char nomhotel[20];   
char nombrenuit[20];
char jouraa[20];
char moisaa[20];
char anneeaa[20];
char codehotel[20];
char prixhotel[20];

hotel e;
  GtkWidget *input1;  
  GtkWidget *input2; 
  GtkWidget *input3;  
  GtkWidget *input4;  
  GtkWidget *input5;  
  GtkWidget *input6;  
  GtkWidget *input7;  
  

  input1=lookup_widget(objet_graphique,"combobox2"); 
  input2=lookup_widget(objet_graphique,"spinbutton33");  
  input3=lookup_widget(objet_graphique,"spinbutton34"); 
  input4=lookup_widget(objet_graphique,"spinbutton35"); 
  input5=lookup_widget(objet_graphique,"spinbutton36"); 
  input6=lookup_widget(objet_graphique,"entry46");  
  input7=lookup_widget(objet_graphique,"entry47"); 
  
  strcpy(e.nomhotel,gtk_combo_box_get_active_text(GTK_ENTRY(input1)));
  strcpy(e.nombrenuit,gtk_entry_get_text(GTK_ENTRY(input2)));
  strcpy(e.jouraa,gtk_entry_get_text(GTK_ENTRY(input3)));
  strcpy(e.moisaa,gtk_entry_get_text(GTK_ENTRY(input4)));
  strcpy(e.anneeaa,gtk_entry_get_text(GTK_ENTRY(input5)));
  strcpy(e.codehotel,gtk_entry_get_text(GTK_ENTRY(input6)));
  strcpy(e.prixhotel,gtk_entry_get_text(GTK_ENTRY(input7)));
  
modifierhotel(e.nomhotel,e.nombrenuit,e.jouraa,e.moisaa,e.anneeaa,e.codehotel,e.prixhotel);
}

void
on_afficherhotel_clicked                 (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
  GtkWidget *prestation;
  GtkWidget *treeview1;
  prestation=lookup_widget(objet_graphique,"prestation");
  treeview1=lookup_widget(prestation,"treeview1");
  afficherhotel(treeview1);
}

void
on_sauvegardervoiture_clicked           (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
voiture e;  
  GtkWidget *input1;  
  GtkWidget *input2; 
  GtkWidget *input3;  
  GtkWidget *input4;  
  GtkWidget *input5;  
 
  input1=lookup_widget(objet_graphique,"entry24"); 
  input2=lookup_widget(objet_graphique,"entry25");  
  input3=lookup_widget(objet_graphique,"entry26"); 
  input4=lookup_widget(objet_graphique,"entry27"); 
  input5=lookup_widget(objet_graphique,"entry28"); 
  
  strcpy(e.marque,gtk_entry_get_text(GTK_ENTRY(input1)));
   strcpy(e.couleur,gtk_entry_get_text(GTK_ENTRY(input2)));
   strcpy(e.type,gtk_entry_get_text(GTK_ENTRY(input3)));
   strcpy(e.prix,gtk_entry_get_text(GTK_ENTRY(input4)));
   strcpy(e.matricule,gtk_entry_get_text(GTK_ENTRY(input5)));
  

  ajoutervoiture(e);
}


void
on_supprimervoiture_clicked            (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
char mat[20];
  GtkWidget *input1;
  input1=lookup_widget(objet_graphique,"entry39"); 
  strcpy(mat,gtk_entry_get_text(GTK_ENTRY(input1)));
  supprimervoiture(mat);
}


void
on_modifiervoiture_clicked              (GtkWidget     *objet_graphique,
                                        gpointer         user_data)

{
char marque[20];   
char couleur[20];
char type[20];
char prix[20];
char matricule[20];


voiture e;
  GtkWidget *input1;  
  GtkWidget *input2; 
  GtkWidget *input3;  
  GtkWidget *input4;  
  GtkWidget *input5;  
   
  

  input1=lookup_widget(objet_graphique,"entry40"); 
  input2=lookup_widget(objet_graphique,"entry41");  
  input3=lookup_widget(objet_graphique,"entry42"); 
  input4=lookup_widget(objet_graphique,"entry43"); 
  input5=lookup_widget(objet_graphique,"entry44"); 
 
  
  strcpy(e.marque,gtk_entry_get_text(GTK_ENTRY(input1)));
  strcpy(e.couleur,gtk_entry_get_text(GTK_ENTRY(input2)));
  strcpy(e.type,gtk_entry_get_text(GTK_ENTRY(input3)));
  strcpy(e.prix,gtk_entry_get_text(GTK_ENTRY(input4)));
  strcpy(e.matricule,gtk_entry_get_text(GTK_ENTRY(input5)));
  
  
modifiervoiture(e.marque,e.couleur,e.type,e.prix,e.matricule);
}




void
on_affichervoiture_clicked             (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *prestation;
  GtkWidget *treeview2;
  prestation=lookup_widget(objet_graphique,"prestation");
  treeview2=lookup_widget(prestation,"treeview2");
  affichervoiture(treeview2);
}


void
on_sauvegarderclient_clicked           (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
client e;  
  GtkWidget *input1;  
  GtkWidget *input2; 
  GtkWidget *input3;  
  GtkWidget *input4;  
  GtkWidget *input5;  
  GtkWidget *input6;  
  GtkWidget *input7;  
  GtkWidget *input8; 
  GtkWidget *input9;
GtkWidget *input10;
GtkWidget *input11;
GtkWidget *input12;
GtkWidget *input13;

  input1=lookup_widget(objet_graphique,"entry8");  
  input2=lookup_widget(objet_graphique,"entry9"); 
  input3=lookup_widget(objet_graphique,"entry10"); 
  input4=lookup_widget(objet_graphique,"entry11"); 
  input5=lookup_widget(objet_graphique,"comboboxentry2");
  input6=lookup_widget(objet_graphique,"entry12"); 
  input7=lookup_widget(objet_graphique,"entry13"); 
  input8=lookup_widget(objet_graphique,"comboboxentry3"); 
  input9=lookup_widget(objet_graphique,"spinbutton4");
  input10=lookup_widget(objet_graphique,"spinbutton5");
  input11=lookup_widget(objet_graphique,"spinbutton6");
  input12=lookup_widget(objet_graphique,"entry14");
  input13=lookup_widget(objet_graphique,"entry15");
   
  strcpy(e.nom,gtk_entry_get_text(GTK_ENTRY(input1)));
  strcpy(e.prenom,gtk_entry_get_text(GTK_ENTRY(input2)));
  strcpy(e.Email,gtk_entry_get_text(GTK_ENTRY(input3)));
  strcpy(e.telephone,gtk_entry_get_text(GTK_ENTRY(input4)));
  strcpy(e.pays,gtk_combo_box_get_active_text(GTK_ENTRY(input5)));
  strcpy(e.ci,gtk_entry_get_text(GTK_ENTRY(input6)));
  strcpy(e.numpass,gtk_entry_get_text(GTK_ENTRY(input7)));
  strcpy(e.methpay,gtk_combo_box_get_active_text(GTK_ENTRY(input8)));
  strcpy(e.jourres,gtk_entry_get_text(GTK_ENTRY(input9)));
 strcpy(e.moisres,gtk_entry_get_text(GTK_ENTRY(input10)));
 strcpy(e.anneeres,gtk_entry_get_text(GTK_ENTRY(input11)));
 strcpy(e.donnee,gtk_entry_get_text(GTK_ENTRY(input12)));
 strcpy(e.prix,gtk_entry_get_text(GTK_ENTRY(input13)));
  ajouterclient(e);
}


void
on_retournerclient_clicked             (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
  GtkWidget *donneclient;
   GtkWidget *espaceemploye;
  donneclient=create_donneclient();
  donneclient=lookup_widget(objet_graphique,"donneclient");
   gtk_widget_hide(donneclient);
  espaceemploye = create_espaceemploye ();
  gtk_widget_show (espaceemploye);
}


void
on_retournerfacture_clicked             (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *lesfactures;
   GtkWidget *gestionfinanciere;
  lesfactures=create_lesfactures();
  lesfactures=lookup_widget(objet_graphique,"lesfactures");
   gtk_widget_hide(lesfactures);
  gestionfinanciere = create_gestionfinanciere ();
  gtk_widget_show (gestionfinanciere);
}


void
on_sauvegarderfacture_clicked           (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
facture e;  
  GtkWidget *input1;  
  GtkWidget *input2; 
  GtkWidget *input3;  
  GtkWidget *input4;  
 

  input1=lookup_widget(objet_graphique,"entry1");  
  input2=lookup_widget(objet_graphique,"entry2"); 
  input3=lookup_widget(objet_graphique,"entry5"); 
  input4=lookup_widget(objet_graphique,"entry3"); 
  
   
  strcpy(e.user,gtk_entry_get_text(GTK_ENTRY(input1)));
  strcpy(e.ref,gtk_entry_get_text(GTK_ENTRY(input2)));
  strcpy(e.dpay,gtk_entry_get_text(GTK_ENTRY(input3)));
  strcpy(e.pri,gtk_entry_get_text(GTK_ENTRY(input4)));
  
  ajouterfacture(e);
}


void
on_sauvegarderstat_clicked              (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
stat e;  
  GtkWidget *input1;  
  GtkWidget *input2; 
  GtkWidget *input3;  
    
 

  input1=lookup_widget(objet_graphique,"entry4");  
  input2=lookup_widget(objet_graphique,"entry6"); 
  input3=lookup_widget(objet_graphique,"entry48"); 
  
  
   
  strcpy(e.totprix,gtk_entry_get_text(GTK_ENTRY(input1)));
  strcpy(e.nbcd,gtk_entry_get_text(GTK_ENTRY(input2)));
  strcpy(e.nbrec,gtk_entry_get_text(GTK_ENTRY(input3)));
  
  
  ajouterstat(e);
}


void
on_retournerstat_clicked                (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *statistique;
   GtkWidget *gestionfinanciere;
  statistique=create_statistique();
  statistique=lookup_widget(objet_graphique,"statistique");
   gtk_widget_hide(statistique);
  gestionfinanciere = create_gestionfinanciere ();
  gtk_widget_show (gestionfinanciere);
}


void
on_retournergest_clicked               (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *gestionfinanciere;
   GtkWidget *espaceemploye;
  gestionfinanciere=create_gestionfinanciere();
  gestionfinanciere=lookup_widget(objet_graphique,"gestionfinanciere");
   gtk_widget_hide(gestionfinanciere);
  espaceemploye = create_espaceemploye ();
  gtk_widget_show (espaceemploye);
}

void
on_deconnexionpres_clicked                 (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *prestation;
   GtkWidget *espaceemploye;
  prestation=create_prestation();
  prestation=lookup_widget(objet_graphique,"prestation");
   gtk_widget_hide(prestation);
  espaceemploye = create_espaceemploye ();
  gtk_widget_show (espaceemploye);
}





void
on_button24_clicked                    (GtkWidget     *objet_graphique,
                                        gpointer         user_data)

{
   GtkWidget *acceuil;
  GtkWidget *espaceemploye;

  espaceemploye=create_espaceemploye();
  espaceemploye=lookup_widget(objet_graphique,"espaceemploye");
   gtk_widget_hide(espaceemploye);
  acceuil = create_acceuil();
  gtk_widget_show (acceuil);
}

////////////////////////////////

void
on_reclamation_clicked                 (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
  GtkWidget *espaceclient;
   GtkWidget *reclamation;
  espaceclient=create_espaceclient();
  espaceclient=lookup_widget(objet_graphique,"espaceclient");
gtk_widget_hide(espaceclient);
  reclamation = create_reclamation ();
  gtk_widget_show (reclamation);
}


void
on_afficherfacture_clicked             (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
  GtkWidget *espaceclient;
   GtkWidget *factures;
  espaceclient=create_espaceclient();
  espaceclient=lookup_widget(objet_graphique,"espaceclient");
gtk_widget_hide(espaceclient);
  factures = create_factures ();
  gtk_widget_show (factures);
}


void
on_modifiercompte_clicked               (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
  GtkWidget *espaceclient;
   GtkWidget *moncompte;
  espaceclient=create_espaceclient();
  espaceclient=lookup_widget(objet_graphique,"espaceclient");
gtk_widget_hide(espaceclient);
  moncompte = create_moncompte ();
  gtk_widget_show (moncompte);
}



void
on_modifiercli_clicked                  (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
char nom[20] ;char prenom[20];char sexe [20];char num_CIN[20];char num_tel[20];char adresse[20];char jour[20];char mois[20];char annee[20];char num_passport[20];char email[40];
  clientt c;
  GtkWidget *input1;  
  GtkWidget *input2; 
  GtkWidget *input3;  
  GtkWidget *input4;  
  GtkWidget *input5;  
  GtkWidget *input6;  
  GtkWidget *input7;  
  GtkWidget *input8; 
  GtkWidget *input9;
  GtkWidget *input10;
  GtkWidget *input11;
  GtkWidget *input12;
  GtkWidget *radiobutton3;
  GtkWidget *radiobutton4;

  input1=lookup_widget(objet_graphique,"entry2"); 
  input2=lookup_widget(objet_graphique,"entry3"); 
  radiobutton3=lookup_widget(objet_graphique,"radiobutton3"); 
  radiobutton4=lookup_widget(objet_graphique,"radiobutton4"); 
  input5=lookup_widget(objet_graphique,"spinbutton1"); 
  input6=lookup_widget(objet_graphique,"spinbutton2"); 
  input7=lookup_widget(objet_graphique,"spinbutton3"); 
  input8=lookup_widget(objet_graphique,"entry6");
  input9=lookup_widget(objet_graphique,"entry7"); 
  input10=lookup_widget(objet_graphique,"entry11"); 
  input11=lookup_widget(objet_graphique,"entry4"); 
  input12=lookup_widget(objet_graphique,"entry5"); 

  if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(radiobutton3))==TRUE)
  {strcpy(c.sexe,"Homme");;}
  else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(radiobutton4))==TRUE)
  {strcpy(c.sexe,"Femme");;}
  strcpy(c.nom,gtk_entry_get_text(GTK_ENTRY(input1)));
  strcpy(c.prenom,gtk_entry_get_text(GTK_ENTRY(input2)));
  strcpy(c.num_CIN,gtk_entry_get_text(GTK_ENTRY(input10)));
  strcpy(c.num_tel,gtk_entry_get_text(GTK_ENTRY(input8)));
  strcpy(c.jour,gtk_entry_get_text(GTK_ENTRY(input5)));
  strcpy(c.mois,gtk_entry_get_text(GTK_ENTRY(input6)));
  strcpy(c.annee,gtk_entry_get_text(GTK_ENTRY(input7)));
  strcpy(c.num_passport,gtk_entry_get_text(GTK_ENTRY(input9)));
  strcpy(c.email,gtk_entry_get_text(GTK_ENTRY(input12)));
  strcpy(c.adresse,gtk_entry_get_text(GTK_ENTRY(input11)));

  modifiercli(c.nom,c.prenom,c.sexe ,c.num_CIN,c.num_passport,c.num_tel,c.adresse,c.jour,c.mois,c.annee,c.email);
}

void
on_retourmoncompte_clicked             (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
  GtkWidget *moncompte;
   GtkWidget *espaceclient;
  moncompte=create_moncompte();
  moncompte=lookup_widget(objet_graphique,"moncompte");
gtk_widget_hide(moncompte);
  espaceclient = create_espaceclient ();
  gtk_widget_show (espaceclient);
}


void
on_retourfactures_clicked              (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
  GtkWidget *factures;
  GtkWidget *espaceclient;
  factures=create_factures();
  factures=lookup_widget(objet_graphique,"factures");
  gtk_widget_hide(factures);
  espaceclient = create_espaceclient ();
  gtk_widget_show (espaceclient);
}


void
on_annulerpanier_clicked               (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
  GtkWidget *panier;
  GtkWidget *espaceclient;
  panier=create_panier();
  panier=lookup_widget(objet_graphique,"panier");
  gtk_widget_hide(panier);
  espaceclient = create_espaceclient ();
  gtk_widget_show (espaceclient);
}


void
on_deconnexionespaceclient_clicked     (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
  GtkWidget *espaceclient;
   GtkWidget *acceuil;
  espaceclient=create_espaceclient();
  espaceclient=lookup_widget(objet_graphique,"espaceclient");
   gtk_widget_hide(espaceclient);
  acceuil = create_acceuil();
  gtk_widget_show (acceuil);
}





void
on_retourreclamation_clicked           (GtkWidget     *objet_graphique,
                                        gpointer         user_data)
{
  GtkWidget *reclamation;
   GtkWidget *espaceclient;
  reclamation=create_reclamation();
  reclamation=lookup_widget(objet_graphique,"reclamation");
gtk_widget_hide(reclamation);
  espaceclient = create_espaceclient ();
  gtk_widget_show (espaceclient);
}


void
on_MapView_Button_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{
system("./map/mapview");
}

