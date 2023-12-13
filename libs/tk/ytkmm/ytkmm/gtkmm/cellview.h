// -*- c++ -*-
// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!
#ifndef _GTKMM_CELLVIEW_H
#define _GTKMM_CELLVIEW_H

#include <gtkmmconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 2004 The gtkmm Development Team
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

 
#include <gtkmm/widget.h>
#include <gtkmm/celllayout.h>
#include <gtkmm/treemodel.h>
#include <gtkmm/treepath.h>
#include <gtkmm/cellrenderer.h>
#include <gdkmm/pixbuf.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkCellView GtkCellView;
typedef struct _GtkCellViewClass GtkCellViewClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class CellView_Class; } // namespace Gtk
namespace Gtk
{

/** A widget displaying a single row of a TreeModel.
 * A CellView displays a single row of a TreeModel, using cell renderers just like TreeView. CellView doesn't support some of the more
 * complex features of GtkTreeView, like cell editing and drag and drop.
 *
 * @ingroup Widgets
 */

class CellView :
  public Widget,
  public CellLayout
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef CellView CppObjectType;
  typedef CellView_Class CppClassType;
  typedef GtkCellView BaseObjectType;
  typedef GtkCellViewClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~CellView();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class CellView_Class;
  static CppClassType cellview_class_;

  // noncopyable
  CellView(const CellView&);
  CellView& operator=(const CellView&);

protected:
  explicit CellView(const Glib::ConstructParams& construct_params);
  explicit CellView(GtkCellView* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkCellView*       gobj()       { return reinterpret_cast<GtkCellView*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkCellView* gobj() const { return reinterpret_cast<GtkCellView*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

  
public:
  CellView();

  /** Creates a new CellView widget, adds a CellRendererText to it, and makes it show the text.
   * Optionally, the text can be marked up with the Pango text markup language.
   *
   * @param text The text to display in the cell view
   * @param markup Whether the @a text uses Pango text markup language.
   */
  explicit CellView(const Glib::ustring& text, bool use_markup = false);
  

  /** Creates a new CellView widget, adds a CellRendererPixbuf to it, and makes it show the pixbuf.
   *
   * @param pixbuf The image to display in the cell view
   * @param markup Whether the @a text uses Pango text markup language.
   */
  explicit CellView(const Glib::RefPtr<Gdk::Pixbuf>& pixbuf);
  

  //_WRAP_METHOD(void set_value(CellRenderer& renderer, const Glib::ustring& property, const Glib::ValueBase& value), gtk_cell_view_set_value)
  //gtkmmproc error: gtk_cell_view_set_values : ignored method defs lookup failed

  
  /** Sets the model for @a cell_view.  If @a cell_view already has a model
   * set, it will remove it before setting the new model. Use unset_model() to
   * unset the old model.
   * 
   * @newin{2,6}
   * 
   * @param model A Gtk::TreeModel.
   */
  void set_model(const Glib::RefPtr<TreeModel>& model);

  /** Remove the model from the CellView.
   *
   * @see set_model().
   *
   * @newin{2,16}
   */
  void unset_model();

  
  /** Returns the model for @a cell_view. If no model is used <tt>0</tt> is
   * returned.
   * 
   * @newin{2,16}
   * 
   * @return A Gtk::TreeModel used or <tt>0</tt>.
   */
  Glib::RefPtr<TreeModel> get_model();
  
  /** Returns the model for @a cell_view. If no model is used <tt>0</tt> is
   * returned.
   * 
   * @newin{2,16}
   * 
   * @return A Gtk::TreeModel used or <tt>0</tt>.
   */
  Glib::RefPtr<const TreeModel> get_model() const;

  
  /** Sets the row of the model that is currently displayed
   * by the Gtk::CellView. If the path is unset, then the
   * contents of the cellview "stick" at their last value;
   * this is not normally a desired result, but may be
   * a needed intermediate state if say, the model for
   * the Gtk::CellView becomes temporarily empty.
   * 
   * @newin{2,6}
   * 
   * @param path A Gtk::TreePath or <tt>0</tt> to unset.
   */
  void set_displayed_row(const TreeModel::Path& path);
  
  /** Returns a Gtk::TreePath referring to the currently 
   * displayed row. If no row is currently displayed, 
   * <tt>0</tt> is returned.
   * 
   * @newin{2,6}
   * 
   * @return The currently displayed row or <tt>0</tt>.
   */
  TreeModel::Path get_displayed_row() const;
  
  /** Sets @a requisition to the size needed by @a cell_view to display 
   * the model row pointed to by @a path.
   * 
   * @newin{2,6}
   * 
   * @param path A Gtk::TreePath.
   * @param requisition Return location for the size.
   * @return <tt>true</tt>.
   */
  bool get_size_of_row(const TreeModel::Path& path, Requisition& requisition) const;

  
  /** Sets the background color of @a view.
   * 
   * @newin{2,6}
   * 
   * @param color The new background color.
   */
  void set_background_color(const Gdk::Color& color);

  
#ifndef GTKMM_DISABLE_DEPRECATED

  /** Returns the cell renderers which have been added to @a cell_view.
   * 
   * @newin{2,6}
   * 
   * Deprecated: 2.18: use Gtk::CellLayout::get_cells() instead.
   * 
   * @return A list of cell renderers. The list, but not the
   * renderers has been newly allocated and should be freed with
   * Glib::list_free() when no longer needed.
   */
  Glib::ListHandle<CellRenderer*> get_cell_renderers();
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Returns the cell renderers which have been added to @a cell_view.
   * 
   * @newin{2,6}
   * 
   * Deprecated: 2.18: use Gtk::CellLayout::get_cells() instead.
   * 
   * @return A list of cell renderers. The list, but not the
   * renderers has been newly allocated and should be freed with
   * Glib::list_free() when no longer needed.
   */
  Glib::ListHandle<const CellRenderer*> get_cell_renderers() const;
#endif // GTKMM_DISABLE_DEPRECATED


  /** Background color as a string.
   *
   * @return A PropertyProxy_WriteOnly that allows you to set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_WriteOnly< Glib::ustring > property_background() ;


  /** Background color as a GdkColor.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gdk::Color > property_background_gdk() ;

/** Background color as a GdkColor.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gdk::Color > property_background_gdk() const;

  /** Whether this tag affects the background color.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_background_set() ;

/** Whether this tag affects the background color.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_background_set() const;

  /** The model for cell view.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<TreeModel> > property_model() ;

/** The model for cell view.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<TreeModel> > property_model() const;


};

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::CellView
   */
  Gtk::CellView* wrap(GtkCellView* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_CELLVIEW_H */

