#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define source(x)  int fd = open(x, O_CREAT | O_TRUNC | O_RDWR);
#define level int i = 5;
#define Q(x)char*s=#x;x
Q( int main()
{
    level
    char target[] = "Sully_X.c";
    target[6] = i - 1 + '0';
    char exec[] = "Sully_X";
    exec[6] = i  - 1 + '0';
    source(target)
    dprintf(fd, "#include <sys/types.h>\n#include <sys/stat.h>\n#include <fcntl.h>\n#include <stdio.h>\n#include <unistd.h>\n#include <stdlib.h>\n#define source(x)  int fd = open(x, O_CREAT | O_TRUNC | O_RDWR);\n#define level int i = %d;\n#define Q(x) char*s=#x;x\nQ(%s)", i - 1, s);
    close(fd);
    char cmd[255] = {0};
    sprintf(cmd, "gcc -Wall -Wextra -Werror %s -o %s", target, exec);
    system(cmd);
     if (i - 1 == 0){return 0;}
    sprintf(cmd, "./%s", exec);
    system(cmd);
    return 0;
})

