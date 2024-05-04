#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void world()
{
    printf("start world func\n");
    printf("end of world\n");
}

void hello()
{
    printf("start hello func\n");
    world();
    printf("end of hello\n");
}

int main()
{
    printf("main function\n");
    hello();
    printf("end of main\n");
    return 0;
}

/*
main function
start hello func
start world func
end of world
end of hello
end of main
*/