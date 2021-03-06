#ifndef __SNIS_BUTTON_H__
#define __SNIS_BUTTON_H__

#ifdef DEFINE_BUTTON_GLOBALS
#define GLOBAL
#else
#define GLOBAL extern
#endif

typedef void (*button_function)(void *cookie);

struct button;

GLOBAL struct button *snis_button_init(int x, int y, int width, int height, char *label,
			int color, int font, button_function bf, void *cookie);

GLOBAL void snis_button_draw(struct button *b);

GLOBAL int snis_button_button_press(struct button *b, int x, int y);
GLOBAL int snis_button_trigger_button(struct button *b);
GLOBAL void snis_button_set_color(struct button *b, int color);
GLOBAL int snis_button_get_color(struct button *b);
GLOBAL void snis_button_set_checkbox_function(struct button *b,
		int (*checkbox_function)(void *), void *cookie);
GLOBAL void snis_button_set_label(struct button *b, char *label);
GLOBAL int snis_button_get_x(struct button *b);
GLOBAL int snis_button_get_y(struct button *b);
GLOBAL int snis_button_get_width(struct button *b);
GLOBAL int snis_button_get_height(struct button *b);
GLOBAL void snis_button_set_position(struct button *b, int x, int y);
GLOBAL void snis_button_set_sound(struct button *b, int sound);
GLOBAL void snis_button_set_default_sound(int sound);
GLOBAL int snis_button_inside(struct button *b, int x, int y);
GLOBAL void snis_button_disable(struct button *b);
GLOBAL void snis_button_enable(struct button *b);
GLOBAL void snis_button_set_disabled_color(struct button *b, int color);
GLOBAL int snis_button_get_disabled_color(struct button *b);
GLOBAL void snis_button_set_cookie(struct button *b, void *cookie);
GLOBAL int snis_button_generic_checkbox_function(void *x);
#undef GLOBAL
#endif
