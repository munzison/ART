#include"libOne.h"
#include"BUBBLE_ART.h"
#include"RAIN_ART.h"
void gmain() {
    window(1920, 1080, full);
    hideCursor();
    RAIN_ART rain;
    while (notQuit) {
        rain.perform();
    }
}
