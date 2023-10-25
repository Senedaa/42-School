/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 23:47:15 by sabraham          #+#    #+#             */
/*   Updated: 2023/07/31 23:01:50 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int s)
{
	if (s >= 'A' && s <= 'Z')
	{
		s = s + 32;
		return (s);
	}
	return (s);
}

// int main(void)
// {
// 	char b= 'D';
// 	printf("%c\n", ft_toupper(b));
// }