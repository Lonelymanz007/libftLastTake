/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphuwian <tphuwian@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-14 11:39:32 by tphuwian          #+#    #+#             */
/*   Updated: 2025-09-14 11:39:32 by tphuwian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*b;

	if (!s1 || !s2)
		return (NULL);
	b = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!b)
		return (NULL);
	ft_strlcpy(b, s1, ft_strlen(s1) + 1);
	ft_strlcat(b, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (b);
}
