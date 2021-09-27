#include"libOne.h"
#include"BUBBLE_ART.h"
void gmain() {
    window(1920, 1080, full);
    hideCursor();
    BUBBLE_ART bubble;
    while (notQuit) {
        clear();
        bubble.perform();
    }
}
