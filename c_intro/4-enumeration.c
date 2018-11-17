
#include <stdio.h>

int main(){
    enum WEEK {
        MON=1, TUE, WED, THU, FRI, SAT, SUN
    } day;

    day = TUE;

    printf("%d", day);

    return 0;
}
