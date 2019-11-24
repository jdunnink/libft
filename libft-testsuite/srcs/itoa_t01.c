#include <string.h>
#include <stdio.h>
#include "libft_tester.h"

int itoa_t01()
{
    int test;
    char *res;

    ///////////////////////////////////////////

    test = 0;
    res = ft_itoa(test);
    if (strcmp(res, "0") != 0)
    {
        printf("test01 failed! (%s) should be (%s)\n", res, "0");
        return (0);
    }

    ///////////////////////////////////////////

    test = 2147483647;
    res = ft_itoa(test);
    if (strcmp(res, "2147483647") != 0)
    {
        printf("test02 failed! (%s) should be (%s)\n", res, "2147483647");
        return (0);
    }

    ///////////////////////////////////////////

    test = -2147483648;
    res = ft_itoa(test);
    if (strcmp(res, "-2147483648") != 0)
    {
        printf("test03 failed! (%s) should be (%s)\n", res, "-2147483648");
        return (0);
    }

    ///////////////////////////////////////////

    test = 4564564;
    res = ft_itoa(test);
    if (strcmp(res, "4564564") != 0)
    {
        printf("test04 failed! (%s) should be (%s)\n", res, "4564564");
        return (0);
    }

    printf("ft_itoa test-set01 success!\n");
    return (1);
}