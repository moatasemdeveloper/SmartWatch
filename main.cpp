
#include "Led.h"
int main(void)
{
        LED ledblink;

        while (1)
        {
                ledblink.LED_toggle();
        }
        return 0;
}