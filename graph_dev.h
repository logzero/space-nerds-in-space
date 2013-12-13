/*
	Copyright (C) 2013 Jeremy Van Grinsven
	Author: Jeremy Van Grinsven

	This file is part of Spacenerds In Space.

	Spacenerds in Space is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	Spacenerds in Space is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with Spacenerds in Space; if not, write to the Free Software
	Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef INCLUDE_graph_device_H
#define INCLUDE_graph_device_H

struct GdkDrawable;
struct GdkGC;
struct GdkColor;
struct mesh;
struct entity_context;
struct entity;
union vec3;
struct mat44;
struct mat33;

extern int graph_dev_setup();
extern void graph_dev_set_context(GdkDrawable *drawable, GdkGC *gc);
extern void graph_dev_set_color(GdkColor *c, float a);
extern void graph_dev_set_screen_size(int width, int height);
extern void graph_dev_set_extent_scale(float x_scale, float y_scale);
extern void graph_dev_set_3d_viewport(int x_offset, int y_offset, int width, int height);

extern void graph_dev_draw_entity(struct entity_context *cx, struct entity *e, union vec3 *eye_light_pos,
	const struct mat44 *mat_mvp, const struct mat44 *mat_mv, const struct mat33 *mat_normal);

extern void graph_dev_draw_line(float x1, float y1, float x2, float y2);
extern void graph_dev_draw_rectangle(gboolean filled, float x, float y, float width, float height);
extern void graph_dev_draw_point(float x, float y);
extern void graph_dev_draw_arc(gboolean filled, float x, float y, float width, float height,
	float angle1, float angle2);

#endif

