#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * new_word - accepts a string and return the fist word in it allocated in heap
 * @s: the string to return it's first word
 * Return: first word or NULL if it can't be allocated
 */

char *new_word(char *s)
{
	int i = 0;
	char *word;
	int j;

	while (s[i] != ' ' && s[i] != '\0')
		i++;

	word = malloc(sizeof(char) * i + 1);
	if (word != NULL)
	{
		for (j = 0; j < i; j++)
		{
			word[j] = s[j];
		}
		word[j] = '\0';
		return (word);
	}
	return (NULL);
}

/**
 * count_words - counts words in a string
 * @s: the string to be counted
 * Return: the count
 */

int count_words(char *s)
{
	int i;
	int word_started = 0;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			word_started = 1;
		}
		else if (word_started)
		{
			count++;
			word_started = 0;
		}
	}
	return (count);
}

/**
 * strtow - accepts a string and return an array of its words
 * @str: the string accepted
 * Return: an array of strings (words in a string)
 */

char **strtow(char *str)
{
	int words_count = count_words(str);
	int i;
	int j = 0;
	char **words = (char **) malloc((words_count + 1) * sizeof(char *));
	char *word;

	if (words == NULL || words_count == 0 || str == NULL)
		return (NULL);
	for (i = 0;  str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			continue;
		word = new_word(str + i);
		if (word != NULL)
		{
			words[j] = word;
			j++;
			i += strlen(word) - 1;
		}
		else
		{
			for (i = 0; i < j; i++)
				free(words[i]);
			free(words);
			return (NULL);
		}
	}
	words[j] = NULL;

	return (words);

}
