#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main() {
        void* init_adds=sbrk(0);
        void* p=sbrk(4);
printf("After plus 4 : %p",sbrk(0));
printf("\n Initial adress  : %p",init_adds);
return 0;
}
