#include <string.h>

int titleToNumber(char* columnTitle) {
    int ans = 0;
    int len = strlen(columnTitle);

    for (int i = 0; i < len; i++) {
        int current_val = columnTitle[i] -64;
        ans = ans * 26 + current_val;
    }

    return (int)ans;
}