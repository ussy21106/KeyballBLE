#include <zmk/keymap.h>

int zmk_keymap_highest_active_layer(void)
{
    return zmk_keymap_highest_layer_active();
}
