/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trabarij <marvin@42.fr>                    +#+ +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 17:23:07 by trabarij          #+#    #+#             */
/*   Updated: 2024/03/16 17:23:07 by trabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

#define MAX_STRINGS 20
#define MAX_LENGTH 200

void compare_and_print(const char *function_name, int input, int result1, int result2)
{
    if ((result1 == result2))
    {
        printf("Test %d - %s: \033[0;32m [OK] \033[0m\n", input, function_name); // Green OK
    }
    else
        printf("Test %d - %s: \033[0;31m [KO] \033[0m\n", input, function_name);
    printf("Expected output : %i \n", result1);
    printf("Output : %i \n", result2);
    printf("-------------------\n");
}

void str_compare_and_print(const char *function_name, int input, char *result1, char *result2)
{
    if (strcmp(result1, result2) == 0)
        printf("Test %d - %s: \033[0;32m [OK] \033[0m\n", input, function_name); // Green OK
    else
    {
        printf("Test %d - %s: \033[0;31m [KO] \033[0m\n", input, function_name);
    }
    printf("Expected output : %s \n", result1);
    printf("Output : %s \n", result2);
    printf("-------------------\n");
}

char strings[MAX_STRINGS][MAX_LENGTH] = {
    "The quick brown fox jumps over the lazy dog.",
    "Lorem ipsum dolor sit amet, consectetur adipiscing elit.",
    "Programming is fun and challenging!",
    "Life is like a box of chocolates, you never know what you're gonna get...",
    "In the end, it's not the years in your life that count. It's the life in your years!",
    "Two things are infinite: the universe and human stupidity; and I'm not sure about the universe.",
    "Be yourself; everyone else is already taken.",
    "I have not failed. I've just found 10,000 ways that won't work.",
    "The only way to do great work is to love what you do.",
    "Success is not final, failure is not fatal: It is the courage to continue that counts!",
    "The greatest glory in living lies not in never falling, but in rising every time we fall.",
    "Life is what happens when you're busy making other plans.",
    "You only live once, but if you do it right, once is enough.",
    "Believe you can and you're halfway there.",
    "The best way to predict the future is to invent it...",
    "The future belongs to those who believe in the beauty of their dreams!",
    "The only thing necessary for the triumph of evil is for good men to do nothing...",
    "Darkness cannot drive out darkness: only light can do that. Hate cannot drive out hate: only love can do that.",
    "To be yourself in a world that is constantly trying to make you something else is the greatest accomplishment.",
    "I am enough of an artist to draw freely upon my imagination. Imagination is more important than knowledge. Knowledge is limited. Imagination encircles the world."};

void compareIsAlpha()
{
    for (int i = 0; i < 200; i++)
    {
        compare_and_print("isalpha", i, isalpha(i), ft_islapha(i));
    }
}

void compareIsDigit()
{
    for (int i = 0; i < 200; i++)
    {
        compare_and_print("isdigit", i, isdigit(i), ft_isdigit(i));
    }
}

void compareIsAlnum()
{
    for (int i = 0; i < 200; i++)
    {
        compare_and_print("isalnum", i, isalnum(i), ft_isalnum(i));
    }
}

void compareIsAscii()
{
    for (int i = 0; i < 200; i++)
    {
        compare_and_print("isascii", i, isascii(i), ft_isascii(i));
    }
}

void compareIsPrint()
{
    for (int i = 0; i < 200; i++)
    {
        compare_and_print("isprint", i, isprint(i), ft_isprint(i));
    }
}

void compareStrlen()
{
    // ft_strlen
    for (int i = 0; i < MAX_STRINGS; i++)
    {
        compare_and_print("strlen", i, strlen(strings[i]), ft_strlen(strings[i]));
    }
}

void compareMemset()
{
    // memset
    char *buffer = malloc(MAX_LENGTH * sizeof(char));
    char *buffer2 = malloc(MAX_LENGTH * sizeof(char));

    for (int i = 0; i < MAX_STRINGS; i++)
    {
        for (int k = 0; k < MAX_LENGTH; k++)
        {
            memcpy(buffer, strings[i], MAX_LENGTH);
            memcpy(buffer2, strings[i], MAX_LENGTH);

            char a = '.';
            memset(buffer, a, k);
            ft_memset(buffer2, a, k);

            str_compare_and_print("memset", i, buffer, buffer2);
        }
    }

    free(buffer);
    free(buffer2);
}

void compareBzero()
{
    char *buffer = malloc(MAX_LENGTH * sizeof(char));
    char *buffer2 = malloc(MAX_LENGTH * sizeof(char));
    for (int i = 0; i < MAX_STRINGS; i++)
    {
        for (int k = 0; k < MAX_LENGTH; k++)
        {
            memcpy(buffer, strings[i], MAX_LENGTH);
            memcpy(buffer2, strings[i], MAX_LENGTH);

            bzero(buffer, k);
            ft_bzero(buffer2, k);

            str_compare_and_print("ft_bzero", i, buffer, buffer2);
        }
    }
    free(buffer);
    free(buffer2);
}

void compareMemCpy()
{
    char *buffer = malloc(MAX_LENGTH * sizeof(char));
    char *buffer2 = malloc(MAX_LENGTH * sizeof(char));

    for (int i = 0; i < MAX_STRINGS; i++)
    {
        for (int k = 0; k < MAX_LENGTH; k++)
        {
            if(strings[i]) {
                memcpy(buffer, strings[i], k );
                ft_memcpy(buffer2, strings[i], k );
                str_compare_and_print("memcpy", i, buffer, buffer2);
            }
        }
    }

    free(buffer);
    free(buffer2);
}

void compareMemMove()
{
    char *buffer = malloc(MAX_LENGTH * sizeof(char));
    char *buffer2 = malloc(MAX_LENGTH * sizeof(char));

    for (int i = 0; i < MAX_STRINGS; i++)
    {
        for (int k = 0; k < MAX_LENGTH; k++)
        {
            memmove(buffer, strings[i], MAX_LENGTH);
            memmove(buffer2, strings[i], MAX_LENGTH);
            str_compare_and_print("memmove", i, buffer, buffer2);
        }
    }
}

int main(void)
{
    // compareIsAlpha();
    // compareIsDigit();
    // compareIsAlnum();
    // compareIsAscii();
    // compareIsPrint();
    // compareStrlen();
    // compareMemset();
    // compareBzero();
    compareMemCpy();
    // compareMemMove();
    return (0);
}