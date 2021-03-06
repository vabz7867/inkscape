/**
 * @file
 * Group belonging to an SVG drawing element.
 *//*
 * Authors:
 *   Krzysztof Kosiński <tweenk.pl@gmail.com>
 *
 * Copyright (C) 2011 Authors
 * Released under GNU GPL, read the file 'COPYING' for more information
 */

#ifndef SEEN_INKSCAPE_DISPLAY_DRAWING_TEXT_H
#define SEEN_INKSCAPE_DISPLAY_DRAWING_TEXT_H

#include "display/drawing-group.h"
#include "display/nr-style.h"

class SPStyle;
class font_instance;

namespace Inkscape {

class DrawingGlyphs
    : public DrawingItem
{
public:
    DrawingGlyphs(Drawing &drawing);
    ~DrawingGlyphs();

    void setGlyph(font_instance *font, int glyph, Geom::Affine const &trans);

protected:
    unsigned _updateItem(Geom::IntRect const &area, UpdateContext const &ctx,
                                 unsigned flags, unsigned reset);
    virtual DrawingItem *_pickItem(Geom::Point const &p, double delta, unsigned flags);

    font_instance *_font;
    int _glyph;
    Geom::IntRect _pick_bbox;

    friend class DrawingText;
};

class DrawingText
    : public DrawingGroup
{
public:
    DrawingText(Drawing &drawing);
    ~DrawingText();

    void clear();
    void addComponent(font_instance *font, int glyph, Geom::Affine const &trans);
    void setStyle(SPStyle *style);

protected:
    virtual unsigned _updateItem(Geom::IntRect const &area, UpdateContext const &ctx,
                                 unsigned flags, unsigned reset);
    virtual unsigned _renderItem(DrawingContext &ct, Geom::IntRect const &area, unsigned flags,
                                 DrawingItem *stop_at);
    virtual void _clipItem(DrawingContext &ct, Geom::IntRect const &area);
    virtual DrawingItem *_pickItem(Geom::Point const &p, double delta, unsigned flags);
    virtual bool _canClip();

    NRStyle _nrstyle;

    friend class DrawingGlyphs;
};

} // end namespace Inkscape

#endif // !SEEN_INKSCAPE_DISPLAY_DRAWING_ITEM_H

/*
  Local Variables:
  mode:c++
  c-file-style:"stroustrup"
  c-file-offsets:((innamespace . 0)(inline-open . 0)(case-label . +))
  indent-tabs-mode:nil
  fill-column:99
  End:
*/
// vim: filetype=cpp:expandtab:shiftwidth=4:tabstop=8:softtabstop=4:fileencoding=utf-8:textwidth=99 :
