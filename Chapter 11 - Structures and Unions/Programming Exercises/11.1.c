
#include <stdio.h>

struct time_struct {
    int hour, minute, second;
};

int main() {
    struct time_struct time = {16, 40, 51};
    printf("%02d:%02d:%02d\n", time.hour, time.minute, time.second);
    return 0;
}
