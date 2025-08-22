#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Line
    setcolor(RED);
    line(100, 100, 300, 100);

    // Circle
    setcolor(GREEN);
    circle(200, 200, 50);

    // Ellipse
    setcolor(BLUE);
    ellipse(400, 300, 0, 360, 100, 50);

    getch();
    closegraph();
    return 0;
}
