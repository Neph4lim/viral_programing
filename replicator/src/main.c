#include <stdio.h>

void calling()
{
    const char *sources[] =
    {
"#include <stdio.h>",
"",
"void calling()",
"{",
"   const char *sources[] =",
"   {",
"   };",
"   for (int i = 0; i < 6; i++)",
"   {",
"       puts(sources[i]);",
"   }",
"   for (int i = 0; i < 35; i++)",
"   {",
"       putchar(34);",
"       fputs(sources[i], stdout);",
"       putchar(34);",
"       putchar(44);",
"       putchar(10);",
"   }",
"   for (int i = 6; i < 35; i++)",
"   {",
"       puts(sources[i]);",
"   }",
"}",
"/*",
"   This program will print its own source when run.",
"*/",
"int main()",
"{",
"   /*",
"       This program will print its own source when run.",
"   */",
"   calling();",
"   return 0;",
"}",
    };
    for (int i = 0; i < 6; i++)
    {
         puts(sources[i]);
    }
    for (int i = 0; i < 35; i++)
    {
        putchar(34);
        fputs(sources[i], stdout);
        putchar(34);
        putchar(44);
        putchar(10);
    }
    for (int i = 6; i < 35; i++)
    {
        puts(sources[i]);
    }
}
/*
    This program will print its own source when run.
*/
int main()
{
    /*
        This program will print its own source when run.
    */
    calling();
    return 0;
}
