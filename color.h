#ifndef COLOR_H
#define COLOR_H

#ifdef __unix__

#define BLACK "\033[0;30m"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define MAGENTA "\033[0;35m"
#define CYAN "\033[0;36m"
#define WHITE "\033[0;37m"

#define RESET "\033[0m"

void color_printf(const char text[], const char color[]);

#endif

#ifdef _WIN32

#define BLACK "\033[0;30m"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define MAGENTA "\033[0;35m"
#define CYAN "\033[0;36m"
#define WHITE "\033[0;37m"

#define RESET "\033[0m"

void color_printf(const char text[], const char color[]);

#endif

#endif
