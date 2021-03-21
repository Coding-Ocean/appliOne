#include"libOne.h"
void gmain() {
    window(800, 800);
    clear(220);
    float v = 0;
    while (notQuit)
    {
        v += 10;
        if (v>1600) {
            fill(220,220,220,5);
            rect(0, 0, width, height);
            if (v > 3200) {
                clear(220);
                v = 0;
            }
        }
        circle(v, height/2, v);
    }
}