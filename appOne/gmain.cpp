#include"libOne.h"
#include"BUBBLE.h"
void gmain() {
    window(1920, 1080, full);
    hideCursor();
    BUBBLE bubble;
    while (notQuit) {
        clear();
        bubble.perform();
    }
}
