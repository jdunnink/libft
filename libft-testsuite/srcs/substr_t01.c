
#include <string.h>
#include <stdio.h>
#include "libft_tester.h"

int substr_t01()
{
    char *test;
    char *res;

    ///////////////////////////////////////////

    test = "this is test";
    res = ft_substr(test, 8, 4);
    if (strcmp(res, "test") != 0)
    {
        printf("test01 failed! (%s) should be (%s)\n", res, "test");
        return (0);
    }

    ///////////////////////////////////////////

    test = "test";
    res = ft_substr(test, 3, 1);
    if (strcmp(res, "t") != 0)
    {
        printf("test02 failed! (%s) should be (%s)\n", res, "test");
        return (0);
    }

    ///////////////////////////////////////////

    test = "";
    res = ft_substr(test, 0, 0);
    if (strcmp(res, "") != 0)
    {
        printf("test03 failed! (%s) should be (%s)\n", res, "test");
        return (0);
    }

    ///////////////////////////////////////////

    test = NULL;
    res = ft_substr(test, 8, 4);
    if (res != NULL)
    {
        printf("test04 failed! (%s) should be (%s)\n", res, "NULL");
        return (0);
    }

    ///////////////////////////////////////////

    test = "this is test";
    res = ft_substr(test, 0, 400);
    if (strcmp(res, "this is test") != 0)
    {
        printf("test05 failed! (%s) should be (%s)\n", res, "this is test");
        return (0);
    }

    ////////////////////////////////////////////////////

    test = "this is a test for uint_max as start";
    res = ft_substr(test, 4294967295, 4);
    if (strcmp(res, "") != 0)
    {
        printf("test06 failed! (%s) should be (%s)\n", res, "");
        return (0);
    }

    ////////////////////////////////////////////////////

    test = "this is a test for uint_max as maxlen";
    res = ft_substr(test, 9, 4294967295);
    if (strcmp(res, " test for uint_max as maxlen") != 0)
    {
        printf("test07 failed! (%s) should be (%s)\n", res, " test for uint_max as maxlen");
        return (0);
    }

    ////////////////////////////////////////////////////

    test = "this is a test for uint_max as maxlen<this is the target substring>this is a test for uint_max as maxlen\
            this is a test for uint_max as maxlenthis is a test for uint_max as maxlenthis is a test for uint_max as maxlenthis is a test for uint_max as maxlen\
            this is a test for uint_max as maxlenthis is a test for uint_max as maxlenthis is a test for uint_max as maxlenthis is a test for uint_max as maxlen\
            this is a test for uint_max as maxlenthis is a test for uint_max as maxlenthis is a test for uint_max as maxlenthis is a test for uint_max as maxlen\
            this is a test for uint_max as maxlenthis is a test for uint_max as maxlenthis is a test for uint_max as maxlenthis is a test for uint_max as maxlen\
            this is a test for uint_max as maxlenthis is a test for uint_max as maxlenthis is a test for uint_max as maxlen";
    res = ft_substr(test, 37, 30);
    if (strcmp(res, "<this is the target substring>") != 0)
    {
        printf("test08 failed! (%s) should be (%s)\n", res, "<this is the target substring>");
        return (0);
    }

    ////////////////////////////////////////////////////

    test = "this is a test for uint_max as maxlen<this is the target substring>this is a test for uint_max as maxlen\
            this is a test for uint_max as maxlenthis is a test for uint_max as maxlenthis is a test for uint_max as maxlenthis is a test for uint_max as maxlen\
            this is a test for uint_max as maxlenthis is a test for uint_max as maxlenthis is a test for uint_max as maxlenthis is a test for uint_max as maxlen\
            this is a test for uint_max as maxlenthis is a test for uint_max as maxlenthis is a test for uint_max as maxlenthis is a test for uint_max as maxlen\
            this is a test for uint_max as maxlenthis is a test for uint_max as maxlenthis is a test for uint_max as maxlenthis is a test for uint_max as maxlen\
            this is a test for uint_max as maxlenthis is a test for uint_max as maxlenthis is a test for uint_max as maxlen";
    res = ft_substr(test, 0, 4);
    if (strcmp(res, "this") != 0)
    {
        printf("test09 failed! (%s) should be (%s)\n", res, "this");
        return (0);
    }

    ////////////////////////////////////////////////////

    test = (char *)0;

    res = ft_substr(test, 0, 4);
    if (res != NULL)
    {
        printf("test09 failed! (%s) should be (%s)\n", res, "NULL");
        return (0);
    }

    printf("ft_substr test-set01 success!\n");
    return (1);
}