#include <stdio.h>

int main(void) {
    short num = 0x0102;
    printf("%04x\n", num);
    char *ch = &num;
    printf("%02x%02x\n", ch[0], ch[1]);

    return 0;
}

