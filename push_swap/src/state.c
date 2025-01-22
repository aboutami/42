#include "../inc/push_swap.h"
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define RESET   "\033[0m"

int     main()
{
        int makefile_status = 1;      // 1 for integrated, 0 for missing
        int folder_status = 1;        // 1 for integrated, 0 for missing

        printf("Make file: %s%s%s\n",
                makefile_status ? GREEN : RED,
                makefile_status ? "integrated" : "missing",
                RESET);

        printf("Folder structure: %s%s%s\n",
                folder_status ? GREEN : RED,
                folder_status ? "integrated" : "missing",
                RESET);

        return (0);
}
