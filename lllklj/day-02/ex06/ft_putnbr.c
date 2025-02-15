/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksticks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:09:52 by ksticks           #+#    #+#             */
/*   Updated: 2019/06/06 15:09:54 by ksticks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_put_positive(int nb)
{
	int	a;
	int	b;

	if (!nb)
		return ;
	a = nb / 10;
	b = nb - a * 10;
	ft_put_positive(a);
	ft_putchar('0' + b);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(-2);
		ft_putnbr(147483648);
		return ;
	}
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		ft_put_positive(-nb);
		return ;
	}
	ft_put_positive(nb);
}
