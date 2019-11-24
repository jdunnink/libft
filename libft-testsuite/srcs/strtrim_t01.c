#include <string.h>
#include <stdio.h>
#include "libft_tester.h"

int strtrim_t01()
{
    char *test1;
    char *test2;
    char *res;

    ///////////////////////////////////////////

    test1 = "          lets trim something                  ";
    test2 = " ";
    res = ft_strtrim(test1, test2);
    if (strcmp(res, "lets trim something") != 0)
    {
        printf("test01 failed! (%s) should be (%s)\n", res, "lets trim something");
        return (0);
    }

    ///////////////////////////////////////////

    test1 = "q          lets trim something                  q";
    test2 = " q";
    res = ft_strtrim(test1, test2);
    if (strcmp(res, "lets trim something") != 0)
    {
        printf("test02 failed! (%s) should be (%s)\n", res, "lets trim something");
        return (0);
    }

    ///////////////////////////////////////////

    test1 = "vv          l                  vv";
    test2 = " v";
    res = ft_strtrim(test1, test2);
    if (strcmp(res, "l") != 0)
    {
        printf("test03 failed! (%s) should be (%s)\n", res, "l");
        return (0);
    }

    ///////////////////////////////////////////

    test1 = "i          lets trim something                  i";
    test2 = " i";
    res = ft_strtrim(test1, test2);
    if (strcmp(res, "lets trim something") != 0)
    {
        printf("test04 failed! (%s) should be (%s)\n", res, "lets trim something");
        return (0);
    }

    ///////////////////////////////////////////

    test1 = " ";
    test2 = " ";
    res = ft_strtrim(test1, test2);
    if (strcmp(res, "") != 0)
    {
        printf("test05 failed! (%s) should be (%s)\n", res, "");
        return (0);
    }

    ///////////////////////////////////////////

    test1 = "-  -  -  -  -  lets trim something-   -    -   -   -   -  -";
    test2 = " -";
    res = ft_strtrim(test1, test2);
    if (strcmp(res, "lets trim something") != 0)
    {
        printf("test06 failed! (%s) should be (%s)\n", res, "lets trim something");
        return (0);
    }

    ///////////////////////////////////////////

    test1 = "-+ +-==  ==-+++        lets trim==-+++ something                  ==-+++";
    test2 = " -+=";
    res = ft_strtrim(test1, test2);
    if (strcmp(res, "lets trim==-+++ something") != 0)
    {
        printf("test07 failed! (%s) should be (%s)\n", res, "lets trim==-+++ something");
        return (0);
    }

    ///////////////////////////////////////////

    test1 = "                                 ";
    test2 = " ";
    res = ft_strtrim(test1, test2);
    if (strcmp(res, "") != 0)
    {
        printf("test08 failed! (%s) should be (%s)\n", res, "");
        return (0);
    }

    ///////////////////////////////////////////

    test1 = "";
    test2 = "";
    res = ft_strtrim(test1, test2);
    if (strcmp(res, "") != 0)
    {
        printf("test09 failed! (%s) should be (%s)\n", res, "");
        return (0);
    }

    ///////////////////////////////////////////

    test1 = "                                 ";
    test2 = NULL;
    res = ft_strtrim(test1, test2);
    if (res != NULL)
    {
        printf("test10 failed! (%s) should be (%s)\n", res, "NULL");
        return (0);
    }

    ///////////////////////////////////////////

    test1 = NULL;
    test2 = "disughdksjgkdsjgsd";
    res = ft_strtrim(test1, test2);
    if (res != NULL)
    {
        printf("test11 failed! (%s) should be (%s)\n", res, "NULL");
        return (0);
    }

    ///////////////////////////////////////////

    test1 = "-+ +-==  ==-+++        lets trim==-+++ something                  ==-+++";
    test2 = " -+= -+= -+=";
    res = ft_strtrim(test1, test2);
    if (strcmp(res, "lets trim==-+++ something") != 0)
    {
        printf("test12 failed! (%s) should be (%s)\n", res, "lets trim==-+++ something");
        return (0);
    }

    printf("ft_strtrim test-set01 success!\n");
    return (1);
}