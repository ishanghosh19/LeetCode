#include <math.h>
int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
    int area1,area2;
    area1=(ax2-ax1)*(ay2-ay1);
    area2=(bx2-bx1)*(by2-by1);
    int overlapWidth = fmax(0, fmin(ax2, bx2) - fmax(ax1, bx1));
    int overlapHeight = fmax(0, fmin(ay2, by2) - fmax(ay1, by1));
    int area3 = overlapWidth * overlapHeight;
    return area1+area2-area3;
}