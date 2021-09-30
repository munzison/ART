#include"libOne.h"
#include"BUBBLE_ART.h"
#include"RAIN_ART.h"
#include"SQUARE_ART.h"
void gmain() {
    window(1920, 1080, full);
    hideCursor();
    SQUARE_ART square;
    while (notQuit) {
        square.perform();
    }
}
