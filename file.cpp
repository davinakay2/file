#include <stdio.h>
#include <string.h>
int main()
{
    FILE *ptr_file;
    char n[100];
    ptr_file = fopen("newfile.txt", "w");

    if (!ptr_file)
    {
        return 1;
    }
    fgets(n, sizeof(n), stdin);
    fprintf(ptr_file,"%s", n);
    fclose(ptr_file);

    return 0;
}