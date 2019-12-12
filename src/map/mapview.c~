/*
 * Copyright (C) 2010-2013 Jiri Techet <techet@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */
#include <champlain-gtk/champlain-gtk.h>
#include <clutter-gtk/clutter-gtk.h>
int main (int argc, char *argv[])
{
  GtkWidget *window, *widget,*image;
  ClutterColor orange = { 0xf3, 0x94, 0x07, 0xbb };
  ChamplainView *view;
  
  ClutterActor *marker;
  ChamplainMarkerLayer *layer;
  ClutterActor *marker1;
  ChamplainMarkerLayer *layer1;
  
  
  gdouble latitude = 36.614676;
  gdouble longitude = 8.970555;

  gdouble latitude1 = 36.899500;
  gdouble longitude1 = 10.189311;

  /* initialize clutter */
  if (gtk_clutter_init (&argc, &argv) != CLUTTER_INIT_SUCCESS)    return 1;
  /* create the top-level window and quit the main loop when it's closed */
  window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  g_signal_connect (G_OBJECT (window), "destroy", G_CALLBACK (gtk_main_quit),NULL);
  /* create the libchamplain widget and set its size */
  widget = gtk_champlain_embed_new ();
  view = gtk_champlain_embed_get_view (GTK_CHAMPLAIN_EMBED (widget));
  /* define the zoom level and some parameters*/
  g_object_set (G_OBJECT (view),"kinetic-mode", TRUE,"zoom-level", 14,NULL);
  /*centrer */
  champlain_view_center_on (CHAMPLAIN_VIEW (view), latitude, longitude);
  /*Création d'une couche(layer) qui portera les marqueurs de type ClutterActor*/
  layer = champlain_marker_layer_new_full (CHAMPLAIN_SELECTION_SINGLE);
  layer1 = champlain_marker_layer_new_full (CHAMPLAIN_SELECTION_SINGLE);
  /* Création d'un marqueur à partir d'une image alerte.png*/
  marker = champlain_label_new_from_file ("./icons/alerte.png", NULL);
  marker1 = champlain_label_new_from_file ("./icons/alerte.png", NULL);
  /* Ajout d'un texte au marqueur : Alert !! */
  champlain_label_set_text (CHAMPLAIN_LABEL (marker), "Agence Boussalem");
  champlain_label_set_text (CHAMPLAIN_LABEL (marker1), "Agence Tunis");
  /* Coloration du marqueur en orangé */
  champlain_label_set_color (CHAMPLAIN_LABEL (marker), &orange);
  champlain_label_set_color (CHAMPLAIN_LABEL (marker1), &orange);
  /*définition de la position du marqueur par latitude et longitude */
  champlain_location_set_location (CHAMPLAIN_LOCATION (marker), latitude, longitude);
  champlain_location_set_location (CHAMPLAIN_LOCATION (marker1), latitude1, longitude1);
  /*Ajout du marqueur à la couche crée auparavant */
  champlain_marker_layer_add_marker (layer, CHAMPLAIN_MARKER (marker));
  champlain_marker_layer_add_marker (layer1, CHAMPLAIN_MARKER (marker1));
  /*Ajout de la couche contenant le marqueur à la vue du widget libchamplain (ChamplainView)*/
  champlain_view_add_layer (view, CHAMPLAIN_LAYER (layer));
  champlain_view_add_layer (view, CHAMPLAIN_LAYER (layer1));
  /* set the champlain widget size 640 * 480 */
  gtk_widget_set_size_request (widget, 1280, 720);
 /* insert it into the widget you wish */
  gtk_container_add (GTK_CONTAINER (window), widget);
  /* show everything */
  gtk_widget_show_all (window);
  /* start the main loop */
  gtk_main ();
  return 0;
}



