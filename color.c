#include "color.h"
#include <stdio.h>

void color_printf(const char text[], const char color[]){
    // В конце это сброс
    printf("%s%s%s", color, text, RESET);
}

