/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwasserf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 16:38:00 by gwasserf          #+#    #+#             */
/*   Updated: 2019/05/28 16:38:18 by gwasserf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!*s1 && !*s2)
		return (1);
	while (*s1 && n)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
		n--;
	}
	if (!*s1 && *s2)
		return (0);
	return (1);
}
