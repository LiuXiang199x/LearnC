#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
        int result = 0;

        while (argc-- != 1)
        {
                result += atoi(argv[argc]);
        }

        printf("sum = %d\n", result);

        return 0;
}
