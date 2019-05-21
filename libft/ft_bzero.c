/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwasserf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:53:25 by gwasserf          #+#    #+#             */
/*   Updated: 2019/05/20 17:06:26 by gwasserf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.a"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
