/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksticks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 18:42:17 by ksticks           #+#    #+#             */
/*   Updated: 2019/06/10 18:42:18 by ksticks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_up(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int		ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!is_up(*str))
			return (0);
		str++;
	}
	return (1);
}
