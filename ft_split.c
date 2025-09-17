/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphuwian <tphuwian@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-14 16:45:36 by tphuwian          #+#    #+#             */
/*   Updated: 2025-09-14 16:45:36 by tphuwian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countword(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			++s;
		if (*s)
			i++;
		while (*s && *s != c)
			++s;
	}
	return (i);
}

void	ft_token(char **arr, char const *s, char c)
{
	size_t		i;
	char const	*str;

	while (*s)
	{
		while (*s && *s == c)
			++s;
		str = s;
		i = 0;
		while (*s && *s != c)
		{
			++s;
			i++;
		}
		if (s > str)
		{
			*arr = ft_substr(str, 0, i);
			arr++;
		}
	}
	*arr = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**b;
	int		i;

	if (!s)
		return (NULL);
	i = ft_countword(s, c);
	b = malloc(sizeof(char *) * (i + 1));
	if (!b)
		return (NULL);
	ft_token(b, s, c);
	return (b);
}

// int main()
// {
// 	char *a = "__abc__def__ef_jb_f__";
// 	char b = '_';
// 	char **s = ft_split(a, b);

// 	while(*s)
// 	{
// 		printf("%s", *s);
// 		s++;
// 	}
// }
