
#ifndef __INK_MAIN_CMD_LINE_ACTIONS_H__
#define __INK_MAIN_CMD_LINE_ACTIONS_H__

/** \file
 * Small actions that can be queued at the command line
 */

/*
 * Authors:
 *   Ted Gould <ted@gould.cx>
 *
 * Copyright (C) 2007 Authors
 *
 * Released under GNU GPL v2.x, read the file 'COPYING' for more information
 */

#include <glib.h>

namespace Inkscape {

class CmdLineAction {
    bool _isVerb;
    gchar * _arg;

    static std::list <CmdLineAction *> _list;

public:
    CmdLineAction (bool isVerb, gchar const * arg);
    virtual ~CmdLineAction ();

    void doIt (Inkscape::UI::View::View * view);
    static void doList (Inkscape::UI::View::View * view);
    static bool idle (void);
};

} // Inkscape



#endif /* __INK_MAIN_CMD_LINE_ACTIONS_H__ */

/*
  Local Variables:
  mode:c++
  c-file-style:"stroustrup"
  c-file-offsets:((innamespace . 0)(inline-open . 0)(case-label . +))
  indent-tabs-mode:nil
  fill-column:99
  End:
*/
// vim: filetype=cpp:expandtab:shiftwidth=4:tabstop=8:softtabstop=4 :
