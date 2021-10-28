#include <stdio.h>
#include <unistd.h>

void main() {
 
printf("Parent Process ID = %d and Child Process ID = %d\n", getppid(),getpid()); 
 
  }
