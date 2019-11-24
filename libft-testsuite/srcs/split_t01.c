#include <string.h>
#include <stdio.h>
#include "libft_tester.h"

int split_t01()
{
    char *test_string;
    char split_char;
    char **res_array;

    ///////////////////////////////////////////

    test_string = "this is a test of ft_split";
    split_char = ' ';

    res_array = ft_split(test_string, split_char);
    while (*res_array != NULL)
    {
        printf("%s\n", *res_array);
        res_array = res_array + 1;
    }

    ///////////////////////////////////////////

    test_string = NULL;
    split_char = ' ';

    res_array = ft_split(test_string, split_char);
    while (*res_array != NULL)
    {
        printf("%s\n", *res_array);
        res_array = res_array + 1;
    }

    ///////////////////////////////////////////

    test_string = "this is a test of ft_split";
    split_char = 0;

    res_array = ft_split(test_string, split_char);
    while (*res_array != NULL)
    {
        printf("%s\n", *res_array);
        res_array = res_array + 1;
    }
    
    
    printf("ft_split test-set01 success!\n");
    return (1);
}