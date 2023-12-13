// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!

#undef GTK_DISABLE_DEPRECATED
 

#include <glibmm.h>

#include <gtkmm/linkbutton.h>
#include <gtkmm/private/linkbutton_p.h>


// -*- c++ -*-
/* $Id: linkbutton.ccg,v 1.1 2006/01/29 12:21:43 murrayc Exp $ */

/*
 *
 * Copyright 2006 The gtkmm Development Team
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
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <gtk/gtk.h>

#ifndef GTKMM_DISABLE_DEPRECATED

static void SignalProxy_UriHook_gtk_callback(GtkLinkButton *button, const gchar *link, gpointer user_data)
{
  Gtk::LinkButton::SlotUri* the_slot = static_cast<Gtk::LinkButton::SlotUri*>(user_data);

  try
  {
    // use Slot::operator()
    (*the_slot)(Glib::wrap(button), Glib::convert_const_gchar_ptr_to_ustring(link));
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }
}

static void SignalProxy_UriHook_gtk_callback_destroy(void* data)
{
  delete static_cast<Gtk::LinkButton::SlotUri*>(data);
}
#endif // GTKMM_DISABLE_DEPRECATED


namespace Gtk
{

#ifndef GTKMM_DISABLE_DEPRECATED

LinkButton::LinkButton(const Glib::ustring& uri)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Button(Glib::ConstructParams(linkbutton_class_.init(), "uri",uri.c_str(),"label",uri.c_str(), static_cast<char*>(0))) //Note that the uri is used for the label too, as in the C _new() function.
{}

void LinkButton::set_uri_hook(const SlotUri& slot)
{
  //Create a copy of the slot. A pointer to this will be passed through the callback's data parameter.
  //It will be deleted when TreeView_Private::SignalProxy_CellData_gtk_callback_destroy() is called.
   SlotUri* slot_copy = new SlotUri(slot);

  gtk_link_button_set_uri_hook (&SignalProxy_UriHook_gtk_callback, slot_copy, &SignalProxy_UriHook_gtk_callback_destroy);
}

void LinkButton::unset_uri_hook()
{
  gtk_link_button_set_uri_hook (0, 0, 0);
}
#endif // GTKMM_DISABLE_DEPRECATED


} // namespace Gtk


namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::LinkButton* wrap(GtkLinkButton* object, bool take_copy)
{
  return dynamic_cast<Gtk::LinkButton *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& LinkButton_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &LinkButton_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_link_button_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void LinkButton_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* LinkButton_Class::wrap_new(GObject* o)
{
  return manage(new LinkButton((GtkLinkButton*)(o)));

}


/* The implementation: */

LinkButton::LinkButton(const Glib::ConstructParams& construct_params)
:
  Gtk::Button(construct_params)
{
  }

LinkButton::LinkButton(GtkLinkButton* castitem)
:
  Gtk::Button((GtkButton*)(castitem))
{
  }

LinkButton::~LinkButton()
{
  destroy_();
}

LinkButton::CppClassType LinkButton::linkbutton_class_; // initialize static member

GType LinkButton::get_type()
{
  return linkbutton_class_.init().get_type();
}


GType LinkButton::get_base_type()
{
  return gtk_link_button_get_type();
}


LinkButton::LinkButton()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Button(Glib::ConstructParams(linkbutton_class_.init()))
{
  

}

LinkButton::LinkButton(const Glib::ustring& uri, const Glib::ustring& label)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Button(Glib::ConstructParams(linkbutton_class_.init(), "uri", uri.c_str(), "label", label.c_str(), static_cast<char*>(0)))
{
  

}

Glib::ustring LinkButton::get_uri() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_link_button_get_uri(const_cast<GtkLinkButton*>(gobj())));
}

void LinkButton::set_uri(const Glib::ustring& uri)
{
  gtk_link_button_set_uri(gobj(), uri.c_str());
}

bool LinkButton::get_visited() const
{
  return gtk_link_button_get_visited(const_cast<GtkLinkButton*>(gobj()));
}

void LinkButton::set_visited(bool visited)
{
  gtk_link_button_set_visited(gobj(), static_cast<int>(visited));
}


Glib::PropertyProxy< Glib::ustring > LinkButton::property_uri() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "uri");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > LinkButton::property_uri() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "uri");
}

Glib::PropertyProxy< bool > LinkButton::property_visited() 
{
  return Glib::PropertyProxy< bool >(this, "visited");
}

Glib::PropertyProxy_ReadOnly< bool > LinkButton::property_visited() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "visited");
}


} // namespace Gtk


