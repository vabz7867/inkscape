
set(ui_SRC
	clipboard.cpp
	control-manager.cpp
	previewholder.cpp
	uxmanager.cpp

	cache/svg_preview_cache.cpp

	tool/control-point-selection.cpp
	tool/control-point.cpp
	tool/curve-drag-point.cpp
	tool/event-utils.cpp
	tool/manipulator.cpp
	tool/modifier-tracker.cpp
	tool/multi-path-manipulator.cpp
	tool/node-tool.cpp
	tool/node.cpp
	tool/path-manipulator.cpp
	tool/selectable-control-point.cpp
	tool/selector.cpp
	tool/transform-handle-set.cpp

	dialog/aboutbox.cpp
	dialog/align-and-distribute.cpp
	dialog/calligraphic-profile-rename.cpp
	dialog/color-item.cpp
	dialog/clonetiler.cpp
	dialog/debug.cpp
	dialog/desktop-tracker.cpp
	dialog/dialog-manager.cpp
	dialog/dialog.cpp
	dialog/dock-behavior.cpp
	dialog/document-metadata.cpp
	dialog/document-properties.cpp
	dialog/export.cpp
	dialog/extension-editor.cpp
	dialog/extensions.cpp
	dialog/filedialog.cpp
	dialog/filedialogimpl-gtkmm.cpp
	dialog/fill-and-stroke.cpp
	dialog/filter-effects-dialog.cpp
	dialog/find.cpp
	dialog/floating-behavior.cpp
	dialog/font-substitution.cpp
	dialog/glyphs.cpp
	dialog/guides.cpp
	dialog/icon-preview.cpp
	dialog/inkscape-preferences.cpp
	dialog/input.cpp
	dialog/layer-properties.cpp
	dialog/layers.cpp
	dialog/livepatheffect-add.cpp
	dialog/livepatheffect-editor.cpp
	dialog/memory.cpp
	dialog/messages.cpp
	dialog/object-attributes.cpp
	dialog/object-properties.cpp
	dialog/ocaldialogs.cpp
	dialog/print-colors-preview-dialog.cpp
	dialog/print.cpp
	dialog/scriptdialog.cpp
	dialog/symbols.cpp
	dialog/xml-tree.cpp
	# dialog/session-player.cpp
	dialog/spellcheck.cpp
	dialog/svg-fonts-dialog.cpp
	dialog/swatches.cpp
	dialog/text-edit.cpp
	dialog/tile.cpp
	dialog/tracedialog.cpp
	dialog/transformation.cpp
	dialog/undo-history.cpp
	# dialog/whiteboard-connect.cpp
	# dialog/whiteboard-sharewithchat.cpp
	# dialog/whiteboard-sharewithuser.cpp

	widget/button.cpp
	widget/color-picker.cpp
	widget/color-preview.cpp
	widget/dock-item.cpp
	widget/dock.cpp
	widget/entity-entry.cpp
	widget/entry.cpp
	widget/filter-effect-chooser.cpp
	widget/frame.cpp
	widget/gimpspinscale.c
	widget/imageicon.cpp
	widget/imagetoggler.cpp
	widget/labelled.cpp
	widget/layer-selector.cpp
	widget/licensor.cpp
	widget/notebook-page.cpp
	widget/object-composite-settings.cpp
	widget/page-sizer.cpp
	widget/panel.cpp
	widget/point.cpp
	widget/preferences-widget.cpp
	widget/random.cpp
	widget/registered-widget.cpp
	widget/registry.cpp
	widget/rendering-options.cpp
	widget/rotateable.cpp
	widget/scalar-unit.cpp
	widget/scalar.cpp
	widget/selected-style.cpp
	widget/spin-scale.cpp
	widget/spin-slider.cpp
	widget/spinbutton.cpp
	widget/style-subject.cpp
	widget/style-swatch.cpp
	widget/text.cpp
	widget/tolerance-slider.cpp
	widget/unit-menu.cpp

	view/view.cpp
	view/view-widget.cpp


	# -------
	# Headers
	clipboard.h
	control-manager.h
	control-types.h
	icon-names.h
	previewable.h
	previewfillable.h
	previewholder.h
	uxmanager.h

	cache/svg_preview_cache.h

	dialog/aboutbox.h
	dialog/align-and-distribute.h
	dialog/behavior.h
	dialog/calligraphic-profile-rename.h
	dialog/color-item.h
	dialog/clonetiler.h
	dialog/debug.h
	dialog/desktop-tracker.h
	dialog/dialog-manager.h
	dialog/dialog.h
	dialog/dock-behavior.h
	dialog/document-metadata.h
	dialog/document-properties.h
	dialog/export.h
	dialog/extension-editor.h
	dialog/extensions.h
	dialog/filedialog.h
	dialog/filedialogimpl-gtkmm.h
	dialog/filedialogimpl-win32.h
	dialog/fill-and-stroke.h
	dialog/filter-effects-dialog.h
	dialog/find.h
	dialog/floating-behavior.h
	dialog/font-substitution.h
	dialog/glyphs.h
	dialog/guides.h
	dialog/icon-preview.h
	dialog/inkscape-preferences.h
	dialog/input.h
	dialog/layer-properties.h
	dialog/layers.h
	dialog/livepatheffect-add.h
	dialog/livepatheffect-editor.h
	dialog/memory.h
	dialog/messages.h
	dialog/object-attributes.h
	dialog/object-properties.h
	dialog/ocaldialogs.h
	dialog/panel-dialog.h
	dialog/print-colors-preview-dialog.h
	dialog/print.h
	dialog/scriptdialog.h
	dialog/spellcheck.h
	dialog/svg-fonts-dialog.h
	dialog/swatches.h
	dialog/symbols.h
	dialog/text-edit.h
	dialog/tile.h
	dialog/tracedialog.h
	dialog/transformation.h
	dialog/undo-history.h
	dialog/xml-tree.h

	tool/commit-events.h
	tool/control-point-selection.h
	tool/control-point.h
	tool/curve-drag-point.h
	tool/event-utils.h
	tool/manipulator.h
	tool/modifier-tracker.h
	tool/multi-path-manipulator.h
	tool/node-tool.h
	tool/node-types.h
	tool/node.h
	tool/path-manipulator.h
	tool/selectable-control-point.h
	tool/selector.h
	tool/shape-record.h
	tool/transform-handle-set.h

	widget/attr-widget.h
	widget/button.h
	widget/color-picker.h
	widget/color-preview.h
	widget/combo-enums.h
	widget/dock-item.h
	widget/dock.h
	widget/entity-entry.h
	widget/entry.h
	widget/filter-effect-chooser.h
	widget/frame.h
	widget/gimpspinscale.h
	widget/imageicon.h
	widget/imagetoggler.h
	widget/labelled.h
	widget/layer-selector.h
	widget/licensor.h
	widget/notebook-page.h
	widget/object-composite-settings.h
	widget/page-sizer.h
	widget/panel.h
	widget/point.h
	widget/preferences-widget.h
	widget/random.h
	widget/registered-enums.h
	widget/registered-widget.h
	widget/registry.h
	widget/rendering-options.h
	widget/rotateable.h
	widget/scalar-unit.h
	widget/scalar.h
	widget/selected-style.h
	widget/spin-scale.h
	widget/spin-slider.h
	widget/spinbutton.h
	widget/style-subject.h
	widget/style-swatch.h
	widget/text.h
	widget/tolerance-slider.h
	widget/unit-menu.h

	view/edit-widget-interface.h
	view/view-widget.h
	view/view.h
)

if(WIN32)
	list(APPEND ui_SRC
		dialog/filedialogimpl-win32.cpp
	)
endif()

# add_inkscape_lib(ui_LIB "${ui_SRC}")
add_inkscape_source("${ui_SRC}")
