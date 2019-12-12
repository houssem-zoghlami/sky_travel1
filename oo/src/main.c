/*
 * Initial main.c file generated by Glade. Edit as required.
 * Glade will not overwrite this file.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "interface.h"
#include "support.h"

int
main (int argc, char *argv[])
{
  GtkWidget *gestionfinanciere;
  GtkWidget *lesfactures;
  GtkWidget *statistique;
  GtkWidget *window4;
  GtkWidget *donneclient;
  GtkWidget *espaceemploye;
  GtkWidget *prestation;

#ifdef ENABLE_NLS
  bindtextdomain (GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR);
  bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
  textdomain (GETTEXT_PACKAGE);
#endif

  gtk_set_locale ();
  gtk_init (&argc, &argv);

  add_pixmap_directory (PACKAGE_DATA_DIR "/" PACKAGE "/pixmaps");

  /*
   * The following code was added by Glade to create one of each component
   * (except popup menus), just so that you see something after building
   * the project. Delete any components that you don't want shown initially.
   */
 /* gestionfinanciere = create_gestionfinanciere ();
  gtk_widget_show (gestionfinanciere);
  lesfactures = create_lesfactures ();
  gtk_widget_show (lesfactures);
  statistique = create_statistique ();
  gtk_widget_show (statistique);
  window4 = create_window4 ();
  gtk_widget_show (window4);
  donneclient = create_donneclient ();
  gtk_widget_show (donneclient);*/
  espaceemploye = create_espaceemploye ();
  gtk_widget_show (espaceemploye);
  //prestation = create_prestation ();
  //gtk_widget_show (prestation);

  gtk_main ();
  return 0;
}

