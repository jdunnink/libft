#include <string.h>
#include <stdio.h>
#include "libft_tester.h"

static  char test_func1(unsigned i, char c)
{
    if (i % 2 == 0)
        return (' ');
    else
        return (c);
}

int strmapi_t01()
{
    char *test_string;
    char *res;

    //////////////////////////////////////////////

    test_string = "Thisisatest";
    res = ft_strmapi(test_string, &test_func1);
    if (strcmp(res, " h s s t s ") != 0)
    {
        printf("test01 failed! (%s) should be (%s)\n", res, " h s s t s ");
        return (0);
    }

    //////////////////////////////////////////////

    test_string = "";
    res = ft_strmapi(test_string, &test_func1);
    if (strcmp(res, "") != 0)
    {
        printf("test02 failed! (%s) should be (%s)\n", res, "");
        return (0);
    }

    //////////////////////////////////////////////

    test_string = NULL;
    res = ft_strmapi(test_string, &test_func1);
    if (res != NULL)
    {
        printf("test03 failed! (%s) should be (%s)\n", res, "NULL");
        return (0);
    }

    //////////////////////////////////////////////

    test_string = "Thisisatest";
    res = ft_strmapi(test_string, NULL);
    if (res != NULL)
    {
        printf("test04 failed! (%s) should be (%s)\n", res, "NULL");
        return (0);
    }

    printf("ft_strmapi test-set01 success!\n");
    return (1);
}