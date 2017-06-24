#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

/*
    This program will print its own source when run.
*/

#define source  int fd = open("Grace_kid.c", O_CREAT | O_TRUNC | O_RDWR);
#define Q(x)char*s=#x;x
#define FT(x) Q( int main(){ source dprintf(fd, "#include <sys/types.h>\n#include <sys/stat.h>\n#define source  int fd = open(%cGrace_kid.c%c, O_CREAT | O_TRUNC | O_RDWR);\n#define Q(x) char*s=#x;x\n#define FT(x) Q(%s)",34, 34 ,s);})

FT(xxxxxxxx)
