#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "fonction.h"


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
/*void
on_sauvegardervoiture_clicked            (GtkWidget     *objet_graphique,
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
*/



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

/*
void
on_deconnection_clicked                (GtkWidget     *objet_graphique,
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
*/

void
on_deconnexion_clicked                 (GtkWidget     *objet_graphique,
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

