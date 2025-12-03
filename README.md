# libcolor
A small and simple library for writing colored text in Unix/Windows Bash.
# USE
Example code 
```c
#include "color.h"

int main(void){
    color_printf("Error\n", RED);

    color_printf("Yes, configure upload!\n", GREEN);

    color_printf("40%__[#########       ]\n", BLACK);
    color_printf("100%_[################]\n", BLACK);
    return 0;
}
```
Support colors:
--------
|BLACK  |
|RED    |
|GREEN  |
|YELLOW |
|BLUE   |
|MAGENTA|
|CYAN   |
|WHITE  |
--------
