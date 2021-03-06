#ifndef SEEN_SP_MEASURING_CONTEXT_H
#define SEEN_SP_MEASURING_CONTEXT_H

/*
 * Our fine measuring tool
 *
 * Authors:
 *   Felipe Correa da Silva Sanches <juca@members.fsf.org>
 *
 * Copyright (C) 2011 Authors
 *
 * Released under GNU GPL, read the file 'COPYING' for more information
 */

#include "event-context.h"

#define SP_TYPE_MEASURE_CONTEXT (sp_measure_context_get_type())
#define SP_MEASURE_CONTEXT(obj) (G_TYPE_CHECK_INSTANCE_CAST((obj), SP_TYPE_MEASURE_CONTEXT, SPMeasureContext))
#define SP_IS_MEASURE_CONTEXT(obj) (G_TYPE_CHECK_INSTANCE_TYPE((obj), SP_TYPE_MEASURE_CONTEXT))

class SPMeasureContext;
class SPMeasureContextClass;

struct SPMeasureContext {
	SPEventContext event_context;
	SPCanvasItem *grabbed;
};

struct SPMeasureContextClass {
	SPEventContextClass parent_class;
};

GType sp_measure_context_get_type(void);

#endif // SEEN_SP_MEASURING_CONTEXT_H
