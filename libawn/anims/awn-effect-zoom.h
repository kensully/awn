/*
 *  Copyright (C) 2007 Michal Hruby <michal.mhr@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */


#ifndef __AWN_EFFECT_ZOOM_H__
#define __AWN_EFFECT_ZOOM_H__

#include "awn-effects-shared.h"

gboolean zoom_effect(AwnEffectsAnimation * anim);
gboolean zoom_attention_effect(AwnEffectsAnimation * anim);
gboolean zoom_opening_effect(AwnEffectsAnimation * anim);
gboolean zoom_closing_effect(AwnEffectsAnimation * anim);
gboolean zoom_effect_finalize(AwnEffectsAnimation * anim);

#endif