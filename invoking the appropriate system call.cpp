#include <stdio.h>
#include <unistd.h>
#include <process.h> 

int main() {
    printf("Process Id: %d\n", getpid());
    printf("Parent Process Id: %d\n", getppid()); // May not work on Windows
    return 0;
}

