#include <stdio.h>
#define p putchar

int main() {
    for(int i=123; i<1000; i++)
        if(i%10>i/10%10&&i/10%10>i/100&&i%9==0)
            p(i/100+48),p(i/10%10+48),p(i%10+48),p(i<999?", ":"\n");
    return 0;
}

