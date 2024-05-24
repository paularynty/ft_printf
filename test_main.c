/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prynty <prynty@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 20:18:24 by prynty            #+#    #+#             */
/*   Updated: 2024/05/24 13:36:38 by prynty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

void	intro()
{
	printf("\033[1;32m\n✨🙌✨🙌✨Welcome to this ft_printf test file!✨🙌✨🙌✨\033[0m\n\n");
}


void	test_char()
{
	int len1, len2;
	printf("Character: \n");
	len1 = ft_printf("ft_printf:     %c %c\n", 0, 'a');
	len2 = printf("printf:        %c %c\n", 0, 'a');
	printf("ft_printf len: %d\n", len1);
	printf("printf len:    %d\n\n", len2);
}

void	test_string()
{
	int len1, len2;
	printf("String: \n");
	len1 = ft_printf("ft_printf:     %s\n", "Hello, World!");
	len2 = printf("printf:        %s\n", "Hello, World!");
	printf("ft_printf len: %d\n", len1);
	printf("printf len:    %d\n\n", len2);
}

void	test_pointer()
{
	int a = 42;
	int len1, len2;
	printf("Pointer: \n");
	len1 = ft_printf("ft_printf:     %p\n", (void *)&a);
	len2 = printf("printf:        %p\n", (void *)&a);
	printf("ft_printf len: %d\n", len1);
	printf("printf len:    %d\n\n", len2);
}

void	test_null()
{
	int	b = 0;
	int	len1, len2;
	printf("Null: \n");
	len1 = ft_printf("ft_printf:     %p %p\n", 0, 0);
	len2 = printf("printf:        %p %p\n", 0, 0);
	printf("ft_printf len: %d\n", len1);
	printf("printf len:    %d\n\n", len2);
}

void	test_decimal()
{
	int len1, len2;
	printf("Decimal: \n");
	len1 = ft_printf("ft_printf:     %d\n", -123);
	len2 = printf("printf:        %d\n", -123);
	printf("ft_printf len: %d\n", len1);
	printf("printf len:    %d\n\n", len2);
}

void	test_integer()
{
	int len1, len2;
	printf("Integer: \n");
	len1 = ft_printf("ft_printf:     %i\n", -45600000);
	len2 = printf("printf:        %i\n", -4560000000);
	printf("ft_printf len: %d\n", len1);
	printf("printf len:    %d\n\n", len2);
}

void	test_unsigned()
{
	int len1, len2;
	printf("Unsigned: \n");
	len1 = ft_printf("ft_printf:     %u\n", -1234567890);
	len2 = printf("printf:        %u\n", -1234567890);
	printf("ft_printf len: %d\n", len1);
	printf("printf len:    %d\n\n", len2);
}

void	test_hex_lowercase()
{
	int len1, len2;
	printf("Hex (lowercase): \n");
	len1 = ft_printf("ft_printf:     %x\n", 0xabcdef);
	len2 = printf("printf:        %x\n", 0xabcdef);
	printf("ft_printf len: %d\n", len1);
	printf("printf len:    %d\n\n", len2);
}

void	test_hex_uppercase()
{
	int len1, len2;
	printf("Hex (uppercase): \n");
	len1 = ft_printf("ft_printf:     %X\n", 0xABCDEF);
	len2 = printf("printf:        %X\n", 0xABCDEF);
	printf("ft_printf len: %d\n", len1);
	printf("printf len:    %d\n\n", len2);
}

void	test_percent()
{
	int len1, len2;
	printf("Percent: \n");
	len1 = ft_printf("ft_printf:     %%\n");
	len2 = printf("printf:        %%\n");
	printf("ft_printf len: %d\n", len1);
	printf("printf len:    %d\n\n", len2);
}

void	test_empty_string()
{
	int len1, len2;
	printf("Empty string: \n");
	len1 = ft_printf("ft_printf:     %s\n", "");
	len2 = printf("printf:        %s\n", "");
	printf("ft_printf len: %d\n", len1);
	printf("printf len:    %d\n\n", len2);
}

void	test_null_string()
{
	int len1, len2;
	printf("Null string: \n");
	len1 = ft_printf("ft_printf:     %s\n", (char *)NULL);
	len2 = printf("printf:        %s\n", (char *)NULL);
	printf("ft_printf len: %d\n", len1);
	printf("printf len:    %d\n\n", len2);
}

void	test_large_unsigned()
{
	int len1, len2;
	printf("Large unsigned: \n");
	len1 = ft_printf("ft_printf:     %u\n", 4294967295u);
	len2 = printf("printf:        %u\n", 4294967295u);
	printf("ft_printf len: %d\n", len1);
	printf("printf len:    %d\n\n", len2);
}

void	test_large_hex()
{
	int len1, len2;
	printf("Large hex: \n");
	len1 = ft_printf("ft_printf:     %x\n", 0xFFFFFFFF);
	len2 = printf("printf:        %x\n", 0xFFFFFFFF);
	printf("ft_printf len: %d\n", len1);
	printf("printf len:    %d\n\n", len2);
}

void	test_mixed()
{
	int a = 42;
	int len1, len2;
	printf("Mix: \n");
	len1 = ft_printf("ft_printf:     %d, %s, %c, %p\n", 123, "test", 'A', (void *)&a);
	len2 = printf("printf:        %d, %s, %c, %p\n", 123, "test", 'A', (void *)&a);
	printf("ft_printf len: %d\n", len1);
	printf("printf len:    %d\n\n", len2);
}

void	test_no_format_specifiers()
{
	int len1, len2;
	printf("No format specifiers: \n");
	len1 = ft_printf("ft_printf:     Hello, World!\n");
	len2 = printf("printf:        Hello, World!\n");
	printf("ft_printf len: %d\n", len1);
	printf("printf len:    %d\n\n", len2);
}

void	test_only_format_specifiers()
{
	int a = 42;
	int len1, len2;
	printf("Only format specifiers: \n");
	len1 = ft_printf("ft_printf:     %d %s %c %p\n", 123, "test", 'A', (void *)&a);
	len2 = printf("printf:        %d %s %c %p\n", 123, "test", 'A', (void *)&a);
	printf("ft_printf len: %d\n", len1);
	printf("printf len:    %d\n\n", len2);
}

void	test_multiple_format_specifiers()
{
	int a = 42;
	int len1, len2;
	printf("Multiple format specifiers: \n");
	len1 = ft_printf("ft_printf:     %d %s %c %p %d %s %c %p\n", 123, "test", 'A', (void *)&a, 456, "test", 'B', (void *)&a);
	len2 = printf("printf:        %d %s %c %p %d %s %c %p\n", 123, "test", 'A', (void *)&a, 456, "test", 'B', (void *)&a);
	printf("ft_printf len: %d\n", len1);
	printf("printf len:    %d\n\n", len2);
}

void	test_ending_percent()
{
	int len1, len2;
	printf("Ending with one %% character: \n");
	len1 = ft_printf("ft_printf:     Hello World!%");
	printf("\n");
	len2 = printf("printf:        Hello World!%");
	printf("\n");
	printf("ft_printf len: %d\n", len1);
	printf("printf len:    %d\n\n", len2);
}

void	test_ending_percent_multiple()
{
	int len1, len2;
	printf("Ending with multiple %% characters:\n");
	len1 = ft_printf("ft_printf:     Hello World!%%");
	printf("\n");
	len2 = printf("printf:        Hello World!%%");
	printf("\n");
	printf("ft_printf len: %d\n", len1);
	printf("printf len:    %d\n\n", len2);
}

void test_own()
{
	int a = 42;
	int len1, len2;
	printf("Multiple format specifiers with no spaces in between: \n");
	len1 = ft_printf("ft_printf:     %d%d%s%s%c%c%p%p\n", 123, 123, "test", "test", 'A', 'B', (void *)&a, (void *)&a);
	len2 = printf("printf:        %d%d%s%s%c%c%p%p\n", 123, 123, "test", "test", 'A', 'B', (void *)&a, (void *)&a);
	printf("ft_printf len: %d\n", len1);
	printf("printf len:    %d\n\n", len2);
}

void	outro()
{
	printf("\033[1;32m✨👋✨👋✨Thank you for using this ft_printf test file!✨👋✨👋✨\n\n");
}

int	main(void)
{
	intro();
	test_char();
	test_string();
	test_pointer();
	test_null();
	test_decimal();
	test_integer();
	test_unsigned();
	test_hex_lowercase();
	test_hex_uppercase();
	test_percent();
	test_empty_string();
	test_null_string();
	test_large_unsigned();
	test_large_hex();
	test_mixed();
	test_no_format_specifiers();
	test_only_format_specifiers();
	test_multiple_format_specifiers();
	test_ending_percent();
	test_ending_percent_multiple();
	test_own();
	outro ();
    return (0);
}
