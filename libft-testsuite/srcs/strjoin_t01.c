#include <string.h>
#include <stdio.h>
#include "libft_tester.h"

int strjoin_t01()
{
    char *test1;
    char *test2;
    char *res;

    ///////////////////////////////////////////

    test1 = "this is a tale";
    test2 = " of two cities";
    res = ft_strjoin(test1, test2);
    if (strcmp(res, "this is a tale of two cities") != 0)
    {
        printf("test01 failed! (%s) should be (%s)\n", res, "this is a tale of two cities");
        return (0);
    }

    ///////////////////////////////////////////

    test1 = "t";
    test2 = "o";
    res = ft_strjoin(test1, test2);
    if (strcmp(res, "to") != 0)
    {
        printf("test02 failed! (%s) should be (%s)\n", res, "to");
        return (0);
    }

    ///////////////////////////////////////////

    test1 = "";
    test2 = "";
    res = ft_strjoin(test1, test2);
    if (strcmp(res, "") != 0)
    {
        printf("test03 failed! (%s) should be (%s)\n", res, "");
        return (0);
    }

    ///////////////////////////////////////////

    test1 = "this is a tale";
    test2 = "";
    res = ft_strjoin(test1, test2);
    if (strcmp(res, "this is a tale") != 0)
    {
        printf("test04 failed! (%s) should be (%s)\n", res, "this is a tale");
        return (0);
    }

    ///////////////////////////////////////////

    test1 = "";
    test2 = " of two cities";
    res = ft_strjoin(test1, test2);
    if (strcmp(res, " of two cities") != 0)
    {
        printf("test05 failed! (%s) should be (%s)\n", res, " of two cities");
        return (0);
    }

    ///////////////////////////////////////////

    test1 = NULL;
    test2 = " of two cities";
    res = ft_strjoin(test1, test2);
    if (res != NULL)
    {
        printf("test06 failed! (%s) should be (%s)\n", res, "NULL");
        return (0);
    }

    ///////////////////////////////////////////

    test1 = "this is a tale";
    test2 = NULL;
    res = ft_strjoin(test1, test2);
    if (res != NULL)
    {
        printf("test07 failed! (%s) should be (%s)\n", res, "NULL");
        return (0);
    }

    test1 = NULL;
    test2 = NULL;
    res = ft_strjoin(test1, test2);
    if (res != NULL)
    {
        printf("test08 failed! (%s) should be (%s)\n", res, "NULL");
        return (0);
    }

    printf("ft_strjoin test-set01 success!\n");
    return (1);
}