// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _ATKMM_TEXT_P_H
#define _ATKMM_TEXT_P_H


#include <glibmm/private/interface_p.h>

namespace Atk
{

class Text_Class : public Glib::Interface_Class
{
public:
  typedef Text CppObjectType;
  typedef AtkText BaseObjectType;
  typedef AtkTextIface BaseClassType;
  typedef Glib::Interface_Class CppClassParent;

  friend class Text;

  const Glib::Interface_Class& init();

  static void iface_init_function(void* g_iface, void* iface_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void text_changed_callback(AtkText* self, gint p0, gint p1);
  static void text_caret_moved_callback(AtkText* self, gint p0);
  static void text_selection_changed_callback(AtkText* self);
  static void text_attributes_changed_callback(AtkText* self);

  //Callbacks (virtual functions):
  static gchar* get_text_vfunc_callback(AtkText* self, gint start_offset, gint end_offset);
  static gunichar get_character_at_offset_vfunc_callback(AtkText* self, gint offset);
  static gchar* get_text_after_offset_vfunc_callback(AtkText* self, gint offset, AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
  static gchar* get_text_at_offset_vfunc_callback(AtkText* self, gint offset, AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
  static gchar* get_text_before_offset_vfunc_callback(AtkText* self, gint offset, AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
  static gint get_caret_offset_vfunc_callback(AtkText* self);
  static void get_character_extents_vfunc_callback(AtkText* self, gint offset, gint* x, gint* y, gint* width, gint* height, AtkCoordType coords);
  static AtkAttributeSet* get_run_attributes_vfunc_callback(AtkText* self, gint offset, gint* start_offset, gint* end_offset);
  static AtkAttributeSet* get_default_attributes_vfunc_callback(AtkText* self);
  static gint get_character_count_vfunc_callback(AtkText* self);
  static gint get_offset_at_point_vfunc_callback(AtkText* self, gint x, gint y, AtkCoordType coords);
  static gint get_n_selections_vfunc_callback(AtkText* self);
  static gchar* get_selection_vfunc_callback(AtkText* self, gint selection_num, gint* start_offset, gint* end_offset);
  static gboolean add_selection_vfunc_callback(AtkText* self, gint start_offset, gint end_offset);
  static gboolean remove_selection_vfunc_callback(AtkText* self, gint selection_num);
  static gboolean set_selection_vfunc_callback(AtkText* self, gint selection_num, gint start_offset, gint end_offset);
  static gboolean set_caret_offset_vfunc_callback(AtkText* self, gint offset);
};


} // namespace Atk


#endif /* _ATKMM_TEXT_P_H */

