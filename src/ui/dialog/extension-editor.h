/**
 * \brief Extension editor
 *
 * Authors:
 *   Bryce W. Harrington <bryce@bryceharrington.org>
 *   Ted Gould <ted@gould.cx>
 *
 * Copyright (C) 2004-2006 Authors
 *
 * Released under GNU GPL.  Read the file 'COPYING' for more information.
 */

#ifndef INKSCAPE_UI_DIALOG_EXTENSION_EDITOR_H
#define INKSCAPE_UI_DIALOG_EXTENSION_EDITOR_H

#include "dialog.h"

#include <glibmm/i18n.h>

#include <gtkmm/treestore.h>
#include <gtkmm/treeview.h>
#include <gtkmm/label.h>
#include <gtkmm/frame.h>

#include "extension/extension.h"

namespace Inkscape {
namespace UI {
namespace Dialog {

class ExtensionEditor : public Dialog {
public:
    ExtensionEditor();
    virtual ~ExtensionEditor();

    static ExtensionEditor *create() { return new ExtensionEditor(); }

    static void show_help (gchar const * extension_id);

protected:
    Gtk::Frame _page_frame;
    Gtk::Label _page_title;
    Gtk::TreeView _page_list;  
    Glib::RefPtr<Gtk::TreeStore> _page_list_model;

    //Pagelist model columns:
    class PageListModelColumns : public Gtk::TreeModel::ColumnRecord {
    public:
        PageListModelColumns() {
            Gtk::TreeModelColumnRecord::add(_col_name);
            Gtk::TreeModelColumnRecord::add(_col_page);
            Gtk::TreeModelColumnRecord::add(_col_id);
        }
        Gtk::TreeModelColumn<Glib::ustring> _col_name;
        Gtk::TreeModelColumn<Glib::ustring> _col_id;
        Gtk::TreeModelColumn<Gtk::Widget *> _col_page;
    };
    PageListModelColumns _page_list_columns;

    Gtk::TreeModel::Path _path_tools;
    Gtk::TreeModel::Path _path_shapes;

private:
    ExtensionEditor(ExtensionEditor const &d);
    ExtensionEditor& operator=(ExtensionEditor const &d);

    void on_pagelist_selection_changed(void);
    static void dbfunc (Inkscape::Extension::Extension * in_plug, gpointer in_data);
    Gtk::TreeModel::iterator add_extension (Inkscape::Extension::Extension * ext);
};

} // namespace Dialog
} // namespace UI
} // namespace Inkscape

#endif // INKSCAPE_UI_DIALOG_EXTENSION_EDITOR_H

/*
  Local Variables:
  mode:c++
  c-file-style:"stroustrup"
  c-file-offsets:((innamespace . 0)(inline-open . 0)(case-label . +))
  indent-tabs-mode:nil
  fill-column:99
  End:
*/
// vim: filetype=cpp:expandtab:shiftwidth=4:tabstop=8:softtabstop=4:encoding=utf-8:textwidth=99 :
