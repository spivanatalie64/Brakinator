#ifndef GHB_COMPAT_H
#define GHB_COMPAT_H

#include <gtk/gtk.h>

#if !GTK_CHECK_VERSION(4,0,0)

/* GTK4 -> GTK3 Compatibility Shims */

/* Box grouping */
#define gtk_box_append(box, child) gtk_box_pack_start(GTK_BOX(box), child, FALSE, FALSE, 0)

/* GtkCheckButton in GTK4 is different (no label widget child directly accessibly usually, but here we just need creation) */
/* gtk_check_button_new() exists in both */

/* GtkEditable */
#define GTK_EDITABLE(widget) GTK_EDITABLE(widget)
/* gtk_editable_set_width_chars: in GTK3 this is on GtkEntry usually, but GtkEditable interface exists. 
   However, gtk_editable_set_width_chars is NOT in GTK3 GtkEditable interface, it's GtkEntry. 
   We might need to cast to GtkEntry if the widget is an Entry. */
#define gtk_editable_set_width_chars(editable, n_chars) gtk_entry_set_width_chars(GTK_ENTRY(editable), n_chars)
#define gtk_editable_set_text(editable, text) gtk_entry_set_text(GTK_ENTRY(editable), text)

/* Alignment */
/* GTK4 uses halign/valign props. GTK3 has them too (introduced in 3.0), so likely fine. */

/* Tooltips */
/* gtk_widget_set_tooltip_markup exists in both. */

/* Margins */
/* gtk_widget_set_margin_start/end exist in GTK3 >= 3.12 */

#endif

#endif /* GHB_COMPAT_H */
