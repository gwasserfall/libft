/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwasserf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 18:33:32 by gwasserf          #+#    #+#             */
/*   Updated: 2019/05/29 12:44:21 by gwasserf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dstlen;
	size_t srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen((char *)src);
	if (dstsize < dstlen + 1)
		return (srclen + dstsize);
	dst += dstlen;
	ft_memcpy(dst, src, srclen + 1);
	dst[dstsize - dstlen - 1] = 0;
	return (srclen + dstlen);
}
